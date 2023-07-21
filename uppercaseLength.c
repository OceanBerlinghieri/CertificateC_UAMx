#include <stdio.h>

#define DIM 256

int strlength(char *s){
    int i;
    for(i = 0; *s != 0; i++, s++);

    return i;
}

void minu_a_mayu(char *p) {
    for (; *p!= 0; p++)
        *p += 'A'-'a';
}

int main() {
    char string[DIM];
    int length;
    
    printf("Introduce a string in lowercase: ");
    gets(string);

    minu_a_mayu(string);
    length = strlength(string);
    printf("Uppercase string is %s and it's length is %d", string, length);

    return 0;
}