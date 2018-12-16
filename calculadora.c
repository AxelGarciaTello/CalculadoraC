#include <stdio.h>
#include "calculadora.h"

void
calculadora (void)
{
  float numero1 = 0.0;
  float numero2 = 0.0;
  float resultado = 0.0;
  int operacion = 0;
  int contador = 1;
  printf ("Black Cat Calculadora\n");
  printf ("Opciones:\n");
  printf
    ("1. Suma\n2. Resta\n3. Multiplicación\n4. División\n5. Potencia\n6. Limpiar\n7. Salir\n");
  printf ("Introduzca un número:\n");
  scanf ("%f", &numero1);
  while (operacion != 7)
    {
      printf ("Operacion a realizar:\n");
      scanf ("%d", &operacion);
      switch (operacion)
	{
	case 1:
	  printf ("Introduzca otro número para la operación:\n");
	  scanf ("%f", &numero2);
	  resultado = numero1 + numero2;
	  printf ("El resultado es: %f\n", resultado);
	  numero1 = resultado;
	  break;
	case 2:
	  printf ("Introduzca otro número para la operación:\n");
	  scanf ("%f", &numero2);
	  resultado = numero1 - numero2;
	  printf ("El resultado es: %f\n", resultado);
	  numero1 = resultado;
	  break;
	case 3:
	  printf ("Introduzca otro número para la operación:\n");
	  scanf ("%f", &numero2);
	  resultado = numero1 * numero2;
	  printf ("El resultado es: %f\n", resultado);
	  numero1 = resultado;
	  break;
	case 4:
	  printf ("Introduzca otro número para la operación:\n");
	  scanf ("%f", &numero2);
	  resultado = numero1 / numero2;
	  printf ("El resultado es: %f\n", resultado);
	  numero1 = resultado;
	  break;
	case 5:
	  printf ("Introduzca a que potencia quiere este número:\n");
	  scanf ("%f", &numero2);
	  resultado = numero1;
	  while (contador < numero2)
	    {
	      resultado = resultado * numero1;
	      contador++;
	    }
	  printf ("El resultado es: %f\n", resultado);
	  numero1 = resultado;
	  break;
	case 6:
	  printf ("Introduce un número:\n");
	  scanf ("%f", &numero1);
	  break;
	case 7:
	  break;
	default:
	  printf ("Entrada incorrecta\n");
	  break;
	}
    }
  return;
}
