#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    int flag = 0;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ') {
            if(flag == 1) {
                continue;
            } else if(flag == 0) {
                putchar(c);
                flag = 1;
            }
        } else {
            flag = 0;
            putchar(c);
        }
    }
}
