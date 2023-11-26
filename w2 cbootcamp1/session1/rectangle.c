#include <stdio.h>
int main(){
    float length;
    float breadth;
    printf("Enter rectangle length: ");
    scanf("%f", &length);
    printf("Enter rectangle breadth: ");
    scanf("%f", &breadth);
    float area = length * breadth;
    printf("The area of the rectangle is %f units. \n", area);
}