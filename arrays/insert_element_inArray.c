#include<stdio.h>
#include<math.h> // C program to Insert an element in an Array
int main(){
//https://www.geeksforgeeks.org/c-program-to-insert-an-element-in-an-array/
int n=10,pos=5,x=50;
int arr[100];
for (int i = 0; i < n; i++) // storing values to array
{
    arr[i]=i+1;
}
for (int i = 0; i < n; i++) //printing the original array.
{
    printf("%d ",arr[i]);
}
n++;
 printf("\n");
for (int i = n-1; i >=pos ; i--) // shifting elements
{
    arr[i]=arr[i-1];
}
arr[pos-1]=x;
for (int i = 0; i < n; i++) //pronting the changed array.
{
    printf("%d ",arr[i]);
}

return 0;
}