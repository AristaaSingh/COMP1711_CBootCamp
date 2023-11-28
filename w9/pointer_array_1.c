#include <stdio.h>

int main()
{
    int vector[5] = {1,2,3,4,5};

    int* address;

    address = vector; 

    printf("\n \n address = %p\n", address);

    printf( " vector = %p\n\n",vector);

    printf ("address[0] = %d  ,  vector[0] = %d  \n\n",address[0],vector[0]);

}