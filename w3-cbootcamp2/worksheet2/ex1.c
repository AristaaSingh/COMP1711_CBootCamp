#include <stdio.h>

float circleArea (float radius){
    float area = 3.14 * radius * radius;
    return area;
}

int main(){
    printf("Enter radius of circle.\n");
    float num;
    scanf("%f", &num);
    printf("The area of circle is %f.\n", circleArea(num));
    return 0;
}