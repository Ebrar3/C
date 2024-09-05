#include <stdio.h>

// Define the structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a variable of the structure type
    struct Person person1;

    // Access and modify the structure members
    strcpy(person1.name, "John Doe");
    person1.age = 25;

    // Print the structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
} 

//###ctrl+ı copilot ile kodu oluşturdu.###
