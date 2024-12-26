#include<stdio.h>
// only odd print from 5 to 55.
int main(){

for (int i=5;i<=50;i++){
   
   if(i%2 !=0 ){
    printf("%d\n",i);
   }                //  if(i%2==0){
                    //continue; //skip
}
    return 0;
}