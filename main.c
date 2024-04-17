#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
  printf("Bienvenido/a a su guía para la planeación de sus rutas\n");

  printf("Ingrese la ruta que quiera consultar:\n");

  printf("1. Ruta M19\n");
  printf("2. Ruta M20\n");
  printf("3. Salir\n");

  int opcion;
  scanf("%d", &opcion);

  if (opcion == 1) {
    printf("Ruta M19 seleccionada\n"
      "Estaciones de la ruta:\n\n"
      "1. Estación de trenes\n"
      "2. Estación Las Pascuas\n"
      "3. Estación Las Palmas\n"
      "4. Estación Valvanera\n"
      "5. Portal Los mayas (Última estación)\n");
    // Include code for handling Ruta M19
  } else if (opcion == 2) {
    printf("Ruta M20 seleccionada \n\n"
      "Estaciones de la ruta: \n\n"
      "1. Estación Las Piedras\n"
      "2. Estación Pasoancho\n"
      "3. Estación Aguaclara\n"
      "4. Estación Flores\n"
      "5. Estación CIT(Centro Internacional Tecnologico)\n");
    // Include code for handling Ruta M20
  } else if (opcion == 3) {
    printf("Saliendo del programa\n"
      ">>>>>¡Buen viaje!<<<<<\n"
      "Si tienes duda de tu plan de viaje, consulta nuestra guía de rutas\n");
  } else {
    printf("Opción no válida\n");
  }

  return 0;
}

//Crear interfaz para seleccionar si es una ruta feriada o dia normal

//crear opcion para salir despues de realizar una consulta o volver al inicio

