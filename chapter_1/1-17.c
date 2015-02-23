#include <stdio.h>
#define MAXLINE 1000 //maximum input size

int getline_(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len; 
    int max; 
    char line[MAXLINE]; 
    char longest[MAXLINE]; 

    max = 0;
    while ((len = getline_(line, MAXLINE)) > 0){
        if (len > max) {
            max = len;
            copy(longest, line);
        }
        if (len > 80){
            printf("%s", line);
        }
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
