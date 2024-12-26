#include<stdio.h>
#include<math.h>
void printhello(int n);
int main(){
int count; // assign 5 count=5;
printf("enter how many times");
scanf("%d",&count);
printhello( count);

return 0;
}
void printhello(int n){
    if (n == 0){
        return;
    }
    printf("hello ak\n");
    printhello(n-1);
}