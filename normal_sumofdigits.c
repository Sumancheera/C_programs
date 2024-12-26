    #include<stdio.h>
    #include<math.h>   //find the sum of digits of a given num.
    int main(){   // input 123  - then 1+2+3=6 we should get.
        int n,rem,sum=0;
printf("enter the num:");
scanf("%d",&n);
        while(n>0){  // to find sum - extract last digit by n%10;
            rem = n%10;   // digit or rem = 3; then 2; 
            sum=sum+rem; // or sum=sum+n%10;  // 1st-3, 2nd -2, 3rd-1;   
            n=n/10;  // 12.3 then 1.2 then 0.1
        }
        printf("sum of digits are: %d",sum);
    return 0;
    }