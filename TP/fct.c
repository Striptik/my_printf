/*
** fct.c for fct in /home/loisel_k/Documents/PDF/Systeme_Unix/my_printf/TP
** 
** Made by kevin loiseleur
** Login   <loisel_k@epitech.net>
** 
** Started on  Tue Nov 12 14:50:01 2013 kevin loiseleur
** Last update Tue Nov 12 16:25:33 2013 kevin loiseleur
*/

typedef struct	ex2
{
  char		c;
  int		param2;
  short		param;
}		ex2;

int		my_strlen(char *s)
{
  int		i;

  i = 0;
  while (s && s[i])
    i++;
  return (i);
}

void		my_putc(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void		my_put_nbr(int nb)
{
  int		u;
  int		d;

  if (nb < 0)
    {
      my_putc('-');
      nb *= -1;
    }
  u = nb % 10;
  d = nb / 10;
  if (d)
    my_put_nbr(d);
  my_putc(u + '0');
  return ;
}

int		fct(int param1, ex2 param2, char *param3)
{
  int		i;
  int		ptr_int[3];
  
  i = 0;
  ptr_int[0] = param1;
  ptr_int[1] = param2;
  ptr_int[2] = param3;
  while (i <= 2)
    {
      my_put_nbr(&ptr_int);
      my_putc('\n');
      my_put_nbr(ptr_int[i++]);
      my_putc('\n');
    }
}

int		main(int ac, char **av)
{
  fct( 23, 1 , 0);
}
