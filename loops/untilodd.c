#include<stdio.h>
// keep taking the no as input from user until enter an odd num.
// keep takinf no as input from user until enters x7.
int main(){
int n;

do{
printf("enter the number :");
scanf("%d",&n);

//if(n%2!=0){// odd 
if (n%7==0){
break;
}
    
}while(1);

printf("thank you");
}