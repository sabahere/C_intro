#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2){
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //converting string from argv to int and storing in variable key
    int key = atoi(argv[1]);

    //if user enter any non-numeric argument along with int, it should print error and exit program
    for(int i = 0; i<strlen(argv[1]); i++){
        if(!isdigit(argv[1][i])){
            printf("Usage: ./caesar key\n");
            return 1; 
        }
    }

    //prompt user for plaintext
    string p = get_string("Plaintext: ");

    //converting plaintext into ciphertext
    printf("Ciphertext: ");
    char c[strlen(p)];
    for(int i = 0; i<strlen(p); i++)
    {
        if(isupper(p[i]))
        {
            c[i] = (p[i] - 'A' + key) % 26 + 'A';//shifting capital letter with key
        }
        else if(islower(p[i]))
        {
            c[i] = (p[i] - 'a' + key) % 26 + 'a';//shifting small letter with key
        }
        else
        {
            c[i] = p[i];
        }
        printf("%c", c[i]);//printing cipertext
    }
    puts("");
}