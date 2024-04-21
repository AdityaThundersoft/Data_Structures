#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int arr[MAX];
int f = -1;
void push(int);
int pop();

int main()
{
    push(10);
    for(int i=0;i<=f;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(20);
    for(int i=0;i<=f;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(30);
    for(int i=0;i<=f;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(40);
    for(int i=0;i<=f;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(50);
    for(int i=0;i<=f;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("%d\n",pop());
    for(int i=0;i<=f;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void push(int n)
{
    if(f == MAX-1)
    {
        printf("stack overflow\n");
        return;
    }
    f = f+1;
    for(int i=f;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = n;
}

int pop()
{
    int a = arr[0];
    for(int i=0;i<=f;i++)
    {
        arr[i] = arr[i+1];
    }
    f = f-1;
    return a;
}
// 10 
// 20 10 
// 30 20 10 
// 40 30 20 10 
// stack overflow
// 40 30 20 10 
// 40
// 30 20 10