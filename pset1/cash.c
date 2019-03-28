#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_positive_float(string prompt);

int main(void)
{
    float coins = get_positive_float("Show your change: ");
    int cash = round(coins*100);
    int a = 25;
    int b = 10;
    int c = 5;
    int d = 1;
    int resta = cash % a; 
    int suma = cash - (cash % a); 
    int qa = suma / a; 
    int restb = resta % b; 
    int sumb = resta - restb; 
    int qb = sumb / b; 
    int restc = restb % c; 
    int sumc = restb - restc; 
    int qc = sumc / c; 
    int restd = restc % d; 
    int sumd = restc - restd; 
    int qd = sumd / d;
    int quantity = qa+qb+qc+qd;
    printf("%i", quantity);
    
}    
float get_positive_float(string prompt)
{
    float n;
    do
    {
        n = get_float("%s\n", prompt);
    }
    while (n < 0);
    return n;
}
