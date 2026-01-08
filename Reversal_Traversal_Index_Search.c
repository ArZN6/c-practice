//Reversal Traversal Index Search
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

    int search, temp;
    printf("\nSearch for a specific element: ");
    scanf("%d", &search);

    int found = 0;

    // Reverse traversal
    for (i = size - 1; i >= 0; i--)
    {
        if (arr[i] == search)
        {
            found = 1;
            temp = i;
            break;

        }
    }

    if (!found)
        printf("\nElement not found");
    else
        printf("\nElement found at index: %d", temp);

    return 0;
}
