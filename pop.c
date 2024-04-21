#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int arr[MAX] = {1,2,3};
int top = 2;

int pop()
{
    int a = arr[top];
    if(top < 0)
    {
        printf("array is empty\n");
        exit(1);
    }
    top = top-1;
    return a;
}

int main()
{
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
}
//3
// 2
// 1
// array is empty