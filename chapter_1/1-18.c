#include <stdio.h>
#define MAXLINE 10 //maximum input size

/* This was one was hard */

int getline_(char line[], int maxline);
void copy(char to[], char from[]);
void remove_trailing_spaces(int len, char string[]);


int main() {
    int len; 
    int max; 
    int c;

    max = 0;
    while ((len = getline_(line, MAXLINE)) > 0){
        printf("%d\n", len);
        if (len == 1 && line[0] == '\n'){
            line[0] = '\0';
        }
        if (len >= MAXLINE-1 && line[len-1] != '\n'){ // Deal with buffer overflow
            while ((c=getchar()) != '\n'){
                ;
            }
        }
        if (len > 1) {
            remove_trailing_spaces(len, line);
        }
        printf("%s", line);
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

// Remove trailing spaces and tabs
void remove_trailing_spaces(int len, char string[]){
    int i;
    for (i=len-1; (string[i] == ' ' || string[i]  == '\t' || string[i] == '\n'); i--){
        ;
    }
    string[++i] = '*';
    string[++i] = '\0';
}
