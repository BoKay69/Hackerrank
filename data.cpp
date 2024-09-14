#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Declare variables
    int num1;
    long num2;
    char ch;
    float f;
    double d;

    // Read input using scanf with correct format specifiers
    scanf("%d %ld %c %f %lf", &num1, &num2, &ch, &f, &d);

    // Print output with required precision
    printf("%d\n", num1);          // Print int
    printf("%ld\n", num2);         // Print long
    printf("%c\n", ch);            // Print char
    printf("%.3f\n", f);           // Print float with 3 decimal places
    printf("%.9lf\n", d);          // Print double with 9 decimal places

    return 0;
}