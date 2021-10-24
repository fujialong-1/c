#include<stdio.h>

#define IN  1
#define OUT 0

int main(int argc, char const *argv[])
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        if(state == OUT) {
            if(c != '\n' && c != ' ' && c != '\n' && c != '\t') {
                state = IN;
                putchar(c);
            }
        } else if(state == IN) {
            if(c == '\n' || c == ' ' || c == '\n' || c == '\t') {
                //printf('\n');
                putchar('\n');
                state = OUT;
            } else {
                putchar(c);
            }
        }
    }
}
