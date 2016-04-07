/*
** my_put_unsigned_nbr.c for my_put_unsigned_nbr in 
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Wed Nov 12 17:20:22 2014 michael besnainou
** Last update Sat Nov 15 15:44:17 2014 michael besnainou
*/

#include "my.h"

void	my_put_unsigned_nbr(unsigned int nb)
{
  int	calc;

  calc = 1;
  while ((nb / calc) >= 10)
    calc *= 10;
  while (calc > 0)
    {
      my_putchar('0' + (nb / calc));
      nb %= calc;
      calc /= 10;
    }
}
