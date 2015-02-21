#include <stdio.h>

// Count lines in input

void main(){
    int c, n1;
    n1 = 0;
    while((c = getchar()) != EOF){
        if (c == '\n'){
            printf("Newline detected!!!\n");
            ++n1;
        }
    }
    printf("%d\n", n1);
}
