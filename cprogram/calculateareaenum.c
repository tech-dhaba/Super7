#include <stdio.h>
#include<math.h>
#define PI 3.14
enum ShapeType {
    CIRCLE,
    RECTANGLE,
    TRIANGLE
};
struct Shape {
    enum ShapeType type;
    union {
        struct {
            double radius;
        } circle;

        struct {
            double length;
            double width;
        } rectangle;

        struct {
            double side1;
            double side2;
            double side3;
        } triangle;
    } properties;
};
void calculateArea(struct Shape shape) {
    switch (shape.type) {
        case CIRCLE: {
            double area = PI * shape.properties.circle.radius * shape.properties.circle.radius;
            printf("Circle Area: %.2f\n", area);
            break;
        }
        case RECTANGLE: {
            double area = shape.properties.rectangle.length * shape.properties.rectangle.width;
            printf("Rectangle Area: %.2f\n", area);
            break;
        }
        case TRIANGLE: {
            double s = (shape.properties.triangle.side1 + shape.properties.triangle.side2 + shape.properties.triangle.side3) / 2;
           double area = sqrt(s * (s - shape.properties.triangle.side1) * (s - shape.properties.triangle.side2) * (s - shape.properties.triangle.side3));
            printf("Triangle Area: %.2f\n", area);
            break;
        }
        default:
            printf("Unknown shape type.\n");
            break;
    }
}
int main() {
    struct Shape circle = { CIRCLE, { .circle = { 5.0 } } };
    struct Shape rectangle = { RECTANGLE, { .rectangle = { 3.0, 4.0 } } };
    struct Shape triangle = { TRIANGLE, { .triangle = { 3.0, 4.0, 5.0 } } };
    calculateArea(circle);
    calculateArea(rectangle);
    calculateArea(triangle);
    return 0;
}

