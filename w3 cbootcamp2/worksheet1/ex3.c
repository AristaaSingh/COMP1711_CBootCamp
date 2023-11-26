#include <stdio.h>
int main(){
    printf("Enter marks 0 to 100.\n");
    int marks;
    scanf("%d", &marks);
    if (marks < 50){
        printf("Failed.\n");
    }
    else if (marks >= 50 && marks <= 70){
        printf("Passed.\n");
    }
    else if (marks > 70){
        printf("Passed with merit!!!\n");
    }
    return 0;
}