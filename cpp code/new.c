#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct
    {
        unsigned int x : 1; // 1-bit field
        unsigned int y : 2; // 2-bit field
        union a
        {
            int a; // Integer member
            char c; // Character member
        } u;
    } zihan;

    // Assign values to the bit-fields
    zihan.x = 1; // Valid (1-bit field can only hold 0 or 1)
    zihan.y = 3; // Valid (2-bit field can hold values 0 to 3)

    // Assign values to the union members
    zihan.u.c = 'A'; // Assign to 'a'
    zihan.u.a = 255; // Assign to 'a'
    // Printing both union members after assigning only 'a' may cause undefined behavior.

    printf("%d %d %c %d\n", zihan.x, zihan.y, zihan.u.c, zihan.u.a);

    return 0;
}
