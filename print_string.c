#include "ft_printf.h"
/**
 * ft_putstr_fd - Escribe una cadena de caracteres en un descriptor de archivo.
 * @s: La cadena de caracteres a escribir.
 * @fd: El descriptor de archivo en el que se escribirá la cadena.
 *
 * Esta función toma una cadena de caracteres `s` y la escribe carácter por carácter
 * en el descriptor de archivo especificado por `fd`. Utiliza la función `write` para
 * realizar la escritura.
 *
 * Return: Nada.
 */

int		print_string(char *s){
	if (!s)
	{
		ft_putstr_fd("(null)", 1); //si no le pasamos *s nos devuelve (null)
		return (6);
	}
	while (*s)
		s++;
	ft_putstr_fd(s, 1);
	return (s);
}
