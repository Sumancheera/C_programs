#include<stdio.h>
#include<math.h>
void sum_prod_avg(int a, int b, int *sum, int *prod, int *avg);
int main(){
    int a=3,b=5;
int sum, prod, avg; // pass empty variable and fill with the values by fun operation using passing reference.
sum_prod_avg(a,b,&sum, &prod, &avg); // after calling the sum, prod, avg , will be filled with results.
printf("sum is :%d\n",sum);
printf("sum is :%d\n",prod);
printf("sum is :%d\n",avg);
return 0;
}
void sum_prod_avg(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod=a*b;
    *avg=(a+b)/2;

}
