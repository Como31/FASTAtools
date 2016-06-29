/*
** option_two.c for   in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 16:12:09 2016 courneil lucasc
** Last update Mon Jun 20 16:36:23 2016 courneil lucasc
*/

#include <stdio.h>
#include <string.h>
#include "my.h"

void	my_puttwo(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == 'A' || str[i] == 'G' || str[i] == 'C' || str[i] == 'N')
	my_putchar(str[i]);
      if (str[i] == 'T')
	my_putchar('U');
      i++;
    }
}

void	option_two()
{
  char	*str;
  char	**new;
  char	**tab;
  int	i = 1;

  str = read_f();
  tab = my_strtowordtab(str);
  new = transform_str(tab);
  my_putstr(new[0]);
  my_putchar('\n');
  while (new[i])
    {
      if (strncmp(new[i], ">", 1) == 0)
	{
	  my_putchar('\n');
	  my_putstr(new[i]);
	  my_putchar('\n');
	}
      else
	my_puttwo(new[i]);
      i++;
    }
  my_putchar('\n');
}
