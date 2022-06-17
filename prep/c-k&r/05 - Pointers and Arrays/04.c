#include <ctype.h>
#include <stdio.h>

int getint(int *);
int getch(void);
void ungetch(int);

int main(void) {
    return 0;
}

// get next integer from input into *pn
int getint(int *pn) {
    int c, sign;

    while(isspace(c = getch()))// skip whitespace
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); // not a number
        return 0;
    }


}