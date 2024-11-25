#include <stdio.h>
#include "string_utilities.h"

int main(int argc, char *argv[]){

    char *s = "   ";
    char *first, *last;
    find_content(s,&first, &last);
    printf("%c...%c\n", *first, *last);

} 
