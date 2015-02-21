#include <stdio.h>
#include <stdlib.h>

/* Count lines, words and characters in input */

#define IN 1
#define OUT 0
#define MAXLENGTH 26 

main(){
    int c, state, wl, wn;
    
    state = OUT;
    wl = 0;
    wn = 0;

    int word_count[MAXLENGTH];

    int i, j;
    for (i = 0; i < MAXLENGTH; i++){
        word_count[i] = 0;
    }

    while ((c=getchar()) != EOF) {
        if (c != '\t' && c != '\n' && c != ' '){
            //putchar(c);
            wl++;
            state=IN;
        }
        else if (state == IN) {
            state = OUT;
            if (wl < MAXLENGTH){
                word_count[wl] = word_count[wl] + 1;
            }
            wl = 0;
            wn++;
        }

    }
    printf("\n%d words entered\n", wn);
    printf("### HORIZONTAL HISTOGRAM ###\n");

    for (i = 1; i < MAXLENGTH; i++){
        printf("%2d |", i);
        for (j = 0; j < word_count[i]; j++){
            printf("X");
        }
        putchar('\n');
    }

    // Vertical Histogram
    printf("\n### VERTICAL HISTOGRAM ###\n\n");
    int max_frequency = 0;
    for (i = 1; i < MAXLENGTH; i++){
        if (word_count[i] > max_frequency){
            max_frequency = word_count[i];
        }
    }

    for (i = max_frequency; i > 0; i--){
        for (j = 1; j < MAXLENGTH; j++){
            if (word_count[j] >= i ){
                printf("  X");
            }
            else {
                printf("   ");
            }

        }
        putchar('\n');
    }

    for (i = 1; i < MAXLENGTH; i++){
        printf("%3d", i);
    }

    putchar('\n');

}
