#include<stdio.h>
#include<math.h>
int Sum( int n);
int main(){
printf("the sum of the n naturan num is:%d",Sum(9));  // sum of first 9 natural numbers.
return 0;
}
int Sum(int n){
    if(n==1){
    return 1;
   }
   int SumNm1= Sum(n-1);
   int SumN = SumNm1+n;
   
   return SumN;
}