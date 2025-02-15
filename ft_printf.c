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
 static int		check_type(const char *input, void *arg){
	int		i;
	i = 0;
	if(*input == 'c')  //para char  solo imprime un caracter
		i+=
	else if(*input == 's') //imprime una string
		i+=
	else if(*input == 'p') //Imprime en formate hexadecimal el puntero void
		i+=
	else if(*input == 'd') // Imprime un numero decimal base 10
		i+=
	else if(*input == 'i') // Imprime un entero  en base 10
		i+=
	else if(*input == 'u') //Imprime un numero decimal base 10 sin signo
		i+=
	else if(*input == 'x') //Imprime un numero hexadecimal base 16 en minúsculas
		i+=
	else if(*input == 'X') //Imprime un numero hexadecimal base 16 en mayúsculas
		i+=
	else if(*input == '%') //Imprime un simbolo de porcentaje
		i+=
 }

int 	ft_printf(const char *input, ...)
{
	va_list		args; //lista donde se almacenan los argumentos
	unsigned int i;

	i = 0;
	va_start(args,input); //los argumentos adicionales empiezan despues del input
	while(*input != '\0'){
		if(*input == '%'){
			input++;
			if(ft_strchr("cspdiuxX",*input))
				i+= check_type(input, va_arg(args,void *));
			else if(*input == '%')
				i += print_char('%');
		}else
			i = i + print_char(*input);
		input++;
	}
	va_end(args);
	return (i);
}
