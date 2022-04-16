/*
 * input.c
 *
 *  Created on: 5 abr. 2022
 *      Author: usuario
 */
#include "input.h"
#include <stdio.h>
#include <stdlib.h>
/// @fn int getInt(char[], int, int, int, char[], int*)
/// @param mensaje
/// @param reintentos
/// @param minimo
/// @param maximo
/// @param mensajeError
/// @param pNumeroIngresado
/// @return
int getInt(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado)
{
	setbuf(stdout, NULL);
	int retorno = -1;
	int auxiliarInt;
	int retornoScanf;

//Revisar que todos los datos esten bien.
	if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumeroIngresado != NULL && reintentos > 0)
	{
		printf("%s", mensaje);
		retornoScanf = scanf("%d", &auxiliarInt);
		do{
			printf("Este es el reintento %d", reintentos);
			if(retornoScanf != 1 || auxiliarInt > maximo || auxiliarInt < minimo)
			{
				printf("%s", mensajeError);
				retornoScanf = scanf("%d", &auxiliarInt);//hasta aca no se si los datos son VALIDOS, entonces guardo mi dato por esta variable auxiliar
				reintentos--;
			}
			else{
				reintentos = 0;
				*pNumeroIngresado = auxiliarInt;//se guarda en auxiliarInt
				retorno = 0;
			}
		}while(reintentos>0);
	}
	return retorno;
}
void cargarArray(int array[], int tam) {
	for (int i = 0; i < tam; i++) {
		array[i] = i;
	}
}

void imprimirArray(int array[], int tam) {
	for (int i = 0; i < tam; i++) {
		printf("%d\n", array[i]);
	return ;
}
}
