//Linear Search

#include<stdio.h>

int main(void)
{
    int arry[10];
    printf("Enter 10 Number: ");

    for(int i = 0; i<=9; i++)
    {
        scanf("%d", &arry[i]);
    }

    int key;
    printf("Enter the key:");
    scanf("%d", &key);

    int index = -1;
    

    for(int i = 0; i<=9; i++){
        if(arry[i] == key){
            index = i;
            
            break;
        }
    }

    if(index == -1)
    {
        printf("%d is not found\n", key);
    }
    else{
        printf("%d is found at %d index\n", key, index);
    }
    return 0;
}