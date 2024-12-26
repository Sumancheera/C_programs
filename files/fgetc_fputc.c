#include<stdio.h>
#include<math.h>
int main(){
    FILE *ptr;
    ptr=fopen("ak.txt","a"); // w - for change
    // printf("%c",fgetc(ptr)); printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));printf("%c",fgetc(ptr));printf("%c",fgetc(ptr));
   fputc('s',ptr);
   fputc('u',ptr);fputc('m',ptr);
   fputc('a',ptr);fputc('n',ptr);

    fclose(ptr);
return 0;
}