/*#include <stdio.h>

int cifras(int num, int *primera, int *ultima) {
    int mod, tmp, i;
    tmp = num;
    if(num < 0) {
        (*ultima = num%10 * -1);
    } else 
        (*ultima) = num%10;

    for(i = 0; tmp >= 10 || tmp <= -10; i++) {
        tmp/=10;
    }
    (*primera) = tmp;
    
    return i+1;
}

int main() {
    int num, qty, primera, ultima;
    
    printf("Introduce un numero: ");
    scanf("%d", &num);
    
    qty = cifras(num, &primera, &ultima);
    
    printf("El numero %d tiene %d cifras. La primera es %d y la ultima es %d", num, qty, primera, ultima);
    return 0;
}*/