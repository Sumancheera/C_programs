#include<stdio.h>
#include<math.h>
void swap(int *a, int *b);
int main(){
int x=3,y=5;
swap(&x,&y);  // swaping using passing Address.
printf("x = %d and Y = %d",x,y); // printing after passing address to check for values changes. 

return 0;
} // call by reference. 
void swap(int *a, int *b){  // think that these are pointers to store that addres, not we are printing or changing values at address.
    int t= *a;
     *a=*b;  // in one way we are changing the values at address only. 
    *b=t;
printf("a = %d and b = %d\n",*a,*b);
}
