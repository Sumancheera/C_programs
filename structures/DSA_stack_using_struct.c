// C Program to demonstrate how to Implement a Stack
#include <stdio.h>
#include <stdbool.h>

// Define the maximim capacity of the stack
#define MAX_SIZE 100

// Define a structure for the stack
typedef struct {
    // Array to store stack elements
    int arr[MAX_SIZE];  
    // Index of the top element in the stack
    int top;        
} Stack_struct;

void initialize(Stack_struct *stack){
    stack->top=-1; //set top index to -1 to indicate an empty stack
    //stack->arr[stack->top+1]=0; no need already empty untadi, why we need 0 initially
}
bool isEmpty(Stack_struct *stack){
    return stack->top==-1; //return true if top is -1, else false
}
bool isFull(Stack_struct *stack){
    return stack->top==MAX_SIZE-1;
}
void push(Stack_struct *stack,int val){
    if(isFull(stack)){
        printf("stack overflow\n");
        return;
    }
    (*stack).arr[++stack->top]=val; //increment top and add element to stack
    printf("pushed %d onto the stack\n",val);
}
int pop(Stack_struct *stack){
    if (isEmpty(stack)){
        printf("stack underflow\n");
        return -1;
    }
    int popped=stack->arr[stack->top]; //return the top ele
    stack->arr[stack->top]=0;
    stack->top--;
    printf("popped %d from the stack\n",popped);
    return popped;
}
int peek(Stack_struct *stack){
    if (isEmpty(stack)){
        printf("stack is empty");
        return -1;
    }
    return stack->arr[stack->top];
}


int main() {
Stack_struct stack;
initialize(&stack);

push(&stack,10); //push 10 onto the stack
printf("top ele : %d\n",peek(&stack)); //print top element of the stack

push(&stack, 20);
printf("Top element: %d\n", peek(&stack));

push(&stack, 30);
printf("Top element: %d\n", peek(&stack));

push(&stack, 40);
printf("Top element: %d\n", peek(&stack));

pop(&stack);
pop(&stack);

printf("peeked top ele:%d\n",peek(&stack));
printf("popped but still there in arr: %d\n",stack.arr[3]);
printf("popped but still there in arr: %d\n",stack.arr[2]);
printf("popped but still there in arr: %d\n",stack.arr[5]); // printing empty val


}