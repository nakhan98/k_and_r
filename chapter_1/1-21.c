#include <stdio.h>
#include <stdlib.h>

// Entab

#define TABSPACES 4

int * get_tabs_spaces(int column, int spaces);

int main() {
    int spaces = 0;
    int column = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            spaces++;
            column++;
        }
        else if (spaces) {
            int *tabs_spaces = get_tabs_spaces(column, spaces);
            int tabs_ = tabs_spaces[0];
            int spaces_ = tabs_spaces[1];
            int i;
            for (i = 0; i < tabs_; i++)
                putchar('t');

            for (i = 0; i < spaces_; i++)
                putchar('s');
            
            if (c == '\n')
                column = 0;
            else 
                column++;
            
            spaces = 0;
            putchar(c);
            free(tabs_spaces);
        }
        else if (c == '\n'){
            column = 0;
            spaces = 0;
            putchar(c);
        }
        else {
            spaces = 0;
            putchar(c);
            column++;
        }
    }
    return 0;
}

int * get_tabs_spaces(int column, int spaces) {
    //printf("Column: %d, Spaces: %d", column, spaces);
    int * tabs_spaces = malloc(sizeof(int) * 2);
    int space_start = column - spaces;
    int cursor = space_start;
    int tabs_ = 0;
    int spaces_ = tabs_;
    while (cursor < column) {
        int col = cursor/TABSPACES;
        cursor = (col + 1) * TABSPACES;
        tabs_++;
    }
    if (cursor != column) {
        tabs_--;
        if (!tabs_)
            spaces_ = column - space_start;
        else
            spaces_ = TABSPACES - (cursor - column);
    }
    tabs_spaces[0] = tabs_;
    tabs_spaces[1] = spaces_;
    return tabs_spaces;
}
