//hedije jazaj
#include <stdio.h>

// Function to calculate the area of a circle
float calculateArea(float radius) {
    return 3.14 * radius * radius;
}

// Function to calculate the perimeter of a circle
float calculatePerimeter(float radius) {
    return 2 * 3.14 * radius;
}

int main() {
    float radius; // variable to store the radius of the circle

    // Input the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and perimeter using the functions
    float area = calculateArea(radius);
    float perimeter = calculatePerimeter(radius);

    // Output the calculated area and perimeter
    printf("Area of the circle: %.2f square units\n", area);
    printf("Perimeter of the circle: %.2f units\n", perimeter);

    return 0;
}
