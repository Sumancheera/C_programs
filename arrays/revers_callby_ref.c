#include<stdio.h>
#include<math.h>
void reversarr(int arr[], int n){
for (int i = 0; i < n/2; i++)
{
    int fv=arr[i]; // first value
    int sv=arr[n-i-1];  // second value
    arr[i]=sv;   // swap 2 to 1
    arr[n-i-1]=fv; // 1 to 2nd
}
}
void printarr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main(){
int arr[]={1,2,3,4,5,6,7,8};
reversarr(arr,8);
printarr(arr,8);

return 0;
}



