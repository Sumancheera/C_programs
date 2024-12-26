#include<stdio.h>
#include<math.h>

int main(){
    int n1,n2;
   // int *ptr1=&n1, *ptr2=&n2;
   int *ptr1=&n1,*ptr2=&n2;
    printf("enter 2 nums: ");
    scanf("%d %d",ptr1,ptr2);
if (*ptr1>*ptr2){
    printf("max num is :%d\n",*ptr1);
}else{
    printf("max num is :%d\n",*ptr2);
}
return 0;
}