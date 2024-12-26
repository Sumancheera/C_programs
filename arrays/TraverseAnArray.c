#include<stdio.h>
#include<math.h>
int main(){
    //int marks[3]={98,99,100} if you are trying to print or scan marks[3] then prg will abort, 
    // run time error will come, compiler cant check  
    //int marks[]={20,21,22,23,24,25,26,27,28,29};
int marks[10];
int *ptr=marks;   // or &marks; or ptr = marks[0]
for (int i = 0; i <= 9; i++)
{
   printf("enter value for %d position: ",i);
   scanf("%d",&marks[i]);    // ptr = marks[0].
   //   scanf("%d",(ptr+i)); 

}
printf("the array is : ");
for (int i = 0; i <=9; i++)
{
    printf("%d ",marks[i]);
    //printf("%d ", *(ptr+i));

}

return 0;
}