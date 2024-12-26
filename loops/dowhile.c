#include<stdio.h>

int main(){
    int i=11;
do{
printf("%d\n",i);
i++;  // if you forget this it will become infinite loop.
}while(i<=10);
return 0;
}