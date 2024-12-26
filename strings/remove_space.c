#include<stdio.h>
#include<math.h>
int main(){
    //char ak[]="akshayani ";
    char s[100]="suman cheera";
    int i = 0;  int j=0;
    for ( i = 0; s[i] != '\0'; i++)
    {
        if(s[i]!=' ') // to remove the s[pace]
        s[j++]=s[i];
    }
    s[j]='\0';
    puts(s);
return 0;
}