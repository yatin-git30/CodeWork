#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, i;
    int low, mid, high;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the elements in ascending order: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value to find: ");
    scanf("%d", &x);
    
    low = 0;
    high = n - 1;
    
    while(low <= high) {
        mid = (low + high) / 2;  // Recalculate mid inside the loop
        if(arr[mid] < x) {
            low = mid + 1;
        }
        else if(arr[mid] == x) {
            printf("%d is found at location %d\n", x, mid + 1);
            return 0;  // Exit the program as the element is found
        }
        else {
            high = mid - 1;
        }
    }
    
    printf("Invalid\n");  // Only print "invalid" if the element is not found
    return 0;
}
