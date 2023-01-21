#include<stdio.h>
#define N 10
void main()
{
    int arr[N] = {110,120,130,140,150};
    int count = 0 ,i;
    while(arr[i] != '\0')
    {
        count++;
        i++;
    }

    printf("There are %d elements in the array\n", count);

    printf("Given Array is : ");
    for(i=0; i<count; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\nAfter deleting the first element: ");
    for(i=1; i<count; i++)
    {
        printf("%d\t", arr[i]);
    }
    i=1;
    count=0;
    while(arr[i] != '\0')
    {
        count++;
        i++;
    }

    printf("\nThere are %d elements in the array\n", count);
}