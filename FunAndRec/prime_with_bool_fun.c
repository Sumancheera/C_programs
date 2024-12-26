#include<stdio.h>
#include<stdbool.h>

bool isprime(int n); // function decleration.

int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
if(isprime(n)){  // if function calling is true or 1 then it will satisfiy the condition and excutes print.
    printf("%d is prime num",n);
} else{
    printf("not prime"); 
}

    return 0;
}


bool isprime(int n){   // function defination.
if (n<=1){  // if num is 0, 1 or less not prime number 
    return false;  // printf("this is not prime");
}
for (int i=2;i<n;i++){  // checking if number 2 to n-1, divisible then it is not prime.
if(n%i==0){
    return false;
}
}
return true; // this is prime.

}