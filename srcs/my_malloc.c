/*
** my_malloc.c for  in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:43:34 2016 courneil lucasc
** Last update Mon Jun 20 09:43:36 2016 courneil lucasc
*/

#include <stdlib.h>

void	*my_malloc(unsigned int t)
{
  char	*str;

  if (!(str = malloc(sizeof(char) * t)))
    return (NULL);
  return (str);
}
