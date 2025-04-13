#include <stdio.h>

int main() {
 
    int a = 0,b=2,c=3,d;
    d=++a||b++&&c--;
    printf("%d %d %d %d", a,b,c,d);
    // OP is 0 1 3 0
    return 0;
}

