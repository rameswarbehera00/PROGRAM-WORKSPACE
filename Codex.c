#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d is the largest number.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the largest number.\n", b);
    } else {
        printf("%d is the largest number.\n", c);
    }

    //making simple calculator
    char operator;
    int num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&operator);
    printf("Enter two operands: ");
    scanf("%d %d", &num1, &num2);
    switch(operator){
        case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2);break;
        case '-': printf("%d - %d = %d\n", num1, num2, num1 - num2);break;
        case '*': printf("%d * %d = %d\n", num1, num2, num1 * num2);break;
        case '/': printf("%d / %d = %d\n", num1, num2, num1 / num2);break;
        default: printf("Invalid operator.\n");
    }

    /*MAKE pattern
        *
       ***
      *****
     ******* */
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++) {
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    /*Electric bill calculator*/
    int units;
    float bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        bill = units * 0.5;
    } else if (units <= 200) {
        bill = 100 * 0.5 + (units - 100) * 0.75;
    } else if (units <= 300) {
        bill = 100 * 0.5 + 100 * 0.75 + (units - 200) * 1.20;
    } else {
        bill = 100 * 0.5 + 100 * 0.75 + 100 * 1.20 + (units - 300) * 1.50;
    }

    return 0;
}