#include<stdio.h>
#include<math.h>

void namasthey(){   // it is a void function so it wont return anything, except int main, 
//all int float, char functions should return something

    printf("namasthey\n");
    printf("welcome to india");
}
void bonjour(){
    printf("bonjour\n");
    printf("welcome to french");
}
int main(){
char ch;
printf("enter i for india or f for french:");
scanf("%c",&ch);
if (ch == 'i'){
namasthey();
}else{
bonjour();
}

return 0;
}