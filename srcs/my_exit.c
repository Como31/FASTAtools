/*
** my_exit.c for   in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:43:23 2016 courneil lucasc
** Last update Mon Jun 20 09:57:39 2016 courneil lucasc
*/

#include <stdlib.h>
#include "my.h"

void	my_exit(char *str)
{
  my_putstrf(str);
  exit(84);
}
