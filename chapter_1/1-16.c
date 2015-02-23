#include <stdio.h>
#define MAXLINE 1000 //maximum input size

/* This one was tricky as the question specified that only the main function 
 * ought to modified 
 */

int getline_(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line up to MAXLINE and also real length
int main() {
    int len; // current line length
    int max; // maximum length seen so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line saved here
    int c;

    max = 0;
    while ((len = getline_(line, MAXLINE)) > 0){
        if (len == MAXLINE-1 && line[MAXLINE-2] != '\n'){
            while ((c = getchar()) != '\n'){
                len++;
            }
            len++; // for the last '\n'
        } 

        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0){ // there was a line
        printf("\nThe longest line had %d chars\n", max);
        printf("The first %d characters are:\n%s",MAXLINE, longest);
    }
    return 0;
}

// getline: read a line into s, return length
int getline_(char s[], int lim){
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

// Copy: Copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[]){
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0'){
        i++;
    }
}
