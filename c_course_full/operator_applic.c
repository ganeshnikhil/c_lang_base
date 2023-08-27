#include <stdio.h>

int main() {
    // arithmetic operators
    int x = 5;
    int y = 2;
    printf("Arithmetic Operators:\n");
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);

    // relational operators
    printf("\nRelational Operators:\n");
    printf("%d == %d is %d\n", x, y, x == y);
    printf("%d != %d is %d\n", x, y, x != y);
    printf("%d > %d is %d\n", x, y, x > y);
    printf("%d < %d is %d\n", x, y, x < y);
    printf("%d >= %d is %d\n", x, y, x >= y);
    printf("%d <= %d is %d\n", x, y, x <= y);

    // logical operators
    printf("\nLogical Operators:\n");
    printf("!%d is %d\n", x, !x);
    printf("%d && %d is %d\n", x, y, x && y);
    printf("%d || %d is %d\n", x, y, x || y);

    // bitwise operators
    unsigned int a = 60; 
    unsigned int b = 13;

    printf("\nBitwise Operators:\n");
    printf("%u & %u = %u\n", a, b, a & b);
    printf("%u | %u = %u\n", a, b, a | b);
    printf("%u ^ %u = %u\n", a, b, a ^ b);
    printf("~%u = %u\n", a, ~a);
    printf("%u << 2 = %u\n", a, a << 2);
    printf("%u >> 2 = %u\n", a, a >> 2);

    // assignment operators
    int z = 6;
    printf("\nAssignment Operators:\n");
    printf("%d += %d, z is now %d\n", z, y, z += y);
    printf("%d -= %d, z is now %d\n", z, y, z -= y);
    printf("%d *= %d, z is now %d\n", z, y, z *= y);
    printf("%d /= %d, z is now %d\n", z, y, z /= y);
    printf("%d %%= %d, z is now %d\n", z, y, z %= y);
    printf("%d &= %d, z is now %d\n", z, y, z &= y);
    printf("%d |= %d, z is now %d\n", z, y, z |= y);
    printf("%d ^= %d, z is now %d\n", z, y, z ^= y);
    printf("%d <<= %d, z is now %d\n", z, y, z <<= y);
    printf("%d >>= %d, z is now %d\n", z, y, z >>= y);

    return 0;
}
