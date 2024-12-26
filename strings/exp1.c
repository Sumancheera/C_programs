#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
   char ak[120] = "akshayani ";
   char s[] = "Suman";
     // if 0, same , 1 not equal.
    printf("%d\n",strcmp(ak,s));
   strcat(ak, s);// cancatination adding 2nd to 1st string.
    printf("%s",ak);

return 0;
}
