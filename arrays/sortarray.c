#include <stdio.h>

// Selection sort implementation
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { //i=0;
        int min_idx = i; //0;2;
        for (int j = i + 1; j < n; j++) { // j=1;j=2;j=3;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
       if (min_idx != i) {
            int temp = arr[min_idx]; // temp=1;temp=2;
            arr[min_idx] = arr[i];// arr[2]=2
            arr[i] = temp; //arr[0]=1;
        }
    }
}

int main() {
    int arr[] = { 2 ,6, 1, 5, 3, 4 };
    int arr[] = { 1 ,6, 2, 5, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // Perform Selection Sort
    selectionSort(arr,n);
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
  
    return 0;
}