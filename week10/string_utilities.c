#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*
 * Params: String word - actual word no pointer
 * Output: Uppercase of word (char *)
 */

//Must return pointer char as that is a word, cannot do this otherwise
//Can't be a double pointer either as that defines an array of strings such as *argv[]
char *to_upper(char *word){
    //Going up until terminating character
    printf("%ld", sizeof(word));
    printf("%ld", strlen(word));
    for (int i = 0; word[i] != '\0'; i++){
        //Subtract 32 via ascii table thats the difference between all lowercase and uppercharacters
        //Additional checking for lowercase, because capital letters should not be added
        if (word[i] >= 'a' && word[i] <= 'z'){
            word[i] -= 32;
        }
    }
    return word;
}

//Since I defined that I am returning a pointer I don't have to define the return value
//Explicity as a pointer
char *to_lower_pure(char *word){
    //If I make word a pointer then I set it equal to a double pointer
    char *copy = word;
    for (int i =0; i < strlen(copy); i++){
        if (copy[i] >= 'A' && copy[i] <= 'Z'){
            copy[i] += 32;
        }
    }
    return copy;
}

char *readline2(){
    char *s = malloc(10001);
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){
        s[i++] = ch;
        if (i == 10000)
            break;
    }
    s[i] = '\0';
    s = realloc(s, strlen(s) + 1);
    return s;
}

int isWhiteSpace(char c){
    //Space, tab, newline
    if (c == ' ' || c == '\t' || c == '\n'){
        return 1;
    } else {
        return 0;
    }
}

void find_content(char *s, char **first, char **last){
    //Unreachable characters
    int start = -1;
    int end = -1;
    int length = strlen(s);
    //Iterate through entire sentence
    for (int i = 0; i < strlen(s); i++){
        //Find non-whitespace character
        if (isWhiteSpace(s[i]) == 0){
            //The following immediately sets the start when we find a letter
            //It also makes sure the end is the same as start given it finds a letter.
            if (start == -1){
                start = i;
            }
            end = i;
        }
    }

    if (start != -1){
        //If we found one valid character
        *first = &s[start];
        *last = &s[end];
    } else {
        *first = &s[length];
        *last = &s[length];
    }
}

/*
 * Params: String
 * Return: Function without space
 */

void trim(char *s){
    
}
