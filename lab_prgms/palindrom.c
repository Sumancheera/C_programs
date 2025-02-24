#include<stdio.h>
#include<math.h>
int main(){  // check num is palindrom or not.?
int n,rem,sum=0;
printf("enter the num:");
scanf("%d",&n);   //n=121
int temp=n;
while(n>0){  
        rem = n%10;   //r=1; r=2;r=1.
        sum=rem+(sum*10); //sum=1;sum=12;sum=121.
        n=n/10;  // 12;1;0
        }
if(temp==sum)
printf("palindrom");
else
printf("not palindrom");
return 0;
}