#include<stdio.h>
#include<math.h>
int sum(int a,int b, int *result); // pass by reference
int main(){
int result=0;
printf("before %d\n",result);
printf(" main %d\n",sum(3,4,&result)); // passing reference // sending address of variable not value
printf("Actual %d\n",result);  
return 0;
}
int sum(int a,int b, int *result){  // *variable = value at address
    *result = a+b;
    printf("in fun %d\n",*result);
   return *result; 
}
