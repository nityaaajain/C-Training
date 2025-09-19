#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    printf("Enter the total number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the size of the group (n): ");
    scanf("%d", &k);
    int max = INT_MIN; 

   
    for (int i = 0; i <= n - k; i++) {
        int sum = 0; 
        for (int j = 0; j < k; j++) {
            sum= sum +arr[i + j];
        }
        if (sum > max) {
            max = sum;
        }
    }

    printf("The maximum sum of a group of %d elements is: %d\n", k, max);
}