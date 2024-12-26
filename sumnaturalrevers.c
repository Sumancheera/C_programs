#include<stdio.h>

int main(){
int n;
printf("enter n value:",n);
scanf("%d",&n);
int sum=0;
for (int i=n;i>=1;i--){
sum=sum+i;
printf("%d\n",i);
}
printf("the sum of n natural num is : %d\n",sum);
    return 0;
}