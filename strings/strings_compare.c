#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
char ak[]="akshayani";
char s[]="suman";
strcpy(ak,s);
puts(s);
puts(ak);
strcmp(s,ak);   // equal =0, big str- small str= +ve val; small-bigstr=-ve val;
printf("%d",strcmp(s,ak));


return 0;
}
