#include <stdio.h>
int main(){
    int a;
    for (a = 1; a <= 10; a++){
        int b = a*a;
        printf("square = %d\n", b);
    }
    return 0;
}