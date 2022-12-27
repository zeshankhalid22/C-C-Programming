// Strings Manipulation in C
#include "stdio.h"
#include "string.h"

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

void str_cmp(char str1[],char str2[]){
    // it will compare two strings
    if(strcmp(str1,str2)>0)
        printf("str1 is greater than str2.\n");
    else if(strcmp(str1,str2)<0)
        printf("str is less than str2.\n");
    else
        printf("both are equal.\n");
}

void str_ncat(char str1[],char str2[],int N){
    printf("First Str: %s\nSecond Str: %s\n",str1,str2);
    // it will copy first characters from second Str to first Str
    strncat(str1,str2,N);
    printf("Conceited first Str with %d Chars: %s",N,str1);

}

void str_str(char str[]){
    // if second Str is found in first Str,
    // it will then print all Chars from where second Str is found
    // if not found then print will Print NULL
    char search[]="el";
    printf("Search: %s\nSrc: %s\nFinal Output: %s",search,str,strstr(str,search));
}

int main() {
    int size=20; // variable to store array size
    char name[size];
    char str1[20]="hello";
    char str2[20]="World";
    // CALL THE DESIRED FUNCTION BY UNCOMMENTING AND DO IT
//    percent_c(size,name);
//    percent_s(name);
//    fgets_puts(size,name);
//    str_cmp(str1,str2);
//    str_ncat(str1,str2,3);
//      str_str(str1);


}