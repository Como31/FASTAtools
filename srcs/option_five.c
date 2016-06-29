/*
** option_four.c for  in /home/courne_l/rendu/synthese/FASTAtools
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Tue Jun 21 13:31:13 2016 courneil lucasc
** Last update Tue Jun 21 19:04:44 2016 courneil lucasc
*/

#include <unistd.h>
#include <string.h>
#include "my.h"

int	check_gat(char *str, int i)
{
  if (str[i] == 'T' && str[i + 1] == 'A' && str[i + 2] == 'A')
    return (0);
  else if (str[i] == 'T' && str[i + 1] == 'A' && str[i + 2] == 'G')
    return (0);
  else if (str[i] == 'T' && str[i + 1] == 'G' && str[i + 2] == 'A')
    return (0);
  return (1);
}

void	my_putcharr(char c)
{
  if (c == 'A' || c == 'T' || c == 'G' || c == 'C' || c == 'N')
    write(1, &c, 1);
  else
    return ;
}

void	my_putfive(char *str)
{
  int	i = 0;

  while (str[i])
    {
      if (str[i] == 'A' && str[i + 1] == 'T' && str[i + 2] == 'G')
	{
	  my_putstr("ATG");
	  i = i + 3;
	  while (check_gat(str, i) == 1 && str[i])
	    {
	      my_putcharr(str[i]);
	      i++;
	    }
	  my_putchar('\n');
	  i++;
	}
      i++;
    }
}

void	option_five()
{
  char	*str;
  char	**new;
  char	**tab;
  int	i = 1;

  str = read_f();
  tab = my_strtowordtab(str);
  new = transform_str(tab);
  while (new[i])
    {
      if (strncmp(new[i], ">", 1) == 0)
	i++;
      else
	my_putfive(new[i]);
      i++;
    }
}
