#include <stdio.h>

big2() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        printf("%d is the biggest\n", num1);
    else if (num2 > num1)
        printf("%d is the biggest\n", num2);
    else
        printf("Both are equal\n");

    // return 0;
}

