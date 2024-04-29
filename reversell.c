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
    ptr = NULL;
    free(ptr);
    return head;
}

struct node* rev(struct node* head)
{
    struct node *ptr1, *ptr2;
    ptr1 = head;
    ptr2 = ptr1->next;
    head->next = NULL;
    while(ptr2->next!= NULL)
    {
        ptr1 = ptr2;
        ptr2 = ptr1->next;
        ptr1->next = head;
        head = ptr1;
    }
    ptr2->next = ptr1;
    head = ptr2;
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
    int n,a;
    printf("enter no of nodes in ll: ");
    scanf("%d",&n);
    printf("enter data: ",1);
    scanf("%d",&a);
    head = newll(a);
    ptr = head;
    n= n-1;
    while(n--)
    {
        printf("enter data: ");
        scanf("%d",&a);
        ptr = addend(ptr,a);
    }
    print(head);
    head = rev(head);
    print(head);
    return 0;
}
// enter no of nodes in ll: 5
// enter data: 1
// enter data: 2
// enter data: 3
// enter data: 4
// enter data: 5

// 1 2 3 4 5 
// 5 4 3 2 1