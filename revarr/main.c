/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=n-1; i>=0; i--){
        scanf("%d", &arr[i]);
    }
    int number = 0;
    for (int i =0; i<n; i++){
        int expo = n-(i+1);
        int sum = arr[i]*pow(10,expo);
        number = number+sum;
    //printf("hello");
    }
    printf("the number is %d", number+1);

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of digits: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int)); // Dynamically allocate memory for the array
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the digits in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        scanf("%d", &arr[i]);
    }

    int number = 0;
    for (int i = 0; i < n; i++) {
        number = number * 10 + arr[i]; // Accumulate the number directly
    }

    printf("The number is %d\n", number);

    free(arr); // Free the dynamically allocated memory
    return 0;
}
