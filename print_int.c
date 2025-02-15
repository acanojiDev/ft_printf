#include "ft_printf.h"

int print_int(int number){
	ft_putnbr_fd(number, 1);
	return (1);
}
