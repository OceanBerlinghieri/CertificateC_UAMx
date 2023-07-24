/*#include <stdio.h>
#include <string.h>

#define MAX 128

int main() {
    char s[MAX], vocals[MAX];
    printf("Introduce a string: ");
    gets(s);
    
    for(int i = 0, j = 0; i < strlen(s); i++) {
        switch(s[i-1]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vocals[j] = s[i-1];
                vocals[j+1] = " ";
                j+=2;
        }
        printf("Vocals before %c are: %s\n", s[i], vocals);
    }
    
    return 0;
}*/