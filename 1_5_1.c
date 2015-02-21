#include <stdio.h>

/* Copy input to output; 1st version */

main() {
    int c;
    while ((c = getchar()) != EOF){
        putchar(c);
    }
}
