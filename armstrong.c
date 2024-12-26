#include<stdio.h>
#include<math.h>
int main(){
   int n,rem,Arm=0;              // 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153 armstrong num.
   printf("enter the a 3 digit num :");
   scanf("%d",&n);
    int initial= n;
    while(n>0){  // 150>0, then 15>0 then 1>0.
        rem=n%10;   // 3 then 5 then 1
        Arm=(rem*rem*rem)+Arm;  // for 4 digit number, (rem*rem*rem*rem)
        n=n/10;   // n= 15.3 - 15, 1.5 - 1 then 0.1 - 0; because of int not float.
    }
// still n value is 0; n=0. so take initial n value.
if (initial==Arm){
printf("Armstrong num");
}else{
    printf("not Armstrong num");
}

return 0;
}