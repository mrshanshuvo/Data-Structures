#include<stdio.h>
#define N 10

void main()
{
    int arr[N],i,num;
    printf("How many elements do you wish to add: ");
    scanf("%d", &num);
    printf("Enter the elements: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nGiven Array is : ");
    for(i=0; i<num; i++)
    {
        printf("%2d", arr[i]);
    }
    printf("\n");
}