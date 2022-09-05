#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]) 
{
    if(argc != 2)//argc must be equal to 2
    {
        puts("Usage: ./caesar key");
        return 1;
    }

    string key = argv[1];// assingning char of argv[1] to key
    int count = 0;

    for(int i = 0; i<26; i++)
    {
        //if the entered character of key is digit
        if(isdigit(key[i]) || !isalpha(key[i]))
        {
            puts("Key must only contain alphabetic character.");
            return 1;
        }
        
        for(int j = 0; j<26; j++)
        {
            //counting the number of alphabets and repeated alphabet
            if(key[i] == key[j]){
                count++;
            }
        }
    }

    //if there is any repeated alphabet count will excede 26
    if(count > 26)
    {
        puts("Key must not contain repeated character");
        return 1;
    }

    //if the length of key is not equal to 26
    if(strlen(key) != 26)
    {
        puts("Key must contain 26 characters.");
        return 1;
    }

    string p = get_string("Plaintext: ");//prompt user for plaintext
    int c[strlen(p)];
    printf("Ciphertext: ");

    for(int k = 0; k < strlen(p); k++)
    {
        if(isupper(p[k]))//if the plaintext letter is of uppercase
        {
            c[k] = p[k] - 'A';//set the ascii order to alphabetical order

            if(isupper(key[c[k]]))
            {
                printf("%c", key[c[k]]);
            }
            if(islower(key[c[k]]))
            {
                printf("%c", key[c[k]] - 'a' + 'A');
            }
        }
        else if(islower(p[k]))//if the plaintext letter is of lowercase
        {
            c[k] = p[k] - 'a';//set the ascii order to alphabetical order

            if(islower(key[c[k]]))
            {
                printf("%c", key[c[k]]);
            }
            if(isupper(key[c[k]]))
            {
                printf("%c", key[c[k]] - 'A' + 'a');
            }
        }
        else{
            printf("%c", p[k]);//if there is any char other than alphabet, print it as it is
        }

    }
    puts("");
}