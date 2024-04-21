#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int arr[MAX];
int top = -1;

int isEmpty()
{
    if(top == -1)
    return 1;
    else 
    return 0;
}

int main()
{
    if(isEmpty())
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack is not empty");
    }
}//stack is empty