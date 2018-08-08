/*
** 104intersection.c for 104intersection in /home/VSridhar78/104intersection
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Wed Dec 21 09:23:28 2016 Sridhar Vengadesan
** Last update Fri Jan  6 10:54:47 2017 Sridhar Vengadesan
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int	calc_sphere(char **av)
{
  float	a;
  float	b;
  float	c;
  float	d;
  float	t;
  float	t2;
  float x;
  float y;
  float z;
  float	x2;
  float	y2;
  float	z2;

  a = pow(atoi(av[5]), 2) + pow(atoi(av[6]), 2) + pow(atoi(av[7]), 2);
  b = 2 * ((atoi(av[5]) * atoi(av[2])) + (atoi(av[6]) * atoi(av[3])) + (atoi(av[7])) * atoi(av[4]));
  c = pow(atoi(av[2]), 2) + pow(atoi(av[3]), 2) + pow(atoi(av[4]), 2) - pow(atoi(av[8]), 2);
  d = pow(b, 2) - (4 * a * c);
  if (d < 0)
    {
      printf("No intersection point.\n");
    }
  else if (d == 0)
    {
      printf("1 intersection point :\n");
      t = -b / (2 * a);
      x = atoi(av[5]) * t + atoi(av[2]);
      y = atoi(av[6]) * t + atoi(av[3]);
      z = atoi(av[7]) * t + atoi(av[4]);
      printf("(%0.3f, %0.3f, %0.3f)\n", x, y, z);
    }
  else if (d > 0)
    {
      printf("2 intersection points :\n");
      t = (-b + sqrt(d)) / (2 * a);
      t2 = (-b - sqrt(d)) / (2 * a);
      x = atoi(av[5]) * t + atoi(av[2]);
      y = atoi(av[6]) * t + atoi(av[3]);
      z = atoi(av[7]) * t + atoi(av[4]);
      x2 = atoi(av[5]) * t2 + atoi(av[2]);
      y2 = atoi(av[6]) * t2 + atoi(av[3]);
      z2 = atoi(av[7]) * t2 + atoi(av[4]);
      printf("(%0.3f, %0.3f, %0.3f)\n", x, y, z);
      printf("(%0.3f, %0.3f, %0.3f)\n", x2, y2, z2);
    }
}

int	calc_cylinder(char **av)
{
  float	a;
  float	b;
  float	c;
  float	d;
  float	t;
  float	t2;
  float x;
  float y;
  float z;
  float	x2;
  float	y2;
  float	z2;

  a = pow(atoi(av[5]), 2) + pow(atoi(av[6]), 2);
  b = 2 * ((atoi(av[5]) * atoi(av[2])) + (atoi(av[6]) * atoi(av[3])));
  c = pow(atoi(av[2]), 2) + pow(atoi(av[3]), 2) - pow(atoi(av[8]), 2);
  d = pow(b, 2) - (4 * a * c);
  if (d < 0)
    {
      printf("No intersection point.\n");
    }
  else if (d == 0)
    {
      printf("1 intersection point :\n");
      t = -b / (2 * a);
      x = atoi(av[5]) * t + atoi(av[2]);
      y = atoi(av[6]) * t + atoi(av[3]);
      z = atoi(av[7]) * t + atoi(av[4]);
      printf("(%0.3f, %0.3f, %0.3f)\n", x, y, z);
    }
  else if (d > 0)
    {
      printf("2 intersection points :\n");
      t = (-b + sqrt(d)) / (2 * a);
      t2 = (-b - sqrt(d)) / (2 * a);
      x = atoi(av[5]) * t + atoi(av[2]);
      y = atoi(av[6]) * t + atoi(av[3]);
      z = atoi(av[7]) * t + atoi(av[4]);
      x2 = atoi(av[5]) * t2 + atoi(av[2]);
      y2 = atoi(av[6]) * t2 + atoi(av[3]);
      z2 = atoi(av[7]) * t2 + atoi(av[4]);
      printf("(%0.3f, %0.3f, %0.3f)\n", x, y, z);
      printf("(%0.3f, %0.3f, %0.3f)\n", x2, y2, z2);
    }
}

int	calc_cone(char **av)
{
  float	a;
  float	b;
  float	c;
  float	d;
  float	t;
  float	t2;
  float x;
  float y;
  float z;
  float	x2;
  float	y2;
  float	z2;
  float	angle;

  angle = (M_PI * atoi(av[8])) / 180;
  a = pow(tan(angle), 2) * (pow(atoi(av[5]), 2) + pow(atoi(av[6]), 2)) - pow(atoi(av[7]), 2);
  b = pow(tan(angle), 2) * (2 * ((atoi(av[5]) * atoi(av[2])) + (atoi(av[6]) * atoi(av[3])))) - (2 * (atoi(av[7]) * atoi(av[4])));
  c = pow(tan(angle), 2) *  (pow(atoi(av[2]), 2) + pow(atoi(av[3]), 2)) - (pow(atoi(av[4]), 2));
  d = pow(b, 2) - (4 * a * c);
  if (d < 0)
    {
      printf("No intersection point.\n");
    }
  else if (d == 0)
    {
      printf("1 intersection point :\n");
      t = -b / (2 * a);
      printf("%f", t);
      x = atoi(av[5]) * t + atoi(av[2]);
      y = atoi(av[6]) * t + atoi(av[3]);
      z = atoi(av[7]) * t + atoi(av[4]);
      printf("(%0.3f, %0.3f, %0.3f)\n", x, y, z);
    }
  else if (d > 0)
    {
      printf("2 intersection points :\n");
      t = (-b + sqrt(d)) / (2 * a);
      t2 = (-b - sqrt(d)) / (2 * a);
      x = atoi(av[5]) * t + atoi(av[2]);
      y = atoi(av[6]) * t + atoi(av[3]);
      z = atoi(av[7]) * t + atoi(av[4]);
      x2 = atoi(av[5]) * t2 + atoi(av[2]);
      y2 = atoi(av[6]) * t2 + atoi(av[3]);
      z2 = atoi(av[7]) * t2 + atoi(av[4]);
      printf("(%0.3f, %0.3f, %0.3f)\n", x, y, z);
      printf("(%0.3f, %0.3f, %0.3f)\n", x2, y2, z2);
    }
}

void	display_1(char **av)
{
  printf("sphere of radius %s\n", av[8]);
  printf("straight line going through the (%s,%s,%s) point and of direction vector (%s,%s,%s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
  calc_sphere(av);
}

void     display_2(char **av)
{
  printf("cylinder of radius %s\n", av[8]);
  printf("straight line going through the (%s,%s,%s) point and of direction vec\
tor (%s,%s,%s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
  calc_cylinder(av);
}

void     display_3(char **av)
{
  printf("cone of %s degree angle\n", av[8]);
  printf("straight line going through the (%s,%s,%s) point and of direction vec\
tor (%s,%s,%s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
  calc_cone(av);
}

int	display(int ac, char **av)
{
  if (av[1][0] == '1')
    {
      if (av[8][0] != '-')
	display_1(av);
      else
	return (84);
    }
  else if (av[1][0] == '2')
    {
      if (av[8][0] != '-')
	display_2(av);
      else
	return (84);
    }
  else if (av[1][0] == '3')
    {
      if (av[8][0] != '-' || (av[8][2] == '\0'))
	display_3(av);
      else
	return (84);
    }  
}

int	main(int ac, char **av)
{
  int   i;
  int   j;

  i = 1;
  j = 0;
  
  if (ac != 9)
    return (84);
  else
    {
      while (i != ac)
	{
	  while (av[i][j] != '\0')
	    {
	      if (av[i][j] >= 48 && av[i][j] <= 57 || av[i][j] == '-')
		j = j + 1;
	      else
		return(84);
	    }
	  i = i + 1;
	  j = 0;
	}
      if (i == ac)
	display(ac, av);
    }
}
