
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
    while(temp !=NULL){
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

void firstinsert(int value){
    node *newnode=(node *)malloc(sizeof(node));
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
// we dont need this lat insert function for applying first insert;it is not mandatory
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
    //lastinsert(3);
    //lastinsert(4);
    //lastinsert(5);
    //display();
    firstinsert(4);
    firstinsert(3);
    firstinsert(2);
    display();
    return 0;
}










