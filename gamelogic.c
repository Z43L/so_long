#include "ft_get_next_line/get_next_line.h"
#include "libft/libft.h"
#include "FT_PRINTF/ft_printf.h"

int movimiento(char a , char w , char s, char d)
{
    int y;
    int x;
    int static movimientos;

    movimientos = 0;
    while(a)
    {
        ft_printf("%i", movimientos++);
        return x--;
    }
    while(w)
    {
        ft_printf("%i", movimientos++);
        return y++;
    }
    while(s)
    {
        ft_printf("%i", movimientos++);
        return y--;
    }
    while(d)
    {
        ft_printf("%i", movimientos++);
        return x++;
    }
}
