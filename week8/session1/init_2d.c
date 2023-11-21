#include <stdio.h>

void printArray(int a[][3] ){
  // always specify number of columns since it tells the array pointer after how many columns it has to move to the 
  // next row. specifying number of rows not necessary but number of columns is. 
  for (size_t i = 0; i <= 1; ++i) {
     for (size_t j = 0; j <= 2; ++j) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}

int main() {
  int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  printf("Values in array1 by row are:\n");
  printArray(array1);

  int array2[2][3] = {1, 2, 3, 4, 5};
  printf("Values in array2 by row are:\n");
  printArray(array2);


  int array3[2][3] = {{1, 2}, {4}};
  printf("Values in array3 by row are:\n");
  printArray(array3);
  
  return 0;
}