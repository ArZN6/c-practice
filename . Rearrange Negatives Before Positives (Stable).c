// . Rearrange Negatives Before Positives (Stable)
#include <stdio.h>

int main()
{
    int arr[8] = {1, -2, 3, -5, -1, -4, -6, 7};
    int n = 8;
    int i, j;
    int negPos = 0;   // position for next negative

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[i];

            // shift elements right
            for (j = i; j > negPos; j--)
            {
                arr[j] = arr[j - 1];
            }

            arr[negPos] = temp;
            negPos++;
        }
    }

    // Print result
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
