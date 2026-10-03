#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node *head=NULL;

void display(){
    node *temp=head;
    while(temp!= NULL){
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}


void beforeinsert(int value,int target){
    if(head==NULL){
        printf("No linked list exists\n");
        return;
    }
    if(head->data==target){
        node *temp=head;
        node *newnode=(node *)malloc(sizeof(node));
        newnode->data=value;
        newnode->next=temp;
        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->next != NULL && temp->next->data!= target){
        temp=temp->next;
    }
    if(temp->next==NULL){
        printf("target not found\n");
        return;
    }
    node *newnode=(node *)malloc(sizeof(node));
    newnode->data=value;
    newnode->next=temp->next;
    temp->next=newnode;
}

void lastinsert(int value){
    node *newnode=(node *)malloc(sizeof(node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}


int main(){
    lastinsert(10);
    lastinsert(20);
    lastinsert(30);
    lastinsert(40);
    lastinsert(60);
    lastinsert(70);
    display();
    beforeinsert(50,60);
    afterinsert(500,70);
    display();
    return;
}









