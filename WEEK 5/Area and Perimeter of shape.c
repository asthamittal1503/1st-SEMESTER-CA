#include <stdio.h>
#include <math.h>

void calculateRectangle() {
    float length, breadth, area, perimeter;
    printf("\n--- Rectangle ---\n");
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);
}

void calculateCircle() {
    float radius, area, circumference;
    const float PI = 3.14159;
    printf("\n--- Circle ---\n");
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);
}

void calculateTriangle() {
    float side1, side2, side3, area, perimeter, semi_perimeter;
    printf("\n--- Triangle ---\n");
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

     if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        perimeter = side1 + side2 + side3;
        semi_perimeter = perimeter / 2;
        area = sqrt(semi_perimeter * (semi_perimeter - side1) * (semi_perimeter - side2) * (semi_perimeter - side3));
        
        printf("Area of the triangle = %.2f\n", area);
        printf("Perimeter of the triangle = %.2f\n", perimeter);
    } else {
        printf("The given side lengths do not form a valid triangle.\n");
    }
}

void calculateCube() {
    float side, surface_area;
    float perimeter; 
    printf("\n--- Cube ---\n");
    printf("Enter the length of a side: ");
    scanf("%f", &side);
    surface_area = 6 * (side * side);
    perimeter = 4 * side;
    printf("Surface area of the cube = %.2f\n", surface_area);
    printf("Perimeter of a face of the cube = %.2f\n", perimeter);
}

int main() {
    int choice;
    
    do {
        printf("\nSelect a shape:\n");
        printf("1. Rectangle\n");
        printf("2. Circle\n");
        printf("3. Triangle\n");
        printf("4. Cube\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                calculateRectangle();
                break;
            case 2:
                calculateCircle();
                break;
            case 3:
                calculateTriangle();
                break;
            case 4:
                calculateCube();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
