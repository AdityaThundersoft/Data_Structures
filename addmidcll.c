#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* newcll(int n)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = n;
    temp->next = temp;
    return temp;
}

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

struct node* addmid(struct node *tail, int n, int pos)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    struct node *ptr;
    ptr = tail->next;
    while(--pos)
    {
        ptr = ptr->next;
    }
    if(ptr == tail)
    {
        tail = addend(tail,n);
        return tail;
    }
    temp->data = n;
    temp->next = ptr->next;
    ptr->next = temp;
    return tail;
}

struct node* del(struct node* tail, int pos)
{
    struct node *temp = (struct node *) malloc(sizeod(struct node));
    temp = tail->next;
    if(pos == 1)
    {
        tail.next = temp.next;
        free(temp);
        return tail;
    }
    pos = pos-1;
    while(--pos)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    temp = temp->next;
    free(temp);
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
    struct node *tail = (struct node *) malloc(sizeof(struct node));
    tail = newcll(15);
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
    printf("\n");
    tail = addmid(tail,77,8);
    print(tail);
    printf("\n");
    tail = del(tail,1);
    return 0;
} 