/*#include <stdio.h>
#include <string.h>

#define MAX 100
#define SIZE 128

typedef struct {
    char nombre[SIZE];
    char apellido[SIZE];
} Contacto;

typedef struct {
    Contacto contactos[MAX];
    int numeroContactos;
} Agenda;

void iniciarAgenda(Agenda *ag) {
    ag->numeroContactos = 0;
}

void addContacto(Agenda *ag, char *nom, char *apell) {
    strcpy(ag->contactos[ag->numeroContactos].nombre, nom);
    strcpy(ag->contactos[ag->numeroContactos].apellido, apell);
    ag->numeroContactos++;
}

void mostrarAgenda(Agenda ag){
    for(int i = 0; i < ag.numeroContactos; i++) {
        printf("Contacto %d: %s %s\n", i+1, ag.contactos[i].nombre, ag.contactos[i].apellido);
    }
}

int main() {
    Agenda ag;
    int num;
    char nom[SIZE], apell[SIZE];
    
    iniciarAgenda(&ag);
    
    do {
        printf("Cuantos contactos quieres guardar en la agenda?: ");
        scanf("%d", &num);
        getchar();
        if(num < 1 || num > 100) {
            printf("ERROR: el valor debe estar entre 1 y 100");
        }
    } while (num < 1 || num > 100);
    
    for(int i = 0; i < num; i++) {
        printf("Introduce el nombre del contacto %d: ", i+1);
        gets(nom);
        printf("Introduce el apellido del contacto %d: ", i+1);
        gets(apell);
        addContacto(&ag, nom, apell);
    }
    
    printf("Hay %d contactos en la agenda\n", ag.numeroContactos);
    mostrarAgenda(ag);
    
    return 0;
}*/