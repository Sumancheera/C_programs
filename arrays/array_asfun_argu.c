#include<stdio.h>
#include<math.h>
void printnumbers(int arr[], int n){  // void printnumbers(int *arr, int n)
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}
printf("\n");
}
int main(){
int arr[]={1,2,3,4,5,6};
    printnumbers(arr,6); //  arr= &arr[0] 
return 0;
}