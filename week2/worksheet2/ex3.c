#include <stdio.h>

int strLen(string1){
    int i;
    int j = 0;
    for (i = 0; ;i++){
        if(string1[i] == '\0'){
            break;
        }
        else {
            j++;
        }
    }
    return j;
}

int main(){
    int size;
    char my_string[size];
    scanf("%s", my_string);
    printf("%d\n", strLen(my_string));
    return 0;
}