#include <stdio.h>

int main() {
    int a = !printf("hi") - printf("ravi") < printf("sahib") != printf("rashmi");
    printf("%d", a);
    // output will be hiravisahibrashmi1 -> check Operator Precedence in C 
    return 0;
}