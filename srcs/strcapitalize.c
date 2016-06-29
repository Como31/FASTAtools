/*
** requirement.c for   in /home/courne_l/rendu/synthese/FASTAtools
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:28:31 2016 courneil lucasc
** Last update Mon Jun 20 15:35:04 2016 courneil lucasc
*/

#include <string.h>
#include "my.h"

char	*my_strcapitalize(char *str)
{
  int	i = 0;

  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}

char	my_charcapitalize(char c)
{
  if (c >= 'a' && c <= 'z')
    return (c - 32);
  return (c);
}
