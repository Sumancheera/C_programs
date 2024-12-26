#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
FILE *fptr;
fptr=fopen("suman.txt","r");
char name[10];
fscanf(fptr,"%s",name); // reading before earising
fclose(fptr);
fptr=fopen("suman.txt","w");
for (int i = 0; name[i]!='\n' ; i++)
{
    if (name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u' )
    {
        fprintf(fptr,"%c",name[i]);
    }
}
fclose(fptr);
return 0;
}