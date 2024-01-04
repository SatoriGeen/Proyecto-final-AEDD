#include "d_listadb.h"
#include "d_listadb.c"
#include <stdio.h>
#include <string.h>



int main(){
    
    DList _2CV1_, _2CV2_, _2CV3_, _2CV4_;
    create(&_2CV1_);
    create(&_2CV2_);
    create(&_2CV3_);
    create(&_2CV4_);
    DList *listas[] = {&_2CV1_, &_2CV2_, &_2CV3_, &_2CV4_};

    UdList usuarios;

    

    int opcion;
    menuDeListas();
    scanf("%d", &opcion);
    getchar(); 
    manejarInsercionEnHorario(listas[opcion - 1], opcion);

    int opi;
    menuDeListas();
    scanf("%d", &opi);
    getchar(); 

    printf("elige clase a editar \n");
    imprimirCLases(listas[opi - 1]);
    manejarEdicionEnGrupo(listas[opi - 1], opi);

    int opio;
    menuDeListas();
    scanf("%d", &opio);
    getchar(); 

    printf("elige clase a editar \n");
    imprimirCLases(listas[opio - 1]);

    manejarReduccionEnGrupo(listas[opio - 1], opio);


    manejarInsercionDeUsuarios(&usuarios);

    /*
    UdList usuarios;
    createU(&usuarios);
    char nombreUsuario[15],contrasena[50], nombreCompleto[100], rolUsuario[10];

    printf("ingrese el nuevo usuario: ");
    fgets(nombreUsuario, sizeof(nombreUsuario), stdin);
    nombreUsuario[strcspn(nombreUsuario, "\n")] = '\0';

    printf("Ingrese la contrasena: ");
    fgets(contrasena, sizeof(contrasena), stdin);
    contrasena[strcspn(contrasena, "\n")] = '\0';

    printf("ingrese el nombre completo: ");
    fgets(nombreCompleto, sizeof(nombreCompleto), stdin);
    nombreCompleto[strcspn(nombreCompleto, "\n")] = '\0';

    printf("Elija el tipo de usuario: \n");
    printf("1. Administrador\n");
    printf("2. Alumno\n");
    scanf("%d", &opcion);

    if (opcion == 1){
        strcpy(rolUsuario, "admin");
    }
    else{
        strcpy(rolUsuario, "alumno");
    }
    
    insertarUsuarios(&usuarios, nombreUsuario, contrasena, nombreCompleto, rolUsuario);
    imprimirUsuarios(&usuarios);*/
    
    return 0;
}
