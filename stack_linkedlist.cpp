#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node {
    int data;
    struct node *next;
};
void push(struct node **top,int val) {
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=*top;
    *top=newnode;
}
int pop(struct node **top) {
    struct node *del=*top;
    *top=(*top)->next;
    int temp=del->data;
    free(del);
    return temp;
}
int peek(struct node **top) {
    return (*top)->data;
}
int display(struct node **top) {
    while (*top!=NULL) {
        printf("\n%d ",(*top)->data);
        *top=(*top)->next;
    }
}
int main(){
    struct node *top=NULL;
    push(&top,1);
    push(&top,2);
    printf("\n %d",pop(&top));
    printf("\n %d",peek(&top));
    display(&top);
    return 0;
}