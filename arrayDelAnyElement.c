#include<stdio.h>
#define N 10
void main()
{
    int arr[N] = {110,120,130,140,150};
    int count = 0 ,i, element, position;
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

    printf("\nEnter the element you wish to delete: ");
    scanf("%d", &element);

    for(i=0; i<count; i++)
    {
        if(arr[i] == element)
        {
            position = i;
        }
    }
    printf("\nThe index is : %d\n", position);

    if(position > count)
    {
        printf("\nDeletion is NOT POSIBBLE\n");
    }
    else
    {
      for (i = position; i < count; i++)
      {
        arr[i] = arr[i+1];
      }
      printf("\nResultant array:\n");

      for (i = 0; i < count-1; i++)
      {
        printf("%d\n", arr[i]);
      }
    }
}