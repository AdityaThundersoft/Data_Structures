// Online C compiler to run C program online
#include <stdio.h>

void bubble(int* a, int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                count++;
            }
        }
        if(count==0)
            {
                return;
            }
    }
}

int main() {
    int n = 5;
    int a[5] = {1,2,3,4,5};
    bubble(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}