#include <stdio.h>

int strLen(char string1[]){
    int i = 0;
    while( string1[i] != '\0')
        i++;
    return i;
}

int main(){
    int size = 100;
    char my_string[size];
    printf("Enter a string.\n");
    scanf("%s", my_string);
    printf("%d\n", strLen(my_string));
    return 0;
}