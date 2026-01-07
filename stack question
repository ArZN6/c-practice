# c-practice
# include <stdio.h>
int main()
{
    int i,n,value;
    scanf("%d ",&n);
    int stack[n],top=-1;
    // Push
    for (i = 0; i < n; i++)
    {
        if (top != n - 1)
        {
            scanf("%d", &value);
            stack[++top] = value;
        }
        else
        {
            printf("Stack Overflow\n");
            break;
        }
    }
    // Print Stack //
    printf("Pushed Stack");
    for (i=0;i<n;i++)
    {
        printf("%d",stack[i]);
    }
    printf("\n");
    // Pop stack
    if (top!=-1)
    {
        int x;
        x = stack[top];
        top--;
        printf("Popped Item: %d",x);
    }
    else{
        printf("Stack Underflow");
        }
    printf("\n");
    //Reverse Order
    printf("Reversed Sequence");
    for (i=0;i <n;i++)
    {
        if (top!=-1)
        {
            int x;
            x = stack[top];
            top--;
            printf("%d",x);
        }
        else
        {
            break;
            printf("Stack Underflow");
        }
    }
    return 0;

}
