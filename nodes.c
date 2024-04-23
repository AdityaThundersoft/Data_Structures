#include <stdio.h>
#include <stdlib.h>

int nodes(struct node *head)
{
    struct node *ptr;
    int count = 0;
    if(head == NULL)
    {
        printf("linkedlist is empty");
        return 0;
    }
    while(ptr!=NULL)
    {
        ptr = ptr->link;
        count++;
    }
    return count;
}

struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = (struct node*) malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    //printf("%d", (*head).data);

    struct node *current = (struct node*) malloc(sizeof(struct node));
    current->data = 93;
    current->link = NULL;
    //printf("\n%d",current->data);
    head->link = current;

    current = (struct node*) malloc(sizeof(struct node));
    current->data = 33;
    head->link->link = current;

    printf("%d %d %d",head->data,head->link->data,head->link->link->data);
    return 0;
    
}
//45 93 33