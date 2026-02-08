#include <stdio.h>

int main() {
    int i,j,a,b;
    printf("enter a and b: ");
    scanf("%d %d", &a, &b);
    for(i=1; i<=a; i++) {
        if (i == 1 || i == a) {
            print("* " * b);
        }
        else {
            printf("* " + "  " * (b-2) + "*\n");
        }
    }
    return 0;
}
