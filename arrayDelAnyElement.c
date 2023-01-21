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
    int element;
    printf("Enter the element you wish to delete: ");
    scanf("%d", &element);
    for(i=0; i<count; i++)
    {
        if(arr[i] == element)
        break;
    }
}