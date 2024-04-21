#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int arr[MAX] = {1,2,3};
int top = 2;

int isFull()
{
    if(top == MAX-1)
    return 1;
    else 
    return 0;
}

int main()
{
    if(isFull())
    {
        printf("stack is full and data cant be pushed\n");
    }
    else
    {
        printf("stack is not full an data can be pushed");
    }
}
//stack is full and data cant be pushed