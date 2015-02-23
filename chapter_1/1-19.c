#include <stdio.h>
# define MAXLINE 100

/* Write a function reverse(s) that reverses the character string s. Use it to 
 * write a program that reverses its input a line at a time.
 */

void reverse(char s[]);
int getline_(char line[], int maxline);

int main() {
    char line[MAXLINE];
    int len, c;

    while ((len=getline_(line, MAXLINE)) > 0){
        // Deal with buffer overflow
        if (len >= MAXLINE-1 && line[len-1] != '\n'){ 
            while ((c=getchar()) != '\n'){
                ;
            }
        }

        reverse(line);
        printf("%s\n", line);
    }
    return 0;
}

// Reverse character string s
void reverse(char s[]){
    int len, i, j; 
    char new_string[MAXLINE];
    len = 0;

    for (i=0; s[i] != '\0'; i++) {
        new_string[i] = s[i];
        len++;
    }
    new_string[i]  = '\0';
    
    j = 0; 
    for (i = len-1;i >= 0; i--){
        s[j] = new_string[i];
        j++; 
    }
    s[j] = '\0';

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

