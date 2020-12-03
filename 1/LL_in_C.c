#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
void create(){
    int data;
    printf("Enter the data ::");
    scanf("%d",&data);
    while (data!=-1)
    {
        struct node* n = (struct node*)malloc(sizeof(struct node));
        n->data = data;
        n->next = NULL;
        if(head == NULL){
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
        printf("Enter the data ::");
        scanf("%d",&data);
    }
}
void delete(){
    int data;
    printf("Enter the data to Delete ::");
    scanf("%d",&data);
    struct node* n = head;
    struct node* prev = NULL;
    while(n->data! = data){
        prev = n;
        n = n->next;
    }
}
void display(){
    struct node* n = head;
    while(n!= tail){
        printf("%d ",n->data);
        n = n->next;
    }
    printf("%d",n->data);
}
void main(){
    create();
    display();
    return ;
}