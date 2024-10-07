#include <stdio.h>

int main() {
    int size;

    
    printf("Enter the array's size: ");
    scanf("%d", &size);

   
    int arr[size];

  
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("Negative elements from an Array: ");
    int minus = 0; 

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (minus) {
                printf(", "); 
            }
            printf("%d", arr[i]);
            minus = 1; 
        }
    }

    if (!minus) {
        printf("None");
    }

    printf("\n");
    return 0;
}


// question 2
