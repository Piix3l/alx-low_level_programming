#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)

{
  char ch = 'a';

  while (ch <= 'z')
  {
    if (ch !='q' && ch !='e')
    {
      putchar(ch);
      ch++;
    }
    else
    {
      ch++;
    }
  }
  putchar('\n');
  return(0);
}
