#include <stdio.h>

main()
{

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d", a[2]);
}

// question 1
#include <stdio.h>

int main()
{
    int array_size;

    printf("Enter array size: ");
    scanf("%d", &array_size);

    
    int array[array_size];

   
    printf("Enter array elements:\n");
    for (int i = 0; i < array_size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

  
    printf("Length of an Array: %d\n", array_size);

    return 0;
}