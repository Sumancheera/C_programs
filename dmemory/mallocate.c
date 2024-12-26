#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int *ptr; // float *ptr;// to store the addres and assign the memory
ptr = (int*)malloc(5*sizeof(int)); // ptr=(float*)malloc(5sizeof(float));
 //5*4 bytes= 20 bytes
// malloc is used to allocate the momory;// malloc uses void pointer 
// after that we typecast it to int, and store to ptr
// if you ask 5000000000 times int then it will give NULL
ptr[0]=1;
ptr[1]=2; // same like arrays we can allocate memory
ptr[2]=3; // but we are allocating dynamically
ptr[3]=4;// means while running prg
ptr[4]=5;
for (int i = 0; i < 5; i++)
{
    printf("%d\n",ptr[i]);
  //  printf("%f\n",ptr[i]);
}


return 0;
}