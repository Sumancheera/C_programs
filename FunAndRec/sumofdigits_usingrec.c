#include<stdio.h>
#include<math.h>

int sumofdigits( int n, int sum){  // fun defination. // parameters(n,sum). // 143
if(n==0){
    return sum; // break to stop recursion, base case. sum=0;
}
sum=sum+n%10; // sum=3,
//sumofdigits(n/10, sum); if you just call it wont work, you have to assing any value or variables.

return sumofdigits(n/10,sum);  // if you return sum; this will end here only. 
//1st sum=3,n=143, 2nd n=14, sum=7. 3rd time- n=1,sum=8. 


}
int main(){
int n,sum=0;
printf("enter the num:");
scanf("%d",&n);
printf("sum of that num is :%d",sumofdigits(n,sum)); // fun calling with argumrts( n,sum);
return 0;
}
