#include<stdio.h>
#include<math.h>
int main(){
    //int marks[3]={98,99,100} if you are trying to print or scan marks[3] then prg will abort, 
    // run time error will come, compiler cant check  
    //int marks[]={20,21,22,23,24,25,26,27,28,29};
int marks[10];
for (int i = 0; i <= 9; i++)
{
   printf("enter value for %d position: ",i);
   scanf("%d",&marks[i]);
}
printf("the array is : ");
for (int i = 0; i <=9; i++)
{
    printf("%d ",marks[i]);
}



return 0;
}