#include<stdio.h>
#include<math.h>
int main(){   // reverse the Array.
    int numbers[10];
    int *ptr;
    ptr=numbers;
    printf("Array to be Reversed is : ");
    for (int i=0;i <=9  ;i++)
    {
        *ptr=i; // int Array[10]={0,1,2,3,4,5,6,7,8,9}
        ptr++;
        printf("%d ",i);
    }   
    printf("\n");
    printf("Ater reverse : ");
    for (int i = 9; i>=0; i--)
    {
        printf("%d ",numbers[i]);  //printf("%d ",i); 
        //you can write this program without pointers using these 2 commented lines
    }  
return 0;
}