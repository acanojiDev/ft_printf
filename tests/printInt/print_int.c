# include <limits.h>
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

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}


int print_int(int number){
	ft_putnbr_fd(number, 1);
	return (1);
}

int main(void){
	int num1 = 123131231;
	int num2 = 1;
	int num3 = 1.21;
	int num4 = -213313;
	int num5 = 2132178316312;
	print_int(num1);
	write(1,"\n",1);
	print_int(num2);
	write(1,"\n",1);
	print_int(num3);
	write(1,"\n",1);
	print_int(num4);
	write(1,"\n",1);
	print_int(num5);
}
