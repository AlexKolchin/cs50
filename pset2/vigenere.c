#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int shift(char c);
int main(int argc, string argv[])
{

    string key = argv[argc - 1]; //read second arg as string
    int keyLen = strlen(key); //read length of string
    int const K = 26; //coef 'z' - 'a'
    if (argc != 2) //check if its two arguments
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else
    {
        //check for alphabets if its not - return
        for (int i = 0; i < keyLen; i++)
        {
            if (isalpha(key[i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }    
        }

        string str = get_string("plaintext:  ");
        int strLen = strlen(str);
        char codeStr[strLen+1];
        codeStr[strLen] = '\0';//add the null character
        for (int i = 0, k = 0; i < strLen; i++, k++)
        {
            if (k == (keyLen)) //check when keyLen < strLen
            {
                k = 0;
            }
            //check for lower
            if (islower(str[i]))
            {
                if ((str[i] + (shift(key[k])) % K) > 122)
                {
                    codeStr[i] = (str[i] + (shift(key[k])) % K) - K;
                }
                else
                {
                    codeStr[i] = (str[i] + (shift(key[k])) % K);
                }
            }
            //check for upper
            else if (isupper(str[i]))
            {
                if ((str[i] + (shift(key[k])) % K) > 90)
                {
                    codeStr[i] = (str[i] + (shift(key[k])) % K) - K;
                }
                else
                {
                    codeStr[i] = (str[i] + (shift(key[k])) % K);
                }
            }
            else 
            {
                codeStr[i] = str[i]; //for non alphabets
                k--;
            }
        }        
        printf("ciphertext: %s\n", codeStr);
    }
}       
int shift(char c) //shift ASCII to int
{
    int x = 0;
    if (islower(c))
    {
        x = c - 97;
    }
    else
    {
        x = c - 65;
    }
    return (x);
}

