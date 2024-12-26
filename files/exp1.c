#include<stdio.h>
#include<math.h>
int main(){
    FILE *fp;
    fp=fopen("suman.txt","w");
    if(fp==NULL){
        printf( "File does not exist");
    }else
    fclose(fp);
return 0;
}