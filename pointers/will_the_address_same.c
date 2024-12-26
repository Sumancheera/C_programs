#include<stdio.h>
#include<math.h>  // will the address output be same.?
void _printaddress(int *n);
void printaddress(int n);
int main(){
    int n=4;
    printf("%p\n",&n);
    printaddress(n);
    _printaddress(&n); // just sending address not value.
return 0;
}
void _printaddress(int *n){  
   printf("%p\n",n); // we just use n, not &n, because, 
   //to print the address which is stored in the formal parameter, we can just use n.
}
// call by value.
void printaddress(int n){  // this n values is copy on actual n. so diff address.
   printf("%p\n",&n); 
}
