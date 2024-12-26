#include<stdio.h>
#include<math.h>
int main(){
    int *ptr,x;
    ptr=&x;
    *ptr=0; // indirectly accessed x value;
    printf("x= %d\n",x);  // 0
      printf("*ptr= %d\n",*ptr);

      *ptr+=5;  //5=0+5;
       printf("x= %d\n",x);
      printf("*ptr= %d\n",*ptr);

      (*ptr)++;  // 5+1=6
      printf("x= %d\n",x);
      printf("*ptr= %d\n",*ptr);
return 0;
}    // to print address &VARIABLE, to print value - *variable;
