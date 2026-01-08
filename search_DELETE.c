//Search and delete
#include <stdio.h>

int main()
{
    int i, x, arr[5],size=5;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before search:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    int search;
    printf("\nSearch for a specific element: ");
    scanf("%d", &search);

    int found = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            found = 1;


            for (int j = i; j < size-1; j++)
            {
                arr[j] = arr[j+1];

            }
            size--; 
            break;
        }
    }

    if (!found)
        printf("\nElement not found");

    printf("\nArray after operation:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
