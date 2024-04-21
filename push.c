#include <stdio.h>
#define MAX 4
int arr[MAX];
int top = -1;

void push(int n)
{
    if(top+1<MAX)
     arr[++top] = n;
    else
     {
         printf("array overloaded\n");
         return;
     }
}

int main()
{
    push(1);
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(3);
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(4);
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(2);
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(5);
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
}
// 1 
// 1 3 
// 1 3 4 
// 1 3 4 2 
// array overloaded
// 1 3 4 2 