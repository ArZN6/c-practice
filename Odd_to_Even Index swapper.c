//Odd to even index swapper
#include <stdio.h>

int main()
{
    int i, arr[5], size = 5,temp;

    // Input
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<size;i++)
    {

        if (i%2!=0)
        {
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
    for (i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}







