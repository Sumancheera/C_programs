#include<stdio.h>
#include<math.h>
int main(){
    FILE *fptr;
   // fptr=fopen("suman.txt","w"); //to change the data re-write entaire data use this 
   fptr=fopen("suman.txt","a"); // wiothou effecting data it will add at the end;
    fprintf(fptr,"%c",'s');
    fprintf(fptr,"%c",'u');
    fprintf(fptr,"%c",'m');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fclose(fptr);
return 0;
}