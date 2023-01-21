#include<stdio.h>
#define N 10
void main()
{
    int arr[N] = {110,120,130,140,150};
    int count = 0 ,i,element;
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
    printf("\nEnter an element to add into the array: ");
    scanf("%d", &element);
    if(count == N)
    {
        printf("Array is Full\n");
    }
    else
    {
        arr[count] = element;
    }
    printf("\nAfter adding 1 element into the array: ");
    for(i=0; i<=count; i++)
    {
        printf("%5d", arr[i]);
    }
}