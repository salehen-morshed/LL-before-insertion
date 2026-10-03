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
    while(temp!=NULL){
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
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
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

int main(){
    lastinsert(10);
    lastinsert(20);
    lastinsert(30);
    lastinsert(40);
    lastinsert(50);
    display();
    return 0;
}










