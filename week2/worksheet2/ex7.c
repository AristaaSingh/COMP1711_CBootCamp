# include <stdio.h>

int reverseArray(char my_array[], int my_array_len){
    int count = my_array_len - 1;
    char array2[my_array_len];
    for (count; count >= 0; count --){
        array2[count] = my_array[my_array_len - count];
    }
    int j;
    for (j = 0, j < my_array_len,)
}

int main(){
    int array1_len;
    printf("Enter the number of integers in the array.\n");
    scanf("%d", &array1_len);
    int i;
    char array1[array1_len];
    for (i = 0; i < array1_len; i++){
        printf("Enter the integer.\n");
        int num;
        scanf("%d", &num);
        array1[i] = num;
    }
    reverseArray(array1, array1_len);
}