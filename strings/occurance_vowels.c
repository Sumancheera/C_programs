#include<stdio.h>
#include<math.h>
#include<string.h>
int checkVowels(char str[]);
void checkchar(char str2[], char ch);
int main(){
    char ak[]="akshayani";
    printf("vowels in the string are: %d\n",checkVowels(ak));
    checkchar(ak,'i');
return 0;
}
void checkchar(char str2[], char ch){
    for(int i=0; str2[i]!='\0';i++){
        if(str2[i]==ch){
            printf("yes present");
            return; // *imp* if it executes, not lines will be checked. after this.
        }
    }
    printf("character not present");
}
int checkVowels(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
   // printf("vowels are: %d\n",count);
    return count;
}
