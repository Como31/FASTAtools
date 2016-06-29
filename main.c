/*
** main.c for   in /home/courne_l/rendu/synthese/FASTAtools
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:44:21 2016 courneil lucasc
** Last update Mon Jun 20 11:10:32 2016 courneil lucasc
*/

#include "my.h"

int	main(int ac, char **av)
{
  if (ac < 2)
    my_exit("Need more arguments.\n");
  else
    check_option(av);
  return (0);
}
