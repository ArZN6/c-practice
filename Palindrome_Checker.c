// Palindrome Checker
#include <stdio.h>

int main()
{
    int i, arr[5], size = 5;
    int isPalindrome = 1;
    // Input
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (i=0;i<size/2;i++)
    {
        if (arr[i] != arr[size-i-1])
        {

            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("The array is a Palindrome");
    else
        printf("Its not ");
    return 0;
}







