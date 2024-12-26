#include<stdio.h>
#include<math.h>
int main(){ // prg to print caps to small and vice versa.
    char s[100];
    fgets(s,100,stdin);
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]>='a'&& s[i]<='z') // here change it to Caps A&Z
        {
            s[i]=s[i]-32; // sub means caps convert, +32 is to caps to small;
        }
         else if (s[i]>='A'&& s[i]<='Z')
         {  // here change it to Caps A&Z
            s[i]=s[i]+32; //to small
        }
    }
    puts(s);
return 0;
}