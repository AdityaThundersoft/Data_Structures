#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int arr[MAX];
int top = -1;
void push(int);
int pop();
int isFull();
int isEmpty();

int main()
{
    push(1);
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
    push(3);
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    pop();
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    pop();
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
    pop();
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
}

int isEmpty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}

int isFull()
{
    if(top==MAX-1)
    return 1;
    else
    return 0;
}

void push(int n)
{
    if(isFull())
    {
        printf("stack overflow\n");
        return;
    }
    top = top+1;
    arr[top] = n;
}

int pop()
{
    if(isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    int a = arr[top];
    top = top-1;
    return a;
}
// 1 
// 1 2 
// 1 2 3 
// 1 2 
// 1 
