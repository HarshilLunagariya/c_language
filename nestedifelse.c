// que2
#include <stdio.h>

int main() {
    int num1, num2, num3, num4, max;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                max = num1; // num1 is the largest
            } else {
                max = num4; // num4 is the largest
            }
        } else {
            if (num3 > num4) {
                max = num3; // num3 is the largest
            } else {
                max = num4; // num4 is the largest
            }
        }
    } else {
        if (num2 > num3) {
            if (num2 > num4) {
                max = num2; // num2 is the largest
            } else {
                max = num4; // num4 is the largest
            }
        } else {
            if (num3 > num4) {
                max = num3; // num3 is the largest
            } else {
                max = num4; // num4 is the largest
            }
        }
    }

    // Output the result
    printf("The maximum number is: %d\n", max);

    return 0;
}





// que1 
#include <stdio.h>

int main() {
    int num1, num2, num3, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    if (num1 < num2) {
        if (num1 < num3) {
            min = num1; // num1 is the smallest
        } else {
            min = num3; // num3 is the smallest
        }
    } else {
        if (num2 < num3) {
            min = num2; // num2 is the smallest
        } else {
            min = num3; // num3 is the smallest
        }
    }

    // Output the result
    printf("The minimum number is: %d\n", min);

    return 0;
}
