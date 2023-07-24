/*#include <stdio.h>
#include <stdlib.h>

#define NUMS 10

int* numerosPares(int *original, int tamanoOriginal, int *tamanoTablaPares) {
    int *tablaPares;
    
    if(original == NULL || tamanoTablaPares == NULL || tamanoOriginal < 1) {
        return NULL;
    }
    
    for(int i = 0; i < tamanoOriginal; i++) {
        if(original[i] % 2 == 0) {
            (*tamanoTablaPares)++;
        }
    }
    
    if((*tamanoTablaPares == 0)) {
        return 0;
    }
    
    if((tablaPares = (int*)malloc((*tamanoTablaPares) * sizeof(int))) == NULL){
        return NULL;
    }
    
    for(int i = 0, j = 0; i < tamanoOriginal; i++) {
        if(original[i] % 2 == 0) {
            tablaPares[j] = original[i];
            j++;
        }
    }
    
    return tablaPares;
    
}

int mostrarTabla(int *tabla, int tamano) {
    if(tabla == NULL || tamano < 1) {
        return 0;
    }
    
    for(int i = 0; i < tamano; i++) {
        printf("%d ", tabla[i]);
    }
    
    return 1;
    
    
}
int main() {
    int tamanoPares, *nums, *tablaPares;
    
    if((nums =(int*) malloc(NUMS*sizeof(int))) == NULL) {
        printf("Error reservando memoria");   
    }
    
    printf("Introduce 10 numeros uno a uno:\n");
    for(int i = 0; i < NUMS; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &nums[i]);
    }
    
    if((tablaPares = numerosPares(nums, NUMS, &tamanoPares)) == 0) {
        printf("La tabla no tiene numeros pares");
        return 0;
    } else {
        printf("Los numeros pares de la tabla son: ");
        if((mostrarTabla(tablaPares, tamanoPares)) == 0) {
            printf("Error en la ejecución");
        }
        
    }
    
    free(tablaPares);
    free(nums);
    
    return 0;
}*/