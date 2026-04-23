#include <stdio.h>

struct date
{
    int d : 5;
    int m : 4;
    int y;
};

int main()
{
    struct date x = {31, 12, 2025};
    printf("%d %d %d", x.d, x.m, x.y);
    return 0;
}
