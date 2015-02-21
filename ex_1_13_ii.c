#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 26 
// Count lines, words and characters in input

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
            if (wl >= MAXLENGTH){
                printf("Words can be a maximum of %d chars long...\n", MAXLENGTH);
                //exit(1);
            }
            else
                word_count[wl] = word_count[wl] + 1;

            wl = 0;
            wn++;
        }

    }
    printf("\n%d words entered\n", wn);
    printf("### HISTOGRAM ###\n");

    for (i = 1; i < MAXLENGTH; i++){
        printf("%2d |", i);
        for (j = 0; j < word_count[i]; j++){
            printf("X");
        }
        putchar('\n');
    }
}
