#include <stdio.h>
#include <string.h>
#include <unistd.h>


void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int		print_string(char *s){
	if (!s)
	{
		ft_putstr_fd("(null)", 1); //si no hay contenido en *s que devuelva null
		return (6);
	}
	ft_putstr_fd(s, 1);
	return (strlen(s));
}

int main(void){
	char texto[4] = ""; //cadena vacia para comprobar que devuelva nada
	char texto1[4] = "miel"; //cadena para verificar que sea correcto
	print_string(texto);
	print_string(texto1);
	print_string(NULL); //comprobar que devuelve (null)
}
