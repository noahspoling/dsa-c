#include <stdio.h>
#include <stdint.h>

struct rgb
{
    __uint128_t red, green, blue = 0;
};

struct rgba
{
    __uint128_t red, green, blue = 0;
    float alpha = 0;
};

rgb(char *colorStr) {
    char *c = colorStr;
}
