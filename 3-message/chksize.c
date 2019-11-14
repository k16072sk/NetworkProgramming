#include <stdio.h>

struct money2
{
    unsigned short deposit;
    double numDeps;
    int b;
    unsigned short numWithdraw;
};

struct money3
{
    unsigned short numDeps;
    int deposit;
    double numWithdraw;
};

int main(int argc, char *argv[])
{
    printf("%lu バイト\n", sizeof(int));
    printf("%lu バイト\n", sizeof(double));
    printf("%lu バイト\n", sizeof(struct money2));
    printf("%lu バイト\n", sizeof(struct money3));

    return 0;
}