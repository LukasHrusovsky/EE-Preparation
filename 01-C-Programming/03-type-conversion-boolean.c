#include <stdio.h>
#include <stdbool.h> // Header file for boolean data type

int main() {
    
    // DATA TYPE HIERARCHY (lower gets converted to higher)
    // - long double
    // - double
    // - float
    // - long
    // - int
    // - short
    // - char

    char a = '5';
    int b = 6;
    printf("Result of a + b = %d\n", a + b); // Inplicit type conversion: char a is converted to ASCII value

    // Explicit type conversion
    double c = 5.67;
    double d = (int)c; // Double c is explicitly converted to int
    printf("c =  %.2lf, d = %.2lf\n", c, d);

    int e = 9;
    int f = 2;
    printf("Result of e / f = %.2lf\n", (double)e / f);

    // Boolean logic
    bool isTrue = true;
    bool isFalse = false;
    printf("isTrue: %d, isFalse: %d\n", isTrue, isFalse); // 1 is true, 0 is false

    // Comparison operators > < >= <= == !=
    int g = 4;
    int h = 6;

    printf(" g > h: %d\n", g > h);
    printf(" g < h: %d\n", g < h);
    printf(" g >= h: %d\n", g >= h);
    printf(" g <= h: %d\n", g <= h);
    printf(" g == h: %d\n", g == h);
    printf(" g != h: %d\n", g != h);

    //Logical opperators &&, ||, !
    printf(" g <= h and g == h: %d\n", (g <= h) && (g == h));
    printf(" g < h or g == h: %d\n", (g < h) || (g == h));
    printf(" g <= h and not g == h: %d\n", (g <= h) && !(g == h));

    return 0;
}