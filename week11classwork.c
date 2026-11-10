
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[] = "My day begins early, and my dog waits by the door. I pack my bag, grab my coat, and walk with my friend Mia to the bus stop. She laughs at my jokes, but MY teacher does not! Oh my! Yesterday my class read a mystery about an army of ants, and I told everyone about my family. Is my story true? Ask my grandmother, my uncle, or my neighbor. I made this lunch myself, and my sandwich is the best one in school. My secret? Smile, keep my promise, and share my snacks. Oh my, tomorrow my brother comes too!";

    char *word;
    int text_length;
    int my_count = 0;
    int i;

    text_length = strlen(text);

    word = strtok(text, " ,.!?;:\n");

    while (word != NULL)
    {
        for (i = 0; word[i] != '\0'; i++)
        {
            word[i] = tolower((unsigned char)word[i]);
        }

        if (strcmp(word, "my") == 0)
        {
            my_count++;
        }

        word = strtok(NULL, " ,.!?;:\n");
    }

    printf("Length: %d\n", text_length);
    printf("Count of 'my': %d\n", my_count);

    return 0;
}
