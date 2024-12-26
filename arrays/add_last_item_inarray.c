#include<stdio.h>
#include<math.h>
int main(){
    int arr[100],size,item;
printf("enter the size: \n");scanf("%d",&size);
printf("enter the elemets in array\n");
for (int i = 0; i < size; i++)
{
    printf("enter element %d:",i+1);
    scanf("%d",&arr[i]);
}
// printf("before array\n");
// for (int i = 0; i < size; i++)
// {
//     printf("%d ",arr[i]);
// }
printf("\n");
printf("enter the elemet to be added at last in the array:");
scanf("%d",&item);
size=size+1;  // increasing the size of array by 1. 
arr[size-1]=item;  // giving item val to last element in array
printf("after array\n");
for (int i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}
return 0;
}