/*
** read_files.c for  in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 10:04:53 2016 courneil lucasc
** Last update Mon Jun 20 21:28:36 2016 courneil lucasc
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char	*read_f()
{
  char	*str;

  str = my_malloc(sizeof(char) * 2048);
  if (read(0, str, 2048) <= 0)
    exit(0);
  if (!str)
    my_exit("Invalid argument\n");
  return (str);
}
