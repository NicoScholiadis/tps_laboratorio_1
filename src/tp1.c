/*
 ============================================================================
 Name        : tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "LibreriaDeOperaciones.h"

int main(void) {
	setbuf(stdout, NULL);
	int numeroOpcion;
	float kilometros;
	float latamPrecio;
	float aerolineasPrecio;
	float descuentoDebito;
	float descuentoDebitoLatam;
	float descuentoDebitoAerolineas;
	float aumentoCreditoLatam;
	float aumentoCreditoAerolineas;
	float aumentoCredito;
	float valorBitcoin;
	float pasajeBitcoinAerolineas;
	float pasajeBitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float diferenciaDePrecio;
	float kilometroForzado;
	float aerolineasForzado;
	float latamForzado;
	float descuentoDebitoLatamForzado;
	float descuentoDebitoAerolineasForzado;
	float aumentoCreditoLatamForzado;
	float aumentoCreditoAerolineasForzado;
	float pasajeBitcoinAerolineasForzado;
	float pasajeBitcoinLatamForzado;
	float precioUnitarioAerolineasForzado;
	float precioUnitarioLatamForzado;
	float diferenciaDePrecioForzado;

	descuentoDebito = 10;
	aumentoCredito = 25;
	valorBitcoin = 4606954.55;
	kilometroForzado = 7090;
	aerolineasForzado = 162965;
	latamForzado = 159339;
	do{
			printf("\tMenu de opciones\n\n");
			printf("\t1. Ingresar Kilómetros:\n\n");
			printf("\t2.Ingresar Precio de Vuelos:\n");
			printf("\t  -Precio vuelo Aerolíneas:\n");
			printf("\t  -Precio vuelo Latam:\n\n");
			printf("\t3. Calcular todos los costos:\n");
			printf("\t  a) Tarjeta de débito (descuento 10%%)\n");
			printf("\t  b) Tarjeta de crédito (interés 25%%) \n");
			printf("\t  c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
			printf("\t  d) Mostrar precio por km (precio unitario)\n");
			printf("\t  e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n");
			printf("\t4. Informar Resultados:\n");
			printf("\tLatam\n");
			printf("\t a) Precio con tarjeta de débito:\n");
			printf("\t b) Precio con tarjeta de crédito:\n");
			printf("\t c) Precio pagando con bitcoin :\n");
			printf("\t d) Precio unitario:\n");
			printf("\tAerolineas\n");
			printf("\t a) Precio con tarjeta de débito:\n");
			printf("\t b) Precio con tarjeta de crédito:\n");
			printf("\t c) Precio pagando con bitcoin :\n");
			printf("\t d) Precio unitario:\n");
			printf("\tLa diferencia de precio es :\n\n\n");
			printf("\t5. Carga forzada de datos:\n");
			printf("\t6. Salir");
			fflush(stdin);
			scanf("%d",&numeroOpcion);
			system("cls");

			switch(numeroOpcion){
					case 1:
					printf("1.Ingresar Kilómetros:\n");
					fflush(stdin);
					scanf("%f", &kilometros);
					break;
					case 2:
					printf("2.Ingresar Precio de Vuelos:\n");
					printf("\t -Precio vuelo Aerolíneas:\n");
					printf("\t -Precio vuelo Latam:\n");
					fflush(stdin);
					scanf("%f", &latamPrecio);
					scanf("%f", &aerolineasPrecio);
						break;
					case 3:
							descuentoDebitoAerolineas = Descuento(aerolineasPrecio, descuentoDebito, descuentoDebitoAerolineas);
							descuentoDebitoLatam = Descuento(latamPrecio, descuentoDebito, descuentoDebitoLatam);
							aumentoCreditoAerolineas = Aumento(aerolineasPrecio, aumentoCredito, aumentoCreditoAerolineas);
							aumentoCreditoLatam = Aumento(latamPrecio, aumentoCredito, aumentoCreditoLatam);
							pasajeBitcoinAerolineas = BitcoinPasaje(valorBitcoin, aerolineasPrecio);
							pasajeBitcoinLatam = BitcoinPasaje(valorBitcoin, latamPrecio);
							precioUnitarioAerolineas = PrecioUnitario(aerolineasPrecio, kilometros);
							precioUnitarioLatam = PrecioUnitario(latamPrecio, kilometros);
							diferenciaDePrecio = restar(latamPrecio, aerolineasPrecio);
							printf("\n\n\t¡Se estan calculando los datos! Presiona cualuier boton para continuar!\n\n");
							system("pause>nul");
						break;
					case 4:
							printf("\n\tKMs Ingresados: %.2f KM", *&kilometros);
							printf("\n\n\tPrecio Aerolineas:$ %.2f ", *&aerolineasPrecio);
							printf("\n\t  a) Precio con tarjeta de débito:$ %.2f", descuentoDebitoAerolineas);
							printf("\n\t  b) Precio con tarjeta de crédito:$ %.2f", aumentoCreditoAerolineas);
							printf("\n\t  c) Precio pagando con bitcoin:%.3f BTC", pasajeBitcoinAerolineas);
							printf("\n\t  d) Precio unitario:$ %.2f\n", precioUnitarioAerolineas);

							printf("\n\n\tPrecio Latam:$ %.2f ", *&latamPrecio);
							printf("\n\t  a) Precio con tarjeta de débito:$ %.2f", descuentoDebitoLatam);
							printf("\n\t  b) Precio con tarjeta de crédito:$ %.2f", aumentoCreditoLatam);
							printf("\n\t  c) Precio pagando con bitcoin:%.3f BTC", pasajeBitcoinLatam);
							printf("\n\t  d) Precio unitario:$ %.2f\n", precioUnitarioLatam);

							printf("\n\tLa diferencia de precio es :$ %.2f\n\n", diferenciaDePrecio);
							printf("\n\n\n\tPresione cualquier boton para continuar!\n\n");
							system("pause>nul");


						break;
					case 5:
							descuentoDebitoAerolineasForzado = Descuento(aerolineasForzado, descuentoDebito, descuentoDebitoAerolineasForzado);
							descuentoDebitoLatamForzado = Descuento(latamForzado, descuentoDebito, descuentoDebitoLatamForzado);
							aumentoCreditoAerolineasForzado = Aumento(aerolineasForzado, aumentoCredito, aumentoCreditoAerolineasForzado);
							aumentoCreditoLatamForzado = Aumento(latamForzado, aumentoCredito, aumentoCreditoLatamForzado);
							pasajeBitcoinAerolineasForzado = BitcoinPasaje(valorBitcoin, aerolineasForzado);
							pasajeBitcoinLatamForzado = BitcoinPasaje(valorBitcoin, latamForzado);
							precioUnitarioAerolineasForzado = PrecioUnitario(aerolineasForzado, kilometroForzado);
							precioUnitarioLatamForzado = PrecioUnitario(latamForzado, kilometroForzado);
							diferenciaDePrecioForzado = restar(aerolineasForzado, latamForzado);
							printf("\n\tKMs Ingresados: %.2f KM", *&kilometroForzado);
							printf("\n\n\tPrecio Aerolineas:$ %.2f", *&aerolineasForzado);
							printf("\n\t  a) Precio con tarjeta de débito:$ %.2f", descuentoDebitoAerolineasForzado);
							printf("\n\t  b) Precio con tarjeta de crédito:$ %.2f", aumentoCreditoAerolineasForzado);
							printf("\n\t  c) Precio pagando con bitcoin:%.3f BTC", pasajeBitcoinAerolineasForzado);
							printf("\n\t  d) Precio unitario:$ %.2f\n", precioUnitarioAerolineasForzado);

							printf("\n\n\tPrecio Latam:$ %.2f", *&latamForzado);
							printf("\n\t  a) Precio con tarjeta de débito:$ %.2f", descuentoDebitoLatamForzado);
							printf("\n\t  b) Precio con tarjeta de crédito:$ %.2f", aumentoCreditoLatamForzado);
							printf("\n\t  c) Precio pagando con bitcoin:%.3f BTC", pasajeBitcoinLatamForzado);
							printf("\n\t  d) Precio unitario:$ %.2f\n", precioUnitarioLatamForzado);

							printf("\n\tLa diferencia de precio es :$ %.2f\n\n", diferenciaDePrecioForzado);

							printf("\n\n\n\tPresione cualquier boton para continuar!\n\n");
							system("pause>nul");

						break;
					case 6:
						break;
					default:
						printf("\n\t OPCION INCORRECTA\n\n");
						break;
						}




						}while(numeroOpcion != 6);




	return EXIT_SUCCESS;
}

