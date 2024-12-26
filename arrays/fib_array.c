#include<stdio.h>
#include<math.h>
int main(){
     int n;
    printf("enter the fib no: ");
    scanf("%d",&n);
    int fib[n];  // decleration of array with size n.
     fib[0]=0; fib[1]=1;
        printf("fib series is : %d,%d",fib[0],fib[1]);
        for (int i = 2; i < n; i++)
        {
            fib[i]=fib[i-1]+fib[i-2];  // fib[0]+fib[1]; for 1st time
            printf(",%d",fib[i]);
        }
return 0;
}