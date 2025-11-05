#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct node* prev;
    int val;
    struct node* next;
}node;

node* head=NULL;
node* tail=NULL;

node* creat_node(int val)
{
    node* new=(node*)malloc(sizeof(node));
    new->prev=NULL;
    new->val=val;
    new->next=NULL;
    return new;
}

void insert_at_head(int val)
{
    node* new=creat_node(val);
    if(head==NULL && tail==NULL) 
    {
        head=new;
        tail=new;
        return;
    }
    new->next=head;
    head->prev=new;
    head=new;
}

void insert_at_tail(int val)
{
    node* new=creat_node(val);
    if(head==NULL && tail==NULL)
    {
        head=new;
        tail=new;
        return;
    }
    tail->next=new;
    new->prev=tail;
    tail=new;
}

void display_from_head()
{
    if(head==NULL && tail==NULL)
    {
        printf("Double Linked list is empty\n");
        return;
    }
    node*temp=head;
    printf("Double List: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
}

void display_from_tail()
{
    if(head==NULL && tail==NULL)
    {
        printf("Double Linked list is empty\n");
        return;
    }
    node*temp=tail;
    printf("Double List: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->prev;
    }
    printf("\n");
} 

void delete_at_head()
{

    if(head==NULL && tail==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    node* del=head;
    head=head->next;
    head->prev=NULL;
    free(del);
}

void delete_at_tail()
{
    if(head==NULL && tail ==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    if(head->next==NULL)
    {
        free(head);
        head=tail=NULL;
        return;
    }
    node*del=tail;
    tail=tail->prev;
    tail->next=NULL;
    free(del);
    
}

int main()
{
    int n;
    while(1)
    {
        printf("\tEnter\n\t1.Insert at Head\n\t2.Insert at Tail\n\t3.Display From Head\n\t4.Display From Tail\n\t5.Delete at head\n\t6.Delete at tail\n\tAny other key to exit:\n");
        scanf("%d",&n);
        if(n==1)
        {
            // insert at head;
            int val;
            printf("Enter the value to insert: ");
            scanf("%d",&val);
            insert_at_head(val);
        }
        else if(n==2)
        {
            int val;
            printf("Enter the value to insert: ");
            scanf("%d",&val);
            insert_at_tail(val);
        }
        else if(n==3)
        {
            display_from_head();
        }
        else if(n==4)
        {
            display_at_tail();
        }
        else if(n==5)
        {
            delete_at_head();
        }
        else if(n==6)
        {
            delete_at_tail();
        }
        else break;
    }
}