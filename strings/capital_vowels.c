#include<stdio.h>
#include<math.h>
#include<string.h>
char checkVowels(char str[]);
int main(){
char ak[]="akshayani";
checkVowels(ak);
puts(ak);
return 0;
}
char checkVowels(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            //str[i]=str[i]-'a'+'A'; //just this line maskes entire logic of the prgm.
        str[i]=str[i]-32;
        }
    }
}