#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void print(struct node *head)
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("ll is empty");
    }
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    struct node *head = (struct node*) malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node*) malloc(sizeof(struct node));
    current->data = 12;
    current->link = NULL;
    head->link = current;

    current = (struct node*) malloc(sizeof(struct node));
    current->data = 23;
    current->link = NULL;
    head->link->link = current;
    print(head);
    return 0;
}