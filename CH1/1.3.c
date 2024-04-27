#include <stdio.h>


void printArrayAddress(int arr[], int count)
{

    printf("Values stored in array are : ");
    for (int i = 0; i < count;i++)
    {
        printf("Data: [%d] has Address: [%p] \n", arr[i],arr+i);
    }

}

void printArrayUsingPointer(int arr[], int count)
{

    printf("Values stored in array are : ");
    int * ptr = arr;
    for (int i = 0; i < count;i++)
    {
        printf("Data: [%d] has Address: [%p] \n",*ptr,ptr);
        ptr++;
    }
}

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
        printArrayAddress(arr,10);
        printArrayUsingPointer(arr,10);

}


