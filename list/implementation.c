#include <stdlib.h>
#include <stdio.h>
typedef struct Node{
    int value;
    struct Node* next;
}Node;
#define true 1
#define false 0
int is_empty(Node* head){
    return head->next==NULL;
}
void push_back(Node* head, int data){
    Node* last=head;
    if(is_empty(head)){
        Node* temp=(Node*) malloc(sizeof(Node));
        temp->value=data;
        temp->next=NULL;
        head->next=temp;
    }
    for(;last->next!=NULL;last=last->next);
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->value=data;
    temp->next=NULL;
    last->next=temp;
}
void push_front(Node* head, int data){
    if(is_empty(head)){
            Node* temp=(Node*) malloc(sizeof(Node));
            temp->value=data;
            temp->next=NULL;
            head->next=temp;
        }
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->value=data;
    temp->next=head->next;
    head->next=temp;
}
int front(Node* head){
  return head->next->value;
}
int back(Node* head){
    Node* last=head;
    for(;last->next!=NULL;last=last->next);
    return last->value;
}
void printl(Node* head){
    for(Node* temp=head->next;temp!=NULL;temp=temp->next){
        printf("%d->",temp->value);
    }
}
int pop_front(Node* head){
    Node* temp=head->next;
    int val=temp->value;
    free(temp);
    return val;
}
int pop_back(Node* head){
    Node* temp=head;
    for(;temp->next!=NULL;temp=temp->next);
    int val=temp->value;
    free(temp);
    return val;
}
int main(){
    Node* head=(Node*)malloc(sizeof(Node));
    head->next=NULL;
    for(int x;scanf("%d",&x)!=EOF;){
        push_back(head,x);
    }
    printl(head);
}
