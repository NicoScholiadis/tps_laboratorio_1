/*
 * input.h
 *
 *  Created on: 5 abr. 2022
 *      Author: usuario
 */

#ifndef INPUT_H_
#define INPUT_H_
#include <stdio.h>
#include <stdlib.h>

int getInt(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado);
int getIntMensaje(char mensaje[], char mensajeError[]);
void cargarArray(int array[], int tam);
void imprimirArray(int array[], int tam);

#endif /* INPUT_H_ */
