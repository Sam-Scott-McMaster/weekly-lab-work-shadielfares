#include <stdio.h>
#include <stdlib.h>
//C-Standard Library
#include "string_utilities.h"
#define INPUT_SIZE 100

int main(int argc, char *argv[]){
    //This initalizes the word I believe as an array of characters (which is by default of type char *)- the plus one is for '/0' terminating character
    char *input = readline2(); 
    printf("%s\n", to_upper(input));
    printf("%s\n", to_lower_pure(input));
    free(input);
}
