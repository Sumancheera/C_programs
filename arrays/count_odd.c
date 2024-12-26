#include<stdio.h>
#include<math.h> 
int countoddnuminarray(int arr[], int n){   // find number of odd numbers in array
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2!=0){ // checks if it is odd then goes in.
        // (arr[i]%3==0)- to check x3 in array. %7==0 for x7 mul. %2==0 for even nums.
            count++;
        }
    }
    return count;
}
int main(){
int arr[]={1,2,3,4,5,6,7};
printf("number of odd numbers in array is: %d",countoddnuminarray(arr,7));
return 0;
}