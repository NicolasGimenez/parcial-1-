#ifndef Pantalla_H_INCLUDED
#define Pantalla_H_INCLUDED
typedef struct
{
    char nombre[50];
    char direccion[50];
    float precio;
    int tipo;
    //------------
    int idPantalla;
    int isEmpty;
}Pantalla;
#endif // Pantalla_H_INCLUDED


int Pantalla_init(Pantalla* array,int limite);
int Pantalla_mostrar(Pantalla* array,int limite);
int Pantalla_mostrarDebug(Pantalla* array,int limite);
int Pantalla_alta(Pantalla* array,int limite);
int Pantalla_baja(Pantalla* array,int limite, int id);
int Pantalla_modificacion(Pantalla* array,int limite, int id);
int Pantalla_ordenar(Pantalla* array,int limite, int orden);
int buscarLugarLibre(Pantalla* array,int limite);
int proximoId();


