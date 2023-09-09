#include <stdio.h>
#include <string.h> //strlen function is provided by this header which is used to find out the length of the string.

void search(char* text, char* pat) //Here the searching of the pattern takes place
{
    int N = strlen(text); //length of the searching text / main text
    int M = strlen(pat);  //length of the pattern to be found

    for(int i = 0; i <= N-M; i++)//iterates over the text until N-M
    {
        int j;//counter to check whether the pattern is found or not

        for(j = 0; j < M; j++)//Here the pattern in the text is checked
        {
            if(text[i + j] != pat[j]) //If the pattern is not found then it breaks this for loop and i is incremented
            {
                break;
            }
        }

        if(j == M) //When the pattern is found
        {
            printf("Pattern found at index %i\n", i);
        }
    }
}

int main()
{
    char text[] = "AABAACAADAABAAABAA"; //main text from which the pattern have to be found
    char pat[] = "AABA"; //Pattern to be found from the main text

    printf("%s\n\n", text); //Prints the text
    search(text, pat); //Search function is called

    return 0;
}

//Time Complexity = O(M* (N-M))