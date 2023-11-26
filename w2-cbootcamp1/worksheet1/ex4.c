#include <stdio.h>
int main(){
    // getting user input for radius.
    float radius;
    printf("Enter the radius of the circle. \n");
    scanf("%f", &radius);
    // calculating the area
    float area = 3.14 * radius * radius;
    printf("The area of the circle is %f sq units. \n", area);
    return 0;
}
