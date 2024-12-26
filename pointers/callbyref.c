#include<stdio.h>
#include<math.h>
void square(int n);
void _square(int *n);
int main(){
int number=4;
square(number); // call by value.
 printf("number=%d\n",number);
_square(&number);  // call by reference.  // PASSING ADDRESS OF N
printf("number after _fun = %d\n",number);
return 0;
}
void square(int n){
    n=n*n;
    printf("sqare=%d\n",n);
    return;
}
void _square(int *n){ // call by ref using pointers. // TAKINT POINTER TO STORE THAT ADDRESS.
*n=(*n)*(*n);   // changing values in address. storing result in the same address.
printf("sqare =%d\n",*n); 
    return;
}

