//Absolute MAXiMUM difference between adjacent elements
#include <stdio.h>

int main()
{
    int i, arr[5], size = 5;

    // Input
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int max_abs_diff;
    for (i=0;i<size-1;i++)
    {
        max_abs_diff=arr[i+1]-arr[i];
        if (max_abs_diff<0)
        {
            printf("Absolute Differene at Index %d is %d \n",i,-max_abs_diff);
        }
        else
        {
            printf("Absolute Differene at Index %d is %d \n",i,max_abs_diff);
        }
    }
    return 0;
}







