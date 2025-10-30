#include<stdio.h>
int main() {
    printf("Hello");

    /*Write a C program to check whether a given number is even or odd.*/
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    /*.Write a C program to check whether a given number is Even or Odd Number using Ternary Operator*/
    int num; 
    printf("Enter an integer: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    /*Write a C program to check whether a given number is positive or negative.  */
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }
    /*using ternary operator*/
    (num > 0) ? printf("%d is positive.\n", num) : (num < 0) ? printf("%d is negative.\n", num) : printf("%d is zero.\n", num);

    /*Write a C program to find whether a given year is a leap year or not. */
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    /*using ternary operator*/
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);

    /*Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote. */
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
    /*using ternary operator*/
    (age >= 18) ? printf("You are eligible to vote.\n") : printf("You are not eligible to vote.\n");

    /*Write a C program to find the largest of three numbers using if statement. */
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("%d is the largest number.\n", a);
    } else if (b > a && b > c) {
        printf("%d is the largest number.\n", b);
    } else {
        printf("%d is the largest number.\n", c);
    }
    /*using ternary operator*/
    (a > b && a > c) ? printf("%d is the largest number.\n", a) : (b > a && b > c) ? printf("%d is the largest number.\n", b) : printf("%d is the largest number.\n", c);

    /*Write a C program to calculate the root of a Quadratic Equation*/
    

    /*Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.  */
    float side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }

    /*Write a C program to check whether a triangle can be formed by the given value for the angles.  */
    int angle1, angle2, angle3;
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 + angle2 + angle3 == 180) {
        printf("The angles form a triangle.\n");
    } else {
        printf("The angles do not form a triangle.\n");
    }

    /*Write a C program to check whether a character is an alphabet, digit or special character.  */
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }

    /*Write a C program to check whether an alphabet is a vowel or consonant. */
    char vowel;
    printf("Enter an alphabet: ");
    scanf(" %c", &vowel);
    if (vowel == ('A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u')) {
        printf("%c is a vowel.\n", vowel);
    } else {
        printf("%c is a consonant.\n", vowel);
    }
    
    return 0;

    /**/
    
}