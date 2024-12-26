#include<stdio.h>
#include<math.h>
int main(){
    //in files, when we use fgetc we will have EOD like \0 in strings.
FILE *ptr;
ptr=fopen("ak.txt","r");
char ch;
ch=fgetc(ptr); // for the first time it will assign to first char of string.
while (ch!=EOF) //if it reaches eond of the string then only terminates
{
    printf("%c",ch);
    ch=fgetc(ptr);
}

return 0;
}