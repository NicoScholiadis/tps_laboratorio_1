/*
 * LibreriaDeOperaciones.c
 *
 *  Created on: 31 mar. 2022
 *      Author: usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include "LibreriaDeOperaciones.h"

float sumar(float n1, float n2) {
	float rtn;
	rtn = n1 + n2;
	return rtn;
}
float restar(float n1, float n2) {
	float rtn;
	rtn = n1 - n2;
	return rtn;
}
float multiplicar(float n1, float n2) {
	float rtn;
	rtn = n1 * n2;
	return rtn;
}
float dividir(float n1, float n2) {
	float rtn;
	if(n2 != 0){
		rtn = n1 / n2;
	}else{
		return 0;//Si el número 2 es 0, retornar un 0
	}
	rtn = n1 / n2;
	return rtn;
}
float dividirInt(int n1, int n2) {
	float rtn;
	if(n2 != 0){
			rtn = n1 / n2;
		}else{
			return 0;
		}
	rtn = (float)n1 / n2;
	return rtn;
}
float Descuento(float precio, float porcentaje, float precioConDescuento){
	float calculoDescuento;
	calculoDescuento = precio * (porcentaje/100);
	precioConDescuento = precio - calculoDescuento;

	return precioConDescuento;
}
float Aumento(float precio, float porcentaje, float precioConAumento){
	float calculoAumento;
	calculoAumento = precio * (porcentaje/100);
	precioConAumento = precio + calculoAumento;

	return precioConAumento;
}
float BitcoinPasaje(float bitcoin, float pesos){
	bitcoin = 4606954.55;
	float bitcoinConvertido = pesos / bitcoin;

	return bitcoinConvertido;
}

float PrecioUnitario(float precio, float kilometros){

	float rtn;

	rtn = precio / kilometros;

	return rtn;
}
