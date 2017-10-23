#include <stdio.h>
#include <stdlib.h>

void convert(int num, char a, char b, char c) {
    int i;
    if (num == 9) {
        printf("%c%c", a, c);
    }
    else if (num == 4) {
        printf("%c%c", a, b);
    }
    else if (num < 5) {
        for (i = 1; i <= num; i++) {
            printf("%c", a);
        }
    }
    else {
        printf("%c", b);
        for (i = 1; i <= num - 5; i++) {
            printf("%c", a);
        }
    }
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%i", &n);
    int first = (n/1000);
    int second = (n/100) - ((n/1000)*10);
    int third = (n/10) - ((n/100)*10);
    int fourth = (n) - ((n/10)*10);
    convert(first, 'M', 'V', 'I');
    convert(second, 'C', 'D', 'M');
    convert(third, 'X', 'L', 'C');
    convert(fourth, 'I', 'V', 'X');
    printf("\n");
}
