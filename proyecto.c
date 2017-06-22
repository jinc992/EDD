#include "archivo.h"
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	nodoA *raiz=NULL;
	int x,y,posicion;
	int *array=(int*)malloc(38*sizeof(int));
	int **matrizMain=crearMatriz(FIL,COL);
	crearArchivo();
	array=obtenerArchivo();
    raiz=crearArbol(raiz,array);
    cola *colaM=crearCola();
    colaM=recorrerNivel(raiz);
    matrizMain=llenarMatriz(FIL,COL,colaM);
    printf("\nLa imagen de la matriz es: \n");
    imprimirMatrizImagen(matrizMain);
    printf("\nLa representacion numerica de la matriz es: \n");
    imprimirMatrizDato(matrizMain);
    printf("\nAhora determinaremos en que cuadrante se encuentra un pixel");
    printf("\nIngrese la columna del pixel: ");
    scanf("%d",&x);
    printf("\nIngrese la fila del pixel: ");
    scanf("%d",&y);
    posicion=detCuadrante(x,y);
    printf("\nLa posicion del pixel con la coordenadas (%d,%d), esta en el cuadrante: %d",x,y,posicion);
    int *arrayAB=(int*)malloc(38*sizeof(int));
    arrayAB=transformarArbol(raiz);
    printf("\n\nAhora transformaremos el arbol a un arreglo");
    imprimirArray(arrayAB);

	return 0;
}
