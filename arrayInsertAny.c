#include<stdio.h>
#define N 10
void insert(int [], int);

void main()
{
    int arr[N] = {10,11,12,13,14,15};
    int i=0, count = 0, ch;

    while(arr[i] != '\0')
    {
        count ++;
        i++;
    }
    printf("\nThere are %d elements in the given array.\n", count);
    printf("\nThe Given Array is: ");
    for(i=0; i<count; i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\nDo you wish to add data into the array? \n1. Yes \n2. No\n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
        {
            insert( arr, count);
        }
        break;
        case 2:
        {
            printf("Exited from the Program\n");
        }
        break;
        default : printf("Entered wrong choice\n");
    }
}

void insert(int arr[N], int count)
{
    int num, pos, i;

    printf("\nEnter any integer number to add into the array: ");
    scanf("%d", &num);
    
    printf("\nEnter the position : ");
    scanf("%d", &pos);
    
    for(i=count; i>=pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = num;
    for(i=0; i<=count; i++)
    {
        printf("%d\t", arr[i]);
    }
}