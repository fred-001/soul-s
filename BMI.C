#include <stdio.h>

int main (){
    // variables
    float weight, height, bmi,

    //input
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    //calculate bmi 
    bmi = weight / (height * height);

    //display
    printf("\nYour body mass index: %.2f\n," bmi );

    return 0;
}