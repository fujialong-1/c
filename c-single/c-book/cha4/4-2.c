#include<ctype.h>
#include<stdio.h>

double atof(char s[]);

int main(int argc, char const *argv[])
{
    printf("0 -> %e\n", atof("0"));
    printf("123.456 -> %g\n", atof("123.456"));
    printf("-67.890 -> %g\n", atof("-67.89"));
    printf("1.23e+20 -> %g\n", atof("1.23e+20"));
    printf("-4.56E-6 -> %g\n", atof("-4.56E-6"));
}


/* atof函数：将字符串转化成相应的双精度浮点数 */
double atof(char s[]) {
    double val, power;
    int i, sign, calsign, index;

    for(i = 0; isspace(s[i]); i++) 
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        i++;
    for(val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if(s[i] == '.')
        i++;
    for(power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    val = sign * val / power;
    if(s[i] == 'e' || s[i] == 'E') 
        i++;
    calsign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        i++;
    for(index = 0; isdigit(s[i]); i++) {
        index = index * 10 + s[i] - '0';
    }
    if(calsign == -1) {
        while(index-- > 0) {
            val *= 0.1;
        }
    } else {
        while(index-- > 0) {
            val *= 10.0;
        }
    }
    return val;
}
