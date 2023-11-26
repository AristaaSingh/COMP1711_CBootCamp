#include <stdio.h>

float sphereVolume (float radius){
    float volume = 4.1866 * radius * radius * radius;
    return volume;
}

int main(){
    printf("Enter radius of circle.\n");
    float num;
    scanf("%f", &num);
    printf("The volume of sphere is %f.\n", sphereVolume(num));
    return 0;
}