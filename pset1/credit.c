#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

long get_positive_long(string prompt);

int main(void)
{
    int sum1 = 0; 
    int sum2 = 0; 
    int a = 0;
    int a1 = 0;
    int a2 = 0;
    int b = 0;
    int c = 0;
    int suma = 0;
    int const nv = 13;
    int const na = 15;
    int const nm = 16;
    long long num = get_positive_long("Number: ");
    //check for AMEX 37
    if (num >=370000000000000 && num <= 379999999999999)
    {
        char snum[na];
        sprintf(snum, "%lld", num); 
        for (int i = na - 2; i >= 1; i -=2)
            {
                            
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт
                a1 = p*2; 
                if (a1 >= 10) // визначаємо розряд від числа
                {
                    b = a1 % 10;
                    c = (a1 - b)/10;
                    suma = b + c;
                    sum1 = sum1 + suma;
                }    
                else
                {
                    sum1 = sum1 + a1;
                }
           
             }
        for (int i = na -1; i >= 0; i-=2)
            {
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт 
                a2 = p;
                sum2 = sum2 + a2;
            }
    int allsum = sum1 + sum2;
    int z = allsum % 10;
        if (z == 0)
        {
            printf("AMEX\n");
        }
        else 
        {
            printf("INVALID\n");
        }
    }    
    //check for AMEX 34
    else if (num >=340000000000000 && num <= 349999999999999)
    {
        char snum[na];
        sprintf(snum, "%lld", num); 
        for (int i = na - 2; i >= 1; i -=2)
            {
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт
                a1 = p*2; 
                if (a1 >= 10) // визначаємо розряд від числа
                {
                    b = a1 % 10;
                    c = (a1 - b)/10;
                    suma = b + c;
                    sum1 = sum1 + suma;
                }    
                else
                {
                    sum1 = sum1 + a1;
                }
             }
        for (int i = na -1; i >= 0; i-=2)
            {
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт 
                a2 = p;
                sum2 = sum2 + a2;
            }
    int allsum = sum1 + sum2;
    int z = allsum % 10;
        if (z == 0)
        {
            printf("AMEX\n");
        }
        else 
        {
            printf("INVALID\n");
        }
    } 
    //check for MASTERCARD 51 52 53 54 55
    else if (num >=5100000000000000 && num <= 5599999999999999)
    {
        char snum[nm];
        sprintf(snum, "%lld", num); 
        for (int i = nm - 2; i >= 0; i -=2)
            {
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт
                a1 = p*2; 
                if (a1 >= 10) // визначаємо розряд від числа
                {
                    b = a1 % 10;
                    c = (a1 - b)/10;
                    suma = b + c;
                    sum1 = sum1 + suma;
                }    
                else
                {
                    sum1 = sum1 + a1;
                }
             }
        for (int i = nm -1; i >= 1; i-=2)
            {
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт 
                a2 = p;
                sum2 = sum2 + a2;
            }
    int allsum = sum1 + sum2;
    int z = allsum % 10;
        if (z == 0)
        {
            printf("MASTERCARD\n");
        }
        else 
        {
            printf("INVALID\n");
        }
    }   
    //check for VISA 4 and 13
    else if (num >=4000000000000 && num <= 4999999999999)
    {
        char snum[nv];
        sprintf(snum, "%lld", num); 
        for (int i = nv - 2; i >= 1; i -=2)
            {
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт
                a1 = p*2; 
                if (a1 >= 10) // визначаємо розряд від числа
                {
                    b = a1 % 10;
                    c = (a1 - b)/10;
                    suma = b + c;
                    sum1 = sum1 + suma;
                }    
                else
                {
                    sum1 = sum1 + a1;
                }
             }
        for (int i = nv -1; i >= 0; i-=2)
            {
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт 
                a2 = p;
                sum2 = sum2 + a2;
            }
    int allsum = sum1 + sum2;
    int z = allsum % 10;
        if (z == 0)
        {
            printf("VISA\n");
        }
        else 
        {
            printf("INVALID\n");
        }
    } 
    //check for VISA 4 16
    else if (num >=4000000000000000 && num <= 4999999999999999)
    {
        char snum[nm];
        sprintf(snum, "%lld", num); 
        for (int i = nm - 2; i >= 0; i -=2)
            {
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт
                a1 = p*2; 
                if (a1 >= 10) // визначаємо розряд від числа
                {
                    b = a1 % 10;
                    c = (a1 - b)/10;
                    suma = b + c;
                    sum1 = sum1 + suma;
                }    
                else
                {
                    sum1 = sum1 + a1;
                }
             }
        for (int i = nm -1; i >= 1; i-=2)
            {
                char o = snum[i]; // переводимо чар
                int p = o - 48;    // в інт 
                a2 = p;
                sum2 = sum2 + a2;
            }
    int allsum = sum1 + sum2;
    int z = allsum % 10;
        if (z == 0)
        {
            printf("VISA\n");
        }
        else 
        {
            printf("INVALID\n");
        }
    } 
    else 
        {
            printf("INVALID\n");
        }
}
long get_positive_long(string prompt)
{
    long n;
    do
    {
        n = get_long("%s", prompt);
    }
    while (n < 0);
    return n;
}
