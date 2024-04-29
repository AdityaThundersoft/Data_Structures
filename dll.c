#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node* newdll(struct node *head, int n)
{
    head->data = n;
    head->next = NULL;
    head->prev = NULL;
    return head;
}

struct node* addend(struct node* ptr, int n)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->data = n;
    temp->prev = ptr;
    ptr->next = temp;
    temp->next = NULL;
    return temp;
}

struct node* addbeg(struct node* head, int n)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->data = n;
    temp->next = head;
    head->prev = temp;
    temp->prev = NULL;
    head = temp;
    return temp;
}

struct node* addmid(struct node* head, int n, int pos)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    struct node *ptr;
    ptr = head;
    if(pos == 1)
    {
        head = addbeg(head,n);
        return head;
    }
    while(--pos)
    {
        ptr = ptr->next;
    }
    temp->data = n;
    temp->next = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    return head;
}

struct node* del(struct node* head, int pos)
{
    struct node *ptr, *temp;
    ptr = head;
    if(pos == 1)
    {
        head = ptr->next;
        head->prev = NULL;
        return head;
    }
    pos = pos-1;
    while(--pos)
    {
        ptr = ptr->next;
    }
    
    temp = ptr->next;
    if(temp->next == NULL)
    {
        ptr->next = NULL;
        return head;
    }
    ptr->next = temp->next;
    temp->next->prev = ptr;
    temp = NULL;
    free(temp);
    return head;
}

void print(struct node* head)
{
    struct node* ptr;
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
    struct node *head = (struct node *) malloc(sizeof(struct node));
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    head = newdll(head, 10);
    ptr = head;
    head = addbeg(head, 15);
    ptr = addend(ptr,20);
    print(head);
    addmid(head, 25,2);
    print(head);
    del(head, 4);
    print(head);
    return 0;
}
// 15 10 20 
// 15 10 25 20 
// 15 10 2