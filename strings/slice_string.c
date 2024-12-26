#include<stdio.h>
#include<math.h>
int main(){
    char str[]="neku eppudu chpaledu kani nuv ante naku chala ishtam ak";
    int m; scanf("%d",&m);
    int n = sizeof(str)/sizeof(str[0]);
    char newstr[100]; int j=0; // slicing the first string into new short string.
    for (int i = m; i <= n; i++,j++)
    {
        newstr[j]=str[i];
    }
    newstr[j]='\0'; // ading string terminator at end.
    puts(newstr); // so that thos fun can identofy as string and print.
    
    return 0;
}