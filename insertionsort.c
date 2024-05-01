// Online C compiler to run C program online
#include <stdio.h>

void insert(int* a, int n)
{
    for(int i=0;i<n;i++)
    {
        int j = i;
        while(j>=0 && a[j]>a[j+1])
        {
            int temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}

int main() {
    int n = 5;
    int a[5] = {5,4,3,2,1};
    insert(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}