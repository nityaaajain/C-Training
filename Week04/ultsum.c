#include <stdio.h>
#include <limits.h> 

int main() {
    int n=5;
    int ultmax= INT_MIN;
    //printf("Enter the total number of elements in the array: ");
    //scanf("%d", &n);

    int a[5]= {1,-2,3,-4,-5};
    
    //printf("Enter %d elements:\n", n);
    //for (int i = 0; i < n; i++) {
      //  scanf("%d", &a[i]);
    //}

    int k;
   // printf("Enter the size of the group (n): ");
    //scanf("%d", &k);
    int max = INT_MIN; 

   for(int k=1;k<n;k++){
    for (int i = 0; i <= n - k; i++) {
        int sum=0; 
        for (int j = 0; j < k; j++) {
            sum= sum +a[i + j];
        }
        if (sum > max) {
            max = sum;
        }
    }
    if(max>ultmax){
        ultmax=max;
    }

}
     printf("%d",ultmax);
   // printf("The maximum sum of a group of  elements is: %d\n", k, max);
}