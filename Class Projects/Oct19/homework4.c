#include <stdio.h>
#include <string.h>

int lines( char *text) {
    int lineCount = 1, characterCountPerLine = 1;
    while (*text != 0 ) {
        //printf("text is: %lu\n", sizeof(text));
        if(*text=='!'){
            break;
        }
        characterCountPerLine++;
        if(*text=='\n'){
            //printf("Characters: %d\n", characterCountPerLine);
            lineCount++;
            characterCountPerLine = 1;
        }
        if(characterCountPerLine == 80){
                lineCount = lineCount + 1;
        }
        text++;    
    }
    return lineCount;
}


int main ( int arc, char *argv[] ) {
        printf("%d\n", lines("abc"));

        printf("%d\n", lines("abc\ndef"));

        printf("%d\n", lines("abc!def"));

        printf("%d\n", lines("abc\ndef\n01234567890123456789012345678901234567890123456789012345678901234567890123456789 01234567890123456789012345678901234567890123456789012345678901234567890123456789\0") );

        printf("%d\n", lines("abc\ndef\n01234567890123456789\n012345678901234567890123456789\n0123456789\n0123456789\n0123456789 \n0123456789\n0123456789\n0123456789\n0123456789\n0123456789\n0123456789\n0123456789\n0123456789") );

        printf("%d\n", lines("abc\ndef\n01234567890123456789012345678901234567890123456789012345678901234567890123456789 01234567890123456789012345678901234567890123456789012345678901234567890123456789\nrstu xyz") );
        printf("%d\n", lines("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));

}