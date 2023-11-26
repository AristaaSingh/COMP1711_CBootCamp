// .h is a header file

#ifndef UTILS_H
#define UTILS_H

// line 1 and 2 will prevent double declaration of the functions

#include <stdio.h>
#include <stdlib.h>

FILE *open_file(char filename[], char mode[]);
FILE *open_file(char filename[], char mode[]);

#endif /* UTILS_H */