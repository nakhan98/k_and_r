#include <stdio.h>
#define MAXLINE 100 //maximum input size

 /* Assuming that "entirely blank lines" means lines only containing '\n' */

int getline_(char line[], int maxline);
void copy(char to[], char from[]);
void remove_trailing_spaces(int len, char string[]);

int main() {
    char line[MAXLINE]; 
    int len; 
    int max; 
    int c;

    max = 0;
    while ((len = getline_(line, MAXLINE)) > 0){
        //Don't print lines only containing '\n'
        if (len == 1 && line[0] == '\n'){ 
            line[0] = '\0';
        }
        
        // Deal with buffer overflow
        if (len >= MAXLINE-1 && line[len-1] != '\n'){ 
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
    string[++i] = '\n';
    string[++i] = '\0';
}
