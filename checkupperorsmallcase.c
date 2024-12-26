#include<stdio.h>
#include<math.h>

int main(){
char ch2;
printf("enter the char: ");
scanf("%c",&ch2);
if(ch2>='A' && ch2<='Z' ){
printf("the entered char is UPPER CASE\n");
} else if(ch2>='a'&&ch2<='z'){
    printf("entered char is Small case\n");
}else {
    printf("entered sybols or not letters");
}

    return 0;
}