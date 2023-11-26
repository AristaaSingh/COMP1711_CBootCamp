#include <stdio.h>
int main(){
    char mystring[6] = "Hello";
    int i;
    for(i = 5; i >= 0; i = i - 1){
        printf("%c\n", mystring[i]);
    }
return 0;
}