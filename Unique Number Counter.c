//Unique Number counter
#include <stdio.h>

int main()
{
    int arr[5], size = 5;
    int i, j, count, uniqueCount = 0;

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
    {
        count = 0;

        for (j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j]) // doesnt count not unique numbers
                
            {
                count++;
                break;
            }
        }

        if (count == 0)
            uniqueCount++;
    }

    printf("Number of unique elements: %d\n", uniqueCount);

    return 0;
}
