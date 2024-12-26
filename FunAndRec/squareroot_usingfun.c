#include<stdio.h>
#include<math.h>
double square_root(double n){
    return sqrt(n);
}
int main(){
int n;    // double or float same, use %f or %.1f for 4.0 // %.2f for 4.00.
printf("enter the num: ");
scanf("%d",&n);
printf("square root of %d is: %.1f", n, square_root(n)); 
return 0;
}