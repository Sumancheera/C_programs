#include<stdio.h>
#include<math.h>
int Factorial(int n);
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d",&num);
printf("Factorial of the num is : %d",Factorial(num));
return 0;
}
int Factorial( int n){
    if(n==1){
        return 1;
    }
    int factNm1 = Factorial(n-1);
    int factN = factNm1*n;
    return factN;
}