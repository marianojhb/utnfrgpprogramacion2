#pragma once

void limpiar(); // Limpia la pantalla
void pausarLimpiar(); // Pausa y luego limpia la pantalla
void pausar(); // Pausa
void cargarVector(int*, int, string); // Carga un vector de enteros y pide un mensaje
void verVector(int*,int,string); // Muestra un vector de enteros y pide un mensaje
int getElement(int*, int); // Busca un elemento en un vector de enteros y devuelve el valor buscado como un entero
void printElement(int*, int, int,  const std::string& mensaje=""); // Busca un elemento e imprime con un mensaje opcional
int sumElements(int*, int); // Suma los elementos de un vector de enteros y devuelve un entero
float avgElements(int*, int); // Promedio de los elementos de un vector de enteros y devuelve un flotante

