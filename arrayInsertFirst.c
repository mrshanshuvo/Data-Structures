#include<stdio.h>
#define N 10

void main()
{
    int arr[N] = {11,12,13,14,15};
    int i=0, num, count=0;

    printf("Enter the data you wish to add at FIRST in the array: ");
    scanf("%d", &num);
    
    while(arr[i] != '\0')
    {
        count++;
        i++;
    }

    printf("\nThere are %d elements in the array\n", count);

    for(i=count; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }
    printf("\n%d", count);
    printf("\nThe array will be : ");

    arr[0] = num;
    
    for(i=0; i<=count; i++)
    {
        printf("%d\t", arr[i]);
    }
}