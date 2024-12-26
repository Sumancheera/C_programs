    #include<stdio.h>
#include<math.h>
int main(){
char ak[100]; // akshayani; frqen[97 or a]=3;
int frqen[256]={0}; //ASCII characters range from   /.
int maxfreq=0;
char maxchar;
printf("enter the string:");
fgets(ak,100,stdin);
for(int i=0;ak[i]!='\0';i++){ // i=i+1;
    frqen[ak[i]]++; //frqen[ak[i]]=frqen[ak[i]]+1;frqen[97]=frqen[97]+1;frqen[97]={1};
    if(frqen[ak[i]]>maxfreq){
        maxfreq=frqen[ak[i]];
        maxchar=ak[i];
    }
}
printf("max char is :%c and frequency is %d",maxchar,maxfreq);

return 0;
}
// Declares an integer array frqen of size 100. This array will be used to store the frequency of each character in the string str.
// 3. frqen[str[i]]++;

// This line is the core of the code, and it's used to count the frequency of each character in the string.
// str[i]: Accesses the character at index i in the string str.
// frqen[str[i]]: Uses the ASCII value of the character str[i] as an index into the frqen array. This is because each character in C has an associated ASCII code, which is an integer value.
// frqen[str[i]]++: Increments the value at the index str[i] in the frqen array. This effectively counts the occurrence of the character str[i].
// Example:

// Let's say the string str is "hello".

// When i = 0, str[i] is 'h'. The ASCII value of 'h' is 104. So, frqen[104] is incremented.
// When i = 1, str[i] is 'e'. The ASCII value of 'e' is 101. So, frqen[101] is incremented.
// And so on for the rest of the characters.
// After processing the entire string, the frqen array will contain the frequency of each character. For example, frqen[104] will store the number of times 'h' appears in the string.