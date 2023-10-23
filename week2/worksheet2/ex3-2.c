#include <stdio.h>
int main(){
    char my_string[100];
    printf("Enter a string.\n");
    scanf("%s", my_string);
    int str_len = sizeof(my_string);
    printf("%d\n", str_len);
    int i;
    int j;
    for (i = 0; ; i++){
        while(my_string[i] != '\0'){
            j++;
        }
    }
    printf("%d\n", j);
}