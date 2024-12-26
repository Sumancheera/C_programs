#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    // ptr=realloc(ptr,newSize); // usimg you can increasing or decreasing
 // allocate 5 ints then increace to 8,   
int *ptr;
ptr=(int*)calloc(5,sizeof(int));
printf("enter 5:");
for(int i=0; i<5;i++){
    scanf("%d ",&ptr[i]);
}
ptr=(int*)calloc(8,sizeof(int));
printf("enter 8:");
for(int i=0; i<8;i++){
    scanf("%d ",&ptr[i]);
}
// print
for(int i=0; i<8;i++){
    printf("%d\n",ptr[i]);
}
return 0;
}