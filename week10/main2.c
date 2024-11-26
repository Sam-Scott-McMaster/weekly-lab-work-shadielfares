#include <stdio.h>
#include "string_utilities.h"

int main(int argc, char *argv[]){

    char *s = " hello world  ";
    char *first, *last;
    find_content(s,&first, &last);
    trim(s, &first, &last);
} 
