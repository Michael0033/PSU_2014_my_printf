/*
** my_putstr.c for Exo02 in /home/besnai_m/rendu/day4
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Thu Oct  2 18:54:06 2014 michael besnainou
** Last update Sun Nov 16 18:12:29 2014 michael besnainou
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	my_putstr(char *str)
{
  int	z;

  if (str == NULL)
    {
      write(1, "(null)\n", 7);
      return (6);
    }
  z = 0;
  while (str[z] != '\0')
    {
      my_putchar(str[z]);
      z = z + 1;
    }
  return (0);
}
