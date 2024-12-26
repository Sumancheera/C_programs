    #include<stdio.h>
#include<math.h>
int printfreq(int freq[]){
    for (int i = 0; i < 26; i++){
        if(freq[i]!=0){
            printf("%c is %d time occured.\n",i+'a',freq[i]);
        }
    }
}
int calculatefreq(char ak[]){
    int i=0;
    int freq[26]={0}; // for a to z;
    while(ak[i]!='\0'){
        freq[ak[i]-'a']++; // a-a=0; freq[0]=a;freq[1]=b;freq[2]=c;
        i++;
    }
    printfreq(freq);
}
int main(){
    char ak[10]="akshayani";
    calculatefreq(ak);
return 0;
}