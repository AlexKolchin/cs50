#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    string s = argv[argc - 1]; //read second arg as string
    int n = strlen(s); //read length of string
    int const K = 26; //coef 'z' - 'a'
    if (argc != 2) //check if its two arguments
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        //check for digits if its not - return
        for (int i = 0; i < n; i++)
        {
            if (isdigit(s[i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 0;
            }    
        }
        int x = atoi(s);
        string p = get_string("plaintext:  ");
        int l = strlen(p);
        for (int i = 0; i < l; i++)
        {
            //check for lower
            if (p[i] >= 97 && p[i] <= 122)
            {
                if ((p[i] + x % K) > 122)
                {
                    p[i] = (p[i] + x % K) - K;
                }
                else
                {
                    p[i] = (p[i] + x % K);
                }
            }
            //check for upper
            else if (p[i] >= 65 && p[i] <= 90)
            {
                if ((p[i] + x % K) > 90)
                {
                    p[i] = (p[i] + x % K) - K;
                }
                else
                {
                    p[i] = (p[i] + x % K);
                }
            }
            else 
            {
                p[i] = p[i];
            }
        }
        printf("ciphertext: %s\n", p);
    }
}

