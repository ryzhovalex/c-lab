#include <stdio.h>
#include <stdlib.h>


int main() {
    // create a pointer to a physical file
    // 'w' - write
    // 'a' - append
    // 'r' - read
    FILE * fpointer = fopen("data/employees.txt", "w");
    // 'fpointer' will point to this opened file

    // write to a file - file will be overwritten!
    fprintf(fpointer, "Jim, Salesman\nMax, Bum\nSimeon, Car dealer\n");

    // append to a file - without overwriting
    fprintf(fpointer, "Dan, Gangsta\n");

    // close the file according to its pointer
    fclose(fpointer);

    ////////////////
    // Reading files
    ////////////////
    char line[255];

    FILE * fpointer2 = fopen("data/employees.txt", "r");
    
    fgets(line, 255, fpointer2);
    // 'line' - place to store information
    // '255' - maximum size that will be read from a line of the file
    // 'fpointer2' - pointer to the file to read from

    // note that the second usage will read a next line
    fgets(line, 255, fpointer2);

    printf("%s", line);


    return 0;
}
