#include<stdio.h>
#include<math.h>
int main(){
    char ch; char str[11]; int n;

    FILE *ak;
    ak=fopen("suman.txt","r");
    // fscanf(ak,"%c",&ch);
    // printf("%c",ch);0
    // fscanf(ak,"%c",&ch);
    // printf("%c",ch);
    // fscanf(ak,"%c",&ch);
    // printf("%c",ch);
    // fscanf(ak,"%c",&ch);
    // printf("%c",ch);
    // fscanf(ak,"%c",&ch);
    // printf("%c",ch);
    // fscanf(ak,"%c",&ch);
    // printf("%c",ch);
    // fscanf(ak,"%c",&ch);
    // printf("%c",ch);
    // fscanf(ak,"%c",&ch);
    // printf("%c",ch);
    // fscanf(ak,"%c",&ch);
    // printf("%c ",ch);

    fscanf(ak,"%s",str);
    printf("%s\n",str);
    fscanf(ak,"%d",&n);
    printf("%d\n",n);
    fscanf(ak,"%d",&n);
    printf("%d\n",n);
    fscanf(ak,"%d",&n);
    printf("%d\n",n);

    fclose(ak);// ak is pointer name
return 0;
}