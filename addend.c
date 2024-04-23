#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* addend(struct node *ptr, int a)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = a;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
}

void print(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    if(head == NULL)
    {
        printf("ll is empty");
    }
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    
    struct node *ptr;
    ptr = head;
    ptr = addend(ptr,10);
    ptr = addend(ptr,20);
    ptr = addend(ptr,30);
    print(head);
    return 0;
}
//45 10 20 30