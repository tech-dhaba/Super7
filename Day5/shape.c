//Create an enum to represent different shapes (circle, rectangle, triangle).
//Design a structure to store the properties of each shape (radius, length, width, etc.).
//Use a switch-case statement based on the enum value to perform calculations for different shapes.
#include <stdio.h>
#include <math.h>

// Enum to represent different shapes
typedef enum {
    CIRCLE,
    RECTANGLE,
    TRIANGLE
} ShapeType;

// Structure to store the properties of each shape
typedef struct {
    ShapeType type;
    union {
        struct {
            float radius;
        } circle;
        struct {
            float length;
            float breadth;
        } rectangle;
        struct {
            float base;
            float height;
        } triangle;
    } parameters;
} Shape;

// Function to calculate the area of a shape
float area(const Shape *s) {
    switch (s->type) {
        case CIRCLE:
            return M_PI * s->parameters.circle.radius * s->parameters.circle.radius;
        case RECTANGLE:
            return s->parameters.rectangle.length * s->parameters.rectangle.breadth;
        case TRIANGLE:
            return 0.5 * s->parameters.triangle.base * s->parameters.triangle.height;
        default:
            return 0.0; // Handle unexpected cases
    }
}

// Function to print the area of a shape
void printArea(const Shape *s) {
    float shape_area = area(s);
    switch (s->type) {
        case CIRCLE:
            printf("Circle with radius %.2f has an area of %.2f\n", s->parameters.circle.radius, shape_area);
            break;
        case RECTANGLE:
            printf("Rectangle with length %.2f and breadth %.2f has an area of %.2f\n", s->parameters.rectangle.length, s->parameters.rectangle.breadth, shape_area);
            break;
        case TRIANGLE:
            printf("Triangle with base %.2f and height %.2f has an area of %.2f\n", s->parameters.triangle.base, s->parameters.triangle.height, shape_area);
            break;
        default:
            printf("Unknown shape\n");
    }
}

int main() {
    // Define shapes
    Shape circle = { CIRCLE, .parameters.circle = {5.0} };
    Shape rectangle = { RECTANGLE, .parameters.rectangle = {10.0, 4.0} };
    Shape triangle = { TRIANGLE, .parameters.triangle = {6.0, 8.0} };

    // Print areas of the shapes
    printArea(&circle);
    printArea(&rectangle);
    printArea(&triangle);

    return 0;
}

