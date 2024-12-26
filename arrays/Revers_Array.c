#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the no of elemets you need: ");
    scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)  // to store or give arr[]={1,2,3,4,5,6}
{
    printf("enter the element of the array: ");
    scanf("%d",&arr[i]);
}
        for (int i = 0; i <n/2; i++){
            int firstval=arr[i];  // {1,2,3,4} fv=[0], sv[4-0-1].
            int lastval=arr[n-i-1];  // finding second val for [0],then [1], then for [2] then so on.
            arr[i]=lastval;
            arr[n-i-1]=firstval;  // values exchange.
           // printf("%d ",arr[i]);
        }
for (int i = 0; i < n; i++)  // to store
{
    printf("%d ",arr[i]);
}  
return 0;
}