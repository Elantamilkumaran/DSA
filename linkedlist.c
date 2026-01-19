#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertAtbegining(int val) {
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL) {
        printf("\n no memory allocated");
        return;
    }
    newnode->data=val;
    if (head==NULL) {
        newnode->next=NULL;
        head=newnode;
    }
    else {
        newnode->next=head;
        head=newnode;
    }
    printf("\n %d added at front successfully",val);
}
void insertAtend(int val) {
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL) {
        printf("\n no memory allocated");
        return;
    }
    newnode->data=val;
    newnode->next=NULL;
    if (head==NULL) {
        head=newnode;
    }
    else {
        struct node *temp=head;
        while (temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    printf("\n %d added at end successfully",val);
}
void deleteAtbegining() {
    if (head==NULL) {
        printf("\n list is empty");
        return;
    }
    else {
        struct node *temp=head;
        head=head->next;
        free(temp);
    }
    printf("Deleted successfully at front");
}
void deleteAtend() {
    struct node *temp,*prev;
    temp=head;
    while (temp->next!=NULL) {
        prev=temp;
        temp=temp->next;
    }
    if (temp==head) {
        head=NULL;
        free(temp);
    }
    else {
        prev->next=NULL;
        free(temp);
    }
    printf("Deleted successfully at end");
}
void display() {
    printf("\n Linked list elements are:\n");
    if (head==NULL) {
        printf("\n list is empty");
        return;
    }
    struct node *temp=head;
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
while (1) {
    int choice;
    int val;
    printf("\n----------Menu---------");
    printf("\n1.Insert at begining");
    printf("\n2.display");
    printf("\n3.Insert at end");
    printf("\n4.Delete at begining");
    printf("\n5.Delete at end");
    printf("\n7.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            printf("Enter a value to insert at begining:");
            scanf("%d",&val);
            insertAtbegining(val);
            break;
        case 2:display();
            break;
        case 3:
            printf("Enter a value to insert at end:");
            scanf("%d",&val);
            insertAtend(val);
            break;
        case 4:
            deleteAtbegining();
            break;
        case 5:
            deleteAtend();
            break;
        case 7:return(0);
    }
}
}
