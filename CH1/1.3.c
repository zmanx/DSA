#include <stdio.h>

void printArray(int arr[],int count)

{
    printf("Values stores in array are : ");
    for (int i = 0;i < count; i++)
    {    
        printf("[%d]",arr[i]);

    }
}



int main()

{

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

        printArray(arr,10);
}

