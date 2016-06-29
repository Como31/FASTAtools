/*
** my_putstr.c for  in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:50:49 2016 courneil lucasc
** Last update Mon Jun 20 15:46:00 2016 courneil lucasc
*/

#include "my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
}

void	my_putstrf(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    my_putcharf(str[i++]);
}

void	my_putone(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == 'A' || str[i] == 'T' || str[i] == 'G'
	  || str[i] == 'C' || str[i] == 'N')
	my_putchar(str[i]);
      i++;
    }
}
