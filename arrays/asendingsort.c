#include<stdio.h>
#include<math.h>
int main(){ // sorting this array in asending order.
   int arr[]={3,5,7,1,2,8};
   int n=sizeof(arr)/sizeof(arr[0]);
   printf("n val is :%d\n",n);
   for (int i = 0; i < n; i++){

    for (int j = i+1; j < n; j++){
        if(arr[i]>arr[j]){ // if you cahnge > to < then ,  
            int temp=arr[i];  // it will give decending.
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   for (int i = 0; i < n; i++){
    printf("%d ",arr[i]);
   } 
return 0;
}