#include <stdio.h>
int arithmeticCalculator(float num1, float num2, char operator[1]){
    int option;
    int answer;
    if (operator[0] == '+'){
        option = 1;
    }
    else if(operator[0] == '-'){
        option = 2;
    }
    else if(operator[0] == '*'){
        option = 3;
    }
    else if(operator[0] == '/'){
        option = 4;
    }
    switch (option){
        case 1:
        answer = num1 + num2;
        break;
        case 2:
        answer = num1 - num2;
        break;
        case 3:
        answer = num1 * num2;
        break;
        case 4:
        answer = num1 / num2;
        break;
    }
    return answer;
}

int main(){
    int num1;
    int num2;
    char operator[1];
    printf("Enter first number of operation.\n");
    scanf("%d", &num1);
    printf("Enter second number of operation.\n");
    scanf("%d", &num2);
    printf("Enter operator.\n");
    scanf("%s", operator);
    printf("Your answer is %d.\n", arithmeticCalculator(num1, num2, operator));
}