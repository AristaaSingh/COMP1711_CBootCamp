#include <stdio.h>
int main(){
    int days;
    printf("Enter number of days.");
    scanf("%d", &days);
    long speed = 25920000000;
    printf("Distance light travels in one day is %ld. \n", speed);
    long distance = speed * days;
    printf("Distance light travels in %d days is %ld. \n", days, distance);
    return 0;
}