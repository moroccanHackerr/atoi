#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}
int ft_atoi(char *str)
{
  int i = 0;
  int resault = 0;
  int sign = 1;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32) 
  {
      i++;
  }
  while(str[i] == '-' || str[i] == '+')
  {
    if(str[i] == '-')
    {
      sign *= -1;
    }
    i++;
  }
  while(str[i] >= '0' && str[i] <= '9')
  {
    resault = resault * 10 + str[i] - 48;
    i++;
  }
  return (sign * resault);

}

int main()
{
  char str[] = "        ++++-----++++--2474";
  printf("%d\n", ft_atoi(str));
}
