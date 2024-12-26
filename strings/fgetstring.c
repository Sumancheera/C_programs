#include<stdio.h>
#include<math.h>
int main(){
    // char ak[100]; // my derar chittipu
    // char Su[100];
    // gets(ak);
    // fgets(Su,100,stdin);
    // puts(ak); // no noeed for next line, automatically gives next line
    // puts(Su);
    char ch; char str[100];
    int i = 0;
while( ch != '\n' ){
    scanf("%c",&ch);
    str[i]=ch;
    i++;
}
str[i]='\0';
printf("%d\n",i);

puts(str);

return 0;
}