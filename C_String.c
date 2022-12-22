// Strings Manipulation in C
#include "stdio.h"

void percent_c(int size,char name[]) { // %c
    printf("percent_c will be executed.\nEnter full name: ");
    for (int i = 0; i < size; i++) {
        // %c take input until loop ends characters
        scanf("%c", &name[i]);
    }
    printf("Your name is: ");
    for (int i = 0; i < size; i++) {
        printf("%c", name[i]);
    }
}

void percent_s(char name[]) { // %s
    // %s take input until SPACE is entered
    // it will continuously take input and can cause Stackoverflow
    printf("percent_s will be executed.\nEnter name without SPACE till size: ");
    scanf("%s", name);
    // we don't need & because array is already passed as pointer address
    printf("your name is %s\n", name);
}

void fgets_puts(int size,char name[]) {
    printf("fgets_puts will be executed.\nEnter name in one Line: ");
    // fgets takes maximum of specified length input
    // after specified length others chars will automatically be ignored
    // but \n can also stop input stream
    fgets(name, size, stdin);
    printf("Your name is: ");
    puts(name); // print til \n
}

int main() {
    int size=20; // variable to store array size
    char name[size];
    // CALL THE DESIRED FUNCTION BY UNCOMMENTING AND DO IT
//    percent_c(size,name);
//    percent_s(name);
//    fgets_puts(size,name);


}