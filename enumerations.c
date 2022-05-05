#include <stdio.h>

enum donuts {VANILLA = 5, ICE = 22, PINK};

int main() {
    enum donuts my_donut;
    my_donut = PINK;
    printf("Donut #%d\n", my_donut);
    return 0;
}