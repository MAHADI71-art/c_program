#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "students.dat"

struct Student
{
    int id;
    char name[50];
    char department[30];
    float cgpa;
};

/* Function declarations */
void addStudent(void);
void displayStudents(void);
void searchStudent(void);
void updateStudent(void);
void deleteStudent(void);
void showResult(void);

int main(void)
{
    int choice;

    while (1)
    {
        printf("\n====================================\n");
        printf("       STUDENT MANAGEMENT SYSTEM\n");
        printf("====================================\n");

        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Show Result / CGPA\n");
        printf("7. Exit\n");

        printf("------------------------------------\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input! Please enter a number.\n");

            while (getchar() != '\n')
            {
                /* Clear input buffer */
            }

            continue;
        }

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            showResult();
            break;

        case 7:
            printf("\nProgram exited successfully.\n");
            return 0;

        default:
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}

/* ================= ADD STUDENT ================= */

void addStudent(void)
{
    struct Student s;
    FILE *fp;

    fp = fopen(FILE_NAME, "ab");

    if (fp == NULL)
    {
        printf("\nFile could not be opened!\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &s.id);

    while (getchar() != '\n')
    {
        /* Clear input buffer */
    }

    printf("Enter Student Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter Department: ");
    fgets(s.department, sizeof(s.department), stdin);
    s.department[strcspn(s.department, "\n")] = '\0';

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);

    printf("\nStudent added successfully!\n");
}

/* ================= DISPLAY STUDENTS ================= */

void displayStudents(void)
{
    struct Student s;
    FILE *fp;

    fp = fopen(FILE_NAME, "rb");

    if (fp == NULL)
    {
        printf("\nNo student data found.\n");
        return;
    }

    printf("\n=========== ALL STUDENTS ===========\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("\nID         : %d\n", s.id);
        printf("Name       : %s\n", s.name);
        printf("Department : %s\n", s.department);
        printf("CGPA       : %.2f\n", s.cgpa);
        printf("------------------------------------\n");
    }

    fclose(fp);
}

/* ================= SEARCH STUDENT ================= */

void searchStudent(void)
{
    struct Student s;
    FILE *fp;

    int id;
    int found = 0;

    fp = fopen(FILE_NAME, "rb");

    if (fp == NULL)
    {
        printf("\nNo student data found.\n");
        return;
    }

    printf("\nEnter Student ID to search: ");
    scanf("%d", &id);

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.id == id)
        {
            printf("\nStudent Found!\n");
            printf("-----------------------------\n");
            printf("ID         : %d\n", s.id);
            printf("Name       : %s\n", s.name);
            printf("Department : %s\n", s.department);
            printf("CGPA       : %.2f\n", s.cgpa);

            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
    {
        printf("\nStudent not found!\n");
    }
}

/* ================= UPDATE STUDENT ================= */

void updateStudent(void)
{
    struct Student s;
    FILE *fp;

    int id;
    int found = 0;

    fp = fopen(FILE_NAME, "rb+");

    if (fp == NULL)
    {
        printf("\nNo student data found.\n");
        return;
    }

    printf("\nEnter Student ID to update: ");
    scanf("%d", &id);

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.id == id)
        {
            printf("\nStudent Found!\n");

            while (getchar() != '\n')
            {
                /* Clear input buffer */
            }

            printf("Enter New Name: ");
            fgets(s.name, sizeof(s.name), stdin);
            s.name[strcspn(s.name, "\n")] = '\0';

            printf("Enter New Department: ");
            fgets(s.department, sizeof(s.department), stdin);
            s.department[strcspn(s.department, "\n")] = '\0';

            printf("Enter New CGPA: ");
            scanf("%f", &s.cgpa);

            /*
                Move file pointer back by one Student structure
                because fread() has already moved it forward.
            */
            fseek(fp, -(long)sizeof(s), SEEK_CUR);

            fwrite(&s, sizeof(s), 1, fp);

            found = 1;

            printf("\nStudent updated successfully!\n");
            break;
        }
    }

    fclose(fp);

    if (!found)
    {
        printf("\nStudent not found!\n");
    }
}

/* ================= DELETE STUDENT ================= */

void deleteStudent(void)
{
    struct Student s;

    FILE *fp;
    FILE *temp;

    int id;
    int found = 0;

    fp = fopen(FILE_NAME, "rb");

    if (fp == NULL)
    {
        printf("\nNo student data found.\n");
        return;
    }

    temp = fopen("temp.dat", "wb");

    if (temp == NULL)
    {
        printf("\nTemporary file could not be created.\n");

        fclose(fp);

        return;
    }

    printf("\nEnter Student ID to delete: ");
    scanf("%d", &id);

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.id == id)
        {
            found = 1;
            continue;
        }

        fwrite(&s, sizeof(s), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    if (found)
    {
        remove(FILE_NAME);
        rename("temp.dat", FILE_NAME);

        printf("\nStudent deleted successfully!\n");
    }
    else
    {
        remove("temp.dat");

        printf("\nStudent not found!\n");
    }
}

/* ================= SHOW RESULT ================= */

void showResult(void)
{
    struct Student s;
    FILE *fp;

    int id;
    int found = 0;

    fp = fopen(FILE_NAME, "rb");

    if (fp == NULL)
    {
        printf("\nNo student data found.\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &id);

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.id == id)
        {
            printf("\n========== RESULT ==========\n");

            printf("Student ID : %d\n", s.id);
            printf("Name       : %s\n", s.name);
            printf("Department : %s\n", s.department);
            printf("CGPA       : %.2f\n", s.cgpa);

            if (s.cgpa >= 3.75)
            {
                printf("Grade      : Excellent\n");
            }
            else if (s.cgpa >= 3.50)
            {
                printf("Grade      : Very Good\n");
            }
            else if (s.cgpa >= 3.00)
            {
                printf("Grade      : Good\n");
            }
            else if (s.cgpa >= 2.50)
            {
                printf("Grade      : Satisfactory\n");
            }
            else
            {
                printf("Grade      : Needs Improvement\n");
            }

            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
    {
        printf("\nStudent not found!\n");
    }
}