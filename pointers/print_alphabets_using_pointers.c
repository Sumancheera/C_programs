#include <stdio.h>

int main()
{
    int i;
    char a[26]="abcdefghijklmnopqrstuvwxyz", b[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p,*q;
    p=a;q=b;
    for(i=0;i<26;i++)
    {
        printf("%c ",*p); 
        p++;
    }
    printf("\n");
    for(i=0;i<26;i++)
    {
        printf("%c ",*q);
        q++;
    }
    return 0;
}