#include "ft_printf.h"
/**Macros de la libreria stdarg.h que permiten manejar argumentos de
 * funciones con cantidad variable.
 * Explicación de cada uno:
 * -va_list: es un tipo que se usa para declarar una variable que va a manejar
 * argumentos de funciones con cantidad variable. Es basicamente una estructura
 * que almacena la información necesaria para acceder a los argumentos adicionales
 * que pasan a la función.
 *
 * -va_start. Inicializa la lista de argumentos. Es necesario llamarlo antes de
 * acceder a los argumentos con va_arg. Se le pasa el nombre de la variable va_list y el nombre
 * del último parametro fijo de la funcion(elque se pasa antes de los parámetros variables).
 *
 * -va_arg: Esta macro se usa para obtener el siguiente argumento en la lista de argumentos.
 * Recibe como parámetros el va_list y el tipo de dato que esperas obtener(por ej: int, char etc)
 *
 * -va_end: Es necesario llamarlo para limpiar despues de usar la lista de argumentos.
 * Generalmente se usa al final de la función
 *
 */

int 	ft_printf(const char *format, ...)
{
	int count  = 0;
}
