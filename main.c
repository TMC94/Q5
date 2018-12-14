#include <stdio.h>
#include <stdlib.h>

int main(){
    char word[29];
    int i, q = 0;

     printf("Enter a word: ");
    scanf("%s", word);

    for(i = 1; word[i] != '\0'; i++)

        if(word[i-1] == word[i])
        {
            q > 0;
            q++;

        while(1)
        {
            if(q <0)
                q++;
            else
                break;
        }
            printf("%c is not an isogram\n", word[i]);

        }

    if(q == 0)
            printf("%s is an isogram");

    return 0;
}
