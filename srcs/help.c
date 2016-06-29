/*
** help.c for  in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:47:53 2016 courneil lucasc
** Last update Mon Jun 20 16:18:32 2016 courneil lucasc
*/

#include "my.h"

void	puthelp()
{
  my_putstr("USAGE\n"
	    "		./FASTAtools option\n"
	    "DESCRIPTION\n"
	    "     option 1:read FASTA from the standard input,"
	    " write the DNA sequences to the standard output\n"
	    "            2:read FASTA from the standard input,"
	    " write the RNA sequences to the standard output\n");
}
