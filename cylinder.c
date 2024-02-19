#include <stdio.h>
#include <math.h>

int main(){
    //variables
    float radius,height,volume, surfaceArea;

    // promt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    //calculate the volume &  surface area
    volume = M_PI * pow(radius, 2) * height;
    surfaceArea = 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height;
    
    //result displayed
    printf("\nVolume of the cylinder: %.2f\n", volume);
    printf("surface area of the cylinder: %.2f\n", surfaceArea);
    
    return 0;

}