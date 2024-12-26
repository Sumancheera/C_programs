#include<stdio.h>
#include<math.h>
int main(){ // sum&avg of 1D array
    int n, sum=0; 
    int arr[50];// declearationn on array 
    printf("enter the num of val:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf(" enter the %d value:",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    float avg =(float)sum/n;
    printf("sum is : %d\n",sum);
    printf("avg is : %f",avg);
return 0;
}