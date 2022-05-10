#include <stdio.h>  
#include<math.h>  
  
  
  

  
void combSort(int a[], int n) {  
	int i, temp;
    int gap = n;
    int swapped = 1;  
  
    while (gap != 1 || swapped == 1) {
		gap /= 1.3;
		
		if(gap < 1)
			gap = 1;  
			
        swapped = 0;  
  
        for (i = 0; i < n-gap; i++) {  
            if (a[i] > a[i+gap]) {  
                temp = a[i];    
                a[i] = a[i+gap];    
                a[i+gap] = temp;    
                swapped = 1;  
            }
        }
    }  
}  


void printArr(int a[], int n) { 
	int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}  
  
  
int main() {  
    int a[] = {7, 9, 1, 5, 6, 8, 10, 3, 4, 2};
	const int n = sizeof(a) / sizeof(int);  
    printArr(a, n);  
    printf("\n");
    combSort(a, n);  
    printArr(a, n);  
    
    return 0;  
}  


