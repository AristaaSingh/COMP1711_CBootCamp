#include <stdio.h>
int main(){
    int my_array[5] = {1,2,3,4,5};
    // since the elements of the array are fixed and less in number, let's individually take each element into a temporary variable
    int e5 = my_array[0];
    int e4 = my_array[1];
    int e3 = my_array[2];
    int e2 = my_array[3];
    int e1 = my_array[4];
    // placing the elements in their new places one by one!!!
    my_array[0] = e1;
    my_array[1] = e2;
    my_array[2] = e3;
    my_array[3] = e4;
    my_array[4] = e5;
    // print the array for the world to see
    int i;
    for (i = 0; i < 5; i++){
        printf("%d\n", my_array[i]);
    }
    return 0;
}