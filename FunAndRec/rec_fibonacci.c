#include<stdio.h>
#include<math.h>
                                      // rec fun: fin(n)=fin(n-1)+fib(n-2).  
int fib(int n); // fun decleration
int main(){
    int n;
    printf("enter fib 2 or above: ");
    scanf("%d",&n);
 
printf("fib of %d is : %d",n,fib(n));              // fun calling. //to print nth term fib.
return 0;
}
int fib(int n){
    if(n==0){  // for n-2
        return 0;
    }
    if(n==1){  // for n-1
        return 1;
    }
int fibNm1=fib(n-1);
int fibNm2=fib(n-2); 
int fibn=fibNm1+fibNm2;
//printf("fib of %d is :%d\n",n,fibn); // to print erevy num in fib.
return fibn; // we can remove this, we only need return value we we need fun operation by calling
}