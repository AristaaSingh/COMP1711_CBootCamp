#include <stdio.h>
int main(){
    short a;
    int b;
    char c;
    float d;
    double e;
    int a_len = sizeof(a);
    int b_len = sizeof(b);
    int c_len = sizeof(c);
    int d_len = sizeof(d);
    int e_len = sizeof(e);
    printf("Size of short integer type is %d\n", a_len);
    printf("Size of integer type is %d\n", b_len);
    printf("Size of char type is %d\n", c_len);
    printf("Size of float type is %d\n", d_len);
    printf("Size of double type is %d\n", e_len);
    return 0;
}