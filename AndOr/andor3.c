#include <stdio.h>

int main() {
 
    int a = 1,b=2,c=1,d;
    d= a-- && ++b || --c && printf("sahib");
    printf("%d %d %d %d", a,b,c,d);
    //OUTPUT is 0 3 1 1 and short circuit so sahib will not print 
    return 0;
}

