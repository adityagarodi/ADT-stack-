#include<stdio.h>
int main()
{
    int n, i, m, ch, top = -1;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("How many stack elements you want to insert? ");
    scanf("%d", &m);
    printf("Enter stack elements: ");
    for (i = 0; i < m; i++)
    {
        top++;
        scanf("%d", &a[top]);
    }
    printf("Enter your choice (1. Push, 2. Pop, 3. Display): ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            printf("Push\n");
            break;
        case 2:
            printf("Pop\n");
            break;
        case 3:
            printf("Display\n");
            break;
        default:
            printf("Enter a valid input\n");
    }
    
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack after push:\n");
        for (i = m - 1; i >= 0; i--)
        {
            printf("%d\n", a[i]);
        }
    }

    printf("How many elements you want to pop? ");
    scanf("%d", &m);
    for (i = 0; i < m && top >= 0; i++)
    {
        printf("%d\n", a[top]);
        top--;
    }
    return 0;
}
