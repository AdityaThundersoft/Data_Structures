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

struct node* swap(struct node* head, int pos1, int pos2)
{
    struct node *ptr1, *ptr2, *temp1;
    ptr1 = head;
    ptr2 = head;
    pos1--;
    pos2--;
    while(--pos1)
    {
        ptr1 = ptr1->next;
    }
    while(--pos2)
    {
        ptr2 = ptr2->next;
    }
    temp = ptr2->next->next;
    ptr2->next->next= ptr1->next->next;
    ptr1->next->next = temp;
    temp = ptr1->next;
    ptr1->next = ptr2->next;
    ptr2->next = temp;
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
    head = swap(head,1,2);
    print(head);
    return 0;
}