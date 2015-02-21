#include <stdio.h>

#define IN 1
#define OUT 0

// Count lines, words and characters in input

main(){
    int c, state, wl, wn;
    
    state = OUT;
    wl = 0;
    wn = 0;

    while ((c=getchar()) != EOF) {
        if (c != '\t' && c != '\n' && c != ' '){
            //putchar(c);
            wl++;
            state=IN;
        }
        else if (state == IN) {
            //printf("Encountered space");
            putchar('\n');
            state = OUT;
            if (wl != 0){
                int i = 0;
                for (i = 1; i <= wl; i++){
                    printf(" X ");
                }
            }
            wl = 0;
            wn++;
        }

    }
    printf("\n%d words entered\n", wn);
}
