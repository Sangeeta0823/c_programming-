/******************************************************************************
Name : Sangeeta Bind 
UIN : 251C021
Div: B 
Roll no : 18 
Branch:Civil 
*******************************************************************************/
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int *ptr = &arr[n - 1]; 
    printf("Elements of the array in reverse order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr); 
        ptr--;              
    }
    printf("\n");

    return 0;
}
