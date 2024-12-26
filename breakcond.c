#include<stdio.h>
// keep taking the no as input from user until enter an odd num.

int main(){ // how to use break/continue statement
for (int i=1;i<=10;i++){
    if(i==6){
        continue;
        //break; 
    }
    printf("%d\n",i);
}
printf("program completed");
}