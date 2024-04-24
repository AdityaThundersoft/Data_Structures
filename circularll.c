#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* addend(struct node *tail, int n)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = n;
    temp->next = tail->next;
    tail->next = temp;
    return temp;
}

struct node* addbeg(struct node *tail, int n)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = n;
    temp->next = tail->next;
    tail->next = temp;
    return tail;
}

void print(struct node *tail)
{
    struct node *ptr;
    ptr = tail->next;
    do
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }while (ptr!=tail->next);
    
}

int main()
{
    struct node *head = (struct node *) malloc(sizeof(struct node));
    struct node *tail;
    head->data = 10;
    head->next = head;
    tail = head;
    tail = addend(tail,10);
    tail = addend(tail,20);
    tail = addend(tail,30);
    print(tail);
    printf("\n");
    tail = addbeg(tail,15);
    tail = addbeg(tail,100);
    print(tail);
     printf("\n");
    tail = addend(tail,66);
    print(tail);
    printf("\n");
    tail = addbeg(tail,45);
    print(tail);
    return 0;
}
// 10 10 20 30 
// 100 15 10 10 20 30 
// 100 15 10 10 20 30 66 
// 45 100 15 10 10 20 30 66 