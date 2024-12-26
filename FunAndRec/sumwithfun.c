#include<stdio.h>
#include<math.h>

int sum(int a, int b);
void tables(int n);
int main(){
    int a,b,n;
    printf("enter the num:");
    scanf("%d",&n);
//     printf("enter the a and b values: ");
//     scanf("%d\n%d",&a,&b); 
// int s= sum(a,b); // actual parameter or argument variable 
// printf("sum is : %d ",s);
tables(n);
return 0;
}

int sum(int a, int b){ // parameter or formal parameter
    return a+b;
}
void tables(int n){
for (int i = 1; i <= 10; i++)
{
    printf("%d\n", i*n);
}
return ;
}