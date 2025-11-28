#include <stdio.h>
int main() {
    for (int n = 1; n <= 256; n++) {
        printf("número %d:\n", n);
        printf("binário: ");
        int mask = 128;
        while (mask > 0) {
            if (n & mask) printf("1");
            else printf("0");
            mask >>= 1;
        }
        printf("\n");
        printf("octal: %o\n", n);
        printf("hexadecimal: %X\n\n", n);
    }
    return 0;
}