#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the no of terms:");
    scanf("%d",&n);
    int t1=0,t2=1;
    printf("fibo series are: %d,%d",t1,t2);
    int nextt=t1+t2;
    int i = 3;
    while (i <=n)
    {
         printf(",%d",nextt);
        t1=t2;
        t2=nextt;
        nextt=t1+t2;
        i++;
    }
    
return 0;
}