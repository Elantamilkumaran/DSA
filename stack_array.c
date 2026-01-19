#include<stdio.h>
#include<limits.h>
#include <stdlib.h>
#define MAX_SIZE 20
struct Stack {
    int arr[MAX_SIZE];
    int top;
};
struct Stack* create_stack() {
    struct Stack *p=(struct Stack*)malloc(sizeof(struct Stack));
    p->top=-1;
    return p;
}
void push(struct Stack *stack,int val){
    if(stack->top==MAX_SIZE-1){
        printf("\narray is full");
}
    stack->arr[++stack->top]=val;
}
int pop(struct Stack *stack) {
    if (stack->top==-1) {
        printf("Array is empty");
        return INT_MIN;
    }
    return stack->arr[stack->top--];
}
int peek(struct Stack *stack) {
    if (stack->top==-1) {
        printf("Array is empty");
        return INT_MIN;
    }
    return stack->arr[stack->top];
}
void display(struct Stack *stack) {
    for (int i=stack->top;i>=0;i--) {
        printf("%d ",stack->arr[i]);
    }
}
int main(){
    struct Stack *s1=create_stack();
    push(s1,1);
    push(s1,2);
    display(s1);
    printf("\n %d",pop(s1));
    printf("\n %d",peek(s1));
    return 0;
}