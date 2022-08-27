#include <cs50.h>
#include <stdio.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentence(string text);

int main(void)
{
    float letters, words, sentence;

    string text = get_string("Text: ");

    letters = count_letters(text);
    words = count_words(text);
    sentence = count_sentence(text);

    //Coleman-Liau index
    float L = letters/words*100;//avg number of letters per 100 words
    float S = sentence/words*100;//avg number of sentences per 100 words
    float index = (0.0588*L) - (0.296*S) - 15.8;
    if(index < 1){
        printf("Before Grade 1\n");//if grade is less than 1
    }
    else if(index > 16){
        printf("Grade 16+\n");//if grade is greater than 16
    }
    else{
        printf("Grade %.0f\n",index);//grade level computed by Coleman's formula, rounded to the nearest integer.
    }
}

//fucntion for counting integers
int count_letters(string text)
{
    int total_letters = 0; //intialising a variable to store count value
    int i = 0;

    while(text[i] != '\0')//loop will go through each character unless it found the null character
    {
        if(text[i] >= 'A' && text[i] <= 'Z')//adding capital letters
        {
            total_letters++;
        }
        if(text[i] >= 'a' && text[i] <= 'z')//adding small letters
        {
            total_letters++;
        }
        i++;
    }

    return total_letters;
}

//function for counting words
int count_words(string text){

    int total_words = 1;
    int i = 0;

    while(text[i] != '\0')
    {
        if(text[i] == 32)//counting number of spaces
        {
        total_words++;
        }
        i++;
    }
    return total_words;
}

//fucntion for counting sentence
int count_sentence(string text)
{
    int total_sentence = 0;
    int i = 0;

    while(text[i] != '\0')
    {
        if(text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            total_sentence++;//counting number of sentences
        }
        i++;
    }
    return total_sentence;
}
