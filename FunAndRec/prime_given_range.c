#include<stdio.h>
#include<math.h>

int isprime(int n);
int main(){
int n1,n2;
printf("enter num1 and num2 :");
scanf("%d %d",&n1,&n2);
for (int i = n1; i <= n2; i++)
{
    if(i==0 || i==1){   // Skip 0 and 1 as they are // neither prime nor composite
    continue;
}
if (isprime(i)){
    printf("%d ",i);
}
}
return 0;
}
int isprime(int n){
for (int i = 2; i*i<= n; i++)    // or i<=sqrt(n)- not recammended when asked for without predifined funs.
// checking if num divisible from 2 to square of n. 
{//exp 2 to 16 then check from 2 to 4, if it is not divisible then it wont for other numbers too as per maths.
if(n%i==0){ 
    return 0;
}
}
return 1;
}