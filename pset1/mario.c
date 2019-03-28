#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    int height = get_positive_int("Enter positive int from 1 to 8: ");
   for (int i = height; i >= 1; i--)
   {
   for (int x = 1; x < i ; x++)
   {
      printf(" ");
   }  
   for (int j = 0; j <= height - i; j++)
      {
          printf("#");
      }
   for (int a = 0; a < 2; a++)
       {
           printf(" ");
       }
       
   for (int b = height; b >= i ; b--)
       {
           printf("#");
       }
       
    printf("\n");
    }
}

int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
}
