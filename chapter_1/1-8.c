#include <stdio.h>

// Count blanks, tabs and new lines

int main(){
    int c, blanks, tabs, newlines;
    c = blanks = tabs = newlines = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            blanks++;
        }
        if (c == '\t'){
            tabs++;
        }
        if (c == '\n'){
            newlines++;
        }
    }
    printf("\n%d blanks\n%d tabs\n%d new lines\n", blanks, tabs, newlines);

    return 0;
}
