#include <stdio.h>
// Define the struct Person with bit fields
struct Person {
    unsigned int age : 7;     // 7 bits for age (0 to 127)
    unsigned int height : 9;  // 9 bits for height (0 to 511)
    unsigned int weight : 9;  // 9 bits for weight (0 to 511)
    unsigned int is_active : 1; // 1 bit for is_active (0 or 1)
};
// Function to set the attributes of a Person
void setPersonAttributes(struct Person *person, unsigned int age, unsigned int height, unsigned int weight, unsigned int is_active) {
    person->age = age;
    person->height = height;
    person->weight = weight;
    person->is_active = is_active;
}
// Function to print the attributes of a Person
void printPerson(const struct Person *person) {
    printf("Age: %u\n", person->age);
    printf("Height: %u\n", person->height);
    printf("Weight: %u\n", person->weight);
    printf("Active: %u\n", person->is_active);
}

int main() {
    struct Person person1;
    // Set attributes using the setter function
    setPersonAttributes(&person1, 30, 180, 75, 1);
    // Print attributes using the print function
    printf("Person 1:\n");
   printPerson(&person1);

    return 0;
}


