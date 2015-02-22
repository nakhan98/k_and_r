#include <stdio.h>
#include <stdlib.h>

#define RANGE 256  // Just in case

// Count chars

main(){
    int c;
    int char_count[RANGE];

    int i, j;
    for (i = 0; i < RANGE; i++){
        char_count[i] = 0;
    }

    while ((c=getchar()) != EOF) {
        if (c != '\t' && c != '\n' && c != ' '){
            char_count[c] = char_count[c] + 1;
        }
    }
    printf("### HISTOGRAM ###\n");

    for (i = 33; i < 125; i++){
        printf("%2c |", i);
        //printf(" %d", char_count[i]);
        for (j = 0; j < char_count[i]; j++){
            printf("X");
        }
        putchar('\n');
    }
}
