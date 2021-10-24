#include<stdio.h>

int htoi(char s[]);

int main(int argc, char const *argv[])
{
    printf("%d\n", htoi("0x123"));
}

int htoi(char s[]) {
    int res = 0;
    int c;

    for (int i = 2; s[i] != '\0'; i++)
    {
        if(s[i] >= '0' && s[i] <= '9') {
            res = res * 16 + s[i] - '0';
        } else if(s[i] >= 'a' && s[i] <= 'f') {
            res = res * 16 + s[i] - 'a' + 10; 
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            res = res * 16 + s[i] - 'a' + 10; 
        }
    }
    return res;
}