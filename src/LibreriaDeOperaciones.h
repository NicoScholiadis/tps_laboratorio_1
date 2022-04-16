/*
 * LibreriaDeOperaciones.h
 *
 *  Created on: 31 mar. 2022
 *      Author: usuario
 */


#ifndef LIBRERIADEOPERACIONES_H_
#define LIBRERIADEOPERACIONES_H_
#include <stdio.h>
#include <stdlib.h>

float sumar(float n1, float n2);
float restar(float n1, float n2);
float multiplicar(float n1, float n2);
float dividirInt(int n1, int n2);
float dividir(float n1, float n2);
float Descuento(float precio, float porcentaje, float precioConDescuento);
float Aumento(float precio, float porcentaje, float precioConAumento);
float BitcoinPasaje(float bitcoin, float pesos);
float PrecioUnitario(float precio, float kilometros);

#endif /* LIBRERIADEOPERACIONES_H_ */
