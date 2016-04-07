/*
** my_put_nbr_base2.c for my_put_nbr_base2.c in
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Fri Nov 14 14:22:54 2014 michael besnainou
** Last update Sun Nov 16 18:13:30 2014 michael besnainou
*/

#include "my.h"

int	my_put_nbr_base2(unsigned int nb, char *base)
{
  int	deb;
  int	fin;
  int	len;

  len = my_strlen(base);
  fin = nb % len;
  deb = (nb - fin) / len;
  if (deb != 0)
    {
      my_put_nbr_base2(deb, base);
    }
  my_putchar(base[fin]);
  return (0);
}
