#include <stdio.h>
 
// Detab

#define TABSPACES 4 

int get_spaces(int column);

int main() {
    int column = 0;
    int c; 
    while ((c = getchar()) != EOF){
        if (c == '\t'){
            int spaces = get_spaces(column);
            int i;
            for (i = 0; i < spaces; i++){
                putchar(' ');
                column++;
            }
        }
        else if (c == '\n'){
            putchar(c);
            // reset column
            column = 0; 
        }
        else {
            putchar(c);
            column++;
        }
    }
    return 0;
}

//Get spaces to next tabstop
int get_spaces(int column) {
    if (column < TABSPACES)
        return TABSPACES - column;
    else if (!(column % TABSPACES))
        return TABSPACES;
    else {
        int remainder = column % TABSPACES;
        return TABSPACES - remainder;
    }
}
