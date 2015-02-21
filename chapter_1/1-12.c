#include <stdio.h>

#define IN 1
#define OUT 0

// Count lines, words and characters in input

int main(){
    int c, state;
    
    state = OUT;

    while ((c=getchar()) != EOF) {
        if (c != '\t' && c != '\n' && c != ' '){
            putchar(c);
            state=IN;
        }
        else if (state == IN) {
            //printf("Encountered space");
            putchar('\n');
            state = OUT;
        }

    }

    return 0;
}
