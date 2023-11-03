#include <stdio.h>

void concatString(char string1[], char string2[]){
    char new_string[200];
    int count1 = 0;
    int count2 = 0;
    int count_new = 0;
    while (string1[count1] != '\0'){
        new_string[count_new] = string1[count1];
        count1 ++;
        count_new ++;
    }
    while (string2[count2] != '\0'){
        new_string[count_new] = string2[count2];
        count2 ++;
        count_new ++;
    }
    printf("%d\n%d\n", count1, count2);
    printf("%s\n", new_string);

}

int main(){
    char string1[100];
    char string2[100];
    printf("Enter the first string.\n");
    scanf("%s", string1);
    printf("Enter second string.\n");
    scanf("%s", string2);
    concatString(string1, string2);
    return 0;
}