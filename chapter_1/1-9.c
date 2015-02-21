#include <stdio.h>

/* Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank */

int main(){
    int c, blanks;
    blanks = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && blanks < 1){
            //printf("Detected blank");
            putchar(c);
            blanks++;
        }
        else if (c != ' ' ){
            putchar(c);
            blanks = 0;
        }
    }
    return 0;
}
