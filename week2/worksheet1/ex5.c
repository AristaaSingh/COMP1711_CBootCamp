#include <stdio.h>
int main(){
    printf("\n \n \n");
    printf("Welcome to Ari's retro! What would you like to eat?\n\n");
    printf("Indian? {1}\n");
    printf("Italian? {2}\n");
    printf("Japanese? {3}\n");
    printf("Thai? {4}\n");
    printf("Chinese? {5}\n\n");

    int option;
    scanf("%d", &option);
    printf("\n");
    switch (option){
        
        case 1:
        printf("One hot Daal Tadka and steamed rice for you! With a side of buttermilk and pickled mango. Enjoy!\n");
        break;

        case 2:
        printf("Margherita Pizza, fresh out of the oven! With garlic doughballs and tomato soup. Enjoy!\n");
        break;

        case 3:
        printf("One cup of matcha tea and sweet dango for you, relax and enjoy!\n");
        break;

        case 4: 
        printf("Steaming hot bown of Thai green curry with sticky rice coming up! Eat up!\n");
        break;

        case 5: 
        printf("Classic chilli garlic noodles and chicken gravy here! Enjoy!\n");
        break;
    }
    return 0;
}