// question 1
#include <stdio.h>

int main() {
    int marks[5];
    float average;
    char grade;
    
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
    
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }
    average = total / 5.0;
    
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 75) {
        grade = 'B';
    } else if (average >= 50) {
        grade = 'C';
    } else {
        grade = 'D';
    }
    
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);
    
    return 0;
}
 
// question 2
#include <stdio.h>

float calculate_average(int arr[3][3], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return (float)sum / (rows * cols);
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float avg = calculate_average(arr, 3, 3);
    printf("Average of all elements: %.2f\n", avg);
    return 0;
}

// question3 
#include <stdio.h>

void print_odd_elements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    print_odd_elements(arr, size);
    return 0;
}

// question 4
#include <stdio.h>

void print_even_elements(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    print_even_elements(arr, size);
    return 0;
}

// question 5
#include <stdio.h>
#include <string.h>

struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};

int main() {
    int n;
    printf("Enter the number of laptops: ");
    scanf("%d", &n);
    
    struct Laptop laptops[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter details for laptop %d:\n", i + 1);
        printf("Company Name: ");
        getchar(); 
        fgets(laptops[i].company_name, 50, stdin);
        laptops[i].company_name[strcspn(laptops[i].company_name, "\n")] = '\0'; 
        
        printf("Processor: ");
        fgets(laptops[i].processor, 50, stdin);
        laptops[i].processor[strcspn(laptops[i].processor, "\n")] = '\0'; 
        
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }
    
    printf("\nLaptop Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Laptop %d: Company: %s, Processor: %s, Price: %.2f\n", 
               i + 1, laptops[i].company_name, laptops[i].processor, laptops[i].price);
    }
    
    return 0;
}

// question 6
#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    int n;
    
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    printf("Enter the number of fruits: ");
    scanf("%d", &n);
    
    char fruit[50], color[50];
    
    for (int i = 0; i < n; i++) {
        printf("Enter fruit name: ");
        getchar(); 
        fgets(fruit, sizeof(fruit), stdin);
        fruit[strcspn(fruit, "\n")] = '\0'; 
        printf("Enter color of %s: ", fruit);
        fgets(color, sizeof(color), stdin);
        color[strcspn(color, "\n")] = '\0'; 
        
        fprintf(file, "%s - %s\n", fruit, color);
    }
    
    fclose(file);
    printf("Data written to data.txt successfully.\n");
    
    return 0;
}

// question 7
#include <stdio.h>

int main() {
    int n = 6; 
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = n - i; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
