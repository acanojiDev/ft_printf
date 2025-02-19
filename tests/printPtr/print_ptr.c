#include <unistd.h>
#include <stdint.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    while (*str)
        ft_putchar(*str++);
}

void ft_puthex(unsigned long num){
	char hex_digits[] = "0123456789abcdef"; //Representa los digitos hexadecimales
	char buffer[16];
	int i  = 0;

	if(num == 0){
		ft_putchar('0');
		return;
	}
	while (num > 0)
	{
		buffer[i++] = hex_digits[num % 16]; //Guardamos residuo
		num /= 16; //dividimos entre 16 ya que es a base 16
	}
	while (i--)
	{
		ft_putchar(buffer[i]); //imprimimos en orden inverso
	}
}

void ft_print_pointer(void *ptr){
	ft_putstr("0x");
	ft_puthex((unsigned long)ptr);
}

int main(void){
	int x = 42;
	void *ptr = &x;
	ft_print_pointer(ptr);
	ft_putchar('\n');

	return 0;
}
