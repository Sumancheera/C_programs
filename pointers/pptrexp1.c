#include<stdio.h>
#include<math.h>
int main(){
    // print the value of "i"from its pointer to pointer. pptr
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr; // asking to print i value using this pptr;
    printf("%d", **pptr); // it will print address of ptr
    
    
return 0;
}