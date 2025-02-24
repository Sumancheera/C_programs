#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);

int main(){
    top=-1;
    printf("enter the size of stack:\n");
    scanf("%d",&n);
    printf("stack operations using array\n");
    printf("1. push \n 2.pop \n 3.display\n 4.exit\n");
    do
    {
        printf("\n enter the choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
        printf("\n\t Exit point\n");
        break;
        }
        default:{
            printf("please enter correct num\n");
        }
        }
    } while (choice!=4);
    return 0;
}
void push(){
    if(top>=n-1){
        printf("stack is overflow\n");
    }else{
        printf("enter val to be added:\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top<=-1){
        printf("stack is underflow\n");
    }else{
        printf("the popped ele is :%d",stack[top]);
        stack[top]=0;
        top--;
    }
}
void display(){
    if(top>=0){
        printf("ele in stack are:\n");
        for ( i = top; i >=0; i--)
        {
            printf("%d\n",stack[i]);
        }
        printf("press next choice\n");
    }else{
        printf("stack is empty");
    }
}