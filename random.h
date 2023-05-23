#include <time.h>
#include <stdlib.h>

int getRandomInt() {
    srand(time(NULL));
    int r = rand();
    return r;
}