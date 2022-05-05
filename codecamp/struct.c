#include <stdio.h>
#include <stdlib.h>
#include <string.h> // to avoid 'To many arguments' notification on 'strcpy'


struct Student {
    char name[80];
    char major[80];
    int age;
    double gpa;
};


int main() {
    struct Student student1; // create a container that be able to store all data described above
    student1.age = 22;
    student1.gpa = 3.2;

    // we have to use 'strcpy', not the just assignment!
    // student1.name = "Jim"; => Expression must be a modifiable variable!
    strcpy(student1.name, "Mark"); // requires 2 args - source string pointer and destination string pointer
    strcpy(student1.major, "Business");

    printf("%s\n", student1.name);
    printf("%f\n", student1.gpa);

    return 0;
}