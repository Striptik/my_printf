 /*
** my_sort_int_tab.c for my_sort_int_tab in /home/loisel_k/rendu/Piscine-C-lib/my
** 
** Made by loisel_k
** Login   <loisel_k@epitech.net>
** 
** Started on  Wed Oct  9 10:21:32 2013 loisel_k
** Last update Tue Oct 29 10:56:10 2013 loisel_k
*/

#include <stdio.h>
#include <stdlib.h>

int		*my_sort_int_tab(int *tab, int size)
{
  int		i;
  int		ret;
  int		tmp;

  ret = 1;
  while (ret == 1)
    {
      ret = 0;
      i = 0;
      while (i < size)
	{
	  if (tab[i] > tab[i + 1])
	    {
	      tmp = tab[i];
	      tab[i] = tab[i + 1];
	      tab[i + 1] = tmp;
	      i++;
	      ret = 1;
	    }
	  else
	    i++;
	}
    }
  return (tab);
}

int main(int ac, char **av)
{
  int		tab[5];
  int		i;
  int		*res;

  i = 0;
  tab[0] = 23;
  tab[1] = 20;
  tab[2] = 3;
  tab[3] = 12;
  tab[4] = 9;
  my_sort_int_tab(tab, 5);
  while (i < 5)
    printf("%d\n", tab[i++]);
  return (0);
}
