#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* newll(int n)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;
    return temp;
}

struct node* addend(struct node* ptr, int n)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}

struct node* addstart(struct node* head, int n)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = n;
    temp->next = head;
    head = temp;
    return head;
}

struct node* addmid(struct node* head, int n, int pos)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    struct node *ptr;
    ptr = head;
    while(--pos)
    {
        ptr = ptr->next;
    }
    if(pos == 1)
    {
        head = addstart(head,n);
        return head;
    }
    temp->data = n;
    temp->next = ptr->next->next;
    ptr->next = temp;
    return head;
}

struct node* del(struct node* head, int pos)
{
    struct node *ptr;
    ptr = head;
    pos = pos-1;
    while(--pos)
    {
        ptr = ptr->next;
    }
    ptr->next = ptr->next->next;
    ptr = ptr->next;
    free(ptr);
    return head;
}

void print(struct node* head)
{
    struct node *ptr;
    ptr = head;
    printf("\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *ptr;
    head = newll(10);
    ptr = head;
    ptr = addend(ptr,20);
    ptr = addend(ptr,30);
    ptr = addend(ptr,40);
    print(head);
    head = addstart(head,100);
    print(head);
    head = addmid(head,25,2);
    print(head);
    head = addmid(head,35,1);
    print(head);
    head = del(head,1);
    print(head);
}