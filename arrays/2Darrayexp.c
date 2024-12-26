#include<stdio.h>
#include<math.h>
int main(){
int arr[2][2]={{1,2},{3,4}}; // 2D array decleration. {1,2} - array 1 / {3,4} - array 2.
// arr[0][0],arr[0][1]  - {1,2}
// arr[1][0],arr[1][1]  - {3,4}
 
//2X3 
 int marks[3][4];  // _ _ _ | _ _ _  in this way data will allocate in memory.
 marks [0][0]=98;
 marks [0][1]=97; // first std marks.
 marks [0][2]=96;
 marks [0][3]=96;


 marks [1][0]=58;
 marks [1][1]=57; // 2nd std marks.
 marks [1][2]=56;
 marks [1][3]=96;

 marks [2][0]=58;
 marks [2][1]=57; // 3nd std marks.
 marks [2][2]=56;
 marks [2][3]=96;


 printf("%d 2nd :  %d\n",marks[0][2],marks[1][1]);
 printf("%d\n",arr[0][1]);
  printf("%d",arr[1][0]);

return 0;
}