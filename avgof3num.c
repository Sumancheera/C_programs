#include<stdio.h>
#include<math.h>

int main(){
    int n1,n2,n3, sum;
    float avg;
    
    printf("enter 3 numbers : \n");
   if (scanf("%d %d %d", &n1,&n2,&n3)!=3){     // Error handling for non-numeric input
    printf("enter numbers only");
    return 1; // Indicates an error
   }
    sum=n1+n2+n3;
    printf("sum is: %d\n", sum);
    avg= sum/3.0;
    printf("the average of 3 nums is : %.2f\n",avg);

    return 0;
}