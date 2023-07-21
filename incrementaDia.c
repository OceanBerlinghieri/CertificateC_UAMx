/*#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

void incrementaDia (Fecha *f){
    if(f->dia >= 30) {
        f->dia = 1;
        if(f->mes >= 12) {
            f->mes = 1;
            f->anyo++;
        } else {
            f->mes++;
        }    
    } else {
        f->dia++;
    }
}

int main() {
    Fecha f;
    printf("Introduce un dia: ");
    scanf("%d", &f.dia);
    printf("Introduce un mes: ");
    scanf("%d", &f.mes);
    printf("Introduce un año: ");
    scanf("%d", &f.anyo);
    
    incrementaDia(&f);
    
    printf("El dia siguiente al intoducido es: %d/%d/%d", f.dia, f.mes, f.anyo);
}*/