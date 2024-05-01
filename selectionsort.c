// Online C compiler to run C program online
#include <stdio.h>

void select(int* a, int n)
{
    int min;
    for(int i=0;i<n;i++)
    {
        min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main() {
    int n = 5;
    int a[5] = {5,4,3,2,1};
    select(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}