#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter how many num neded: ");
    scanf("%d",&n);
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    for (int i = 1; i < n; i++) // checking and   // storing the largest number to arr[0]
    { // start from arr[1];
        if(temp<arr[i]){
        temp=arr[i];
        }
    }
    printf("the largest numin array is : %d\n",temp);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}