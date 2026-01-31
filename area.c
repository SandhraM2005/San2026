#include <stdio.h>

int main() {
    float side, length, width;
    float area_square, area_rectangle;

    // Square
    printf("Enter side of the square: ");
    scanf("%f", &side);
    area_square = side * side;

    // Rectangle
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    area_rectangle = length * width;

    printf("\nArea of Square = %.2f", area_square);
    printf("\nArea of Rectangle = %.2f\n", area_rectangle);

    return 0;
}
