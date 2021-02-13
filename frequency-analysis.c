#include <stdio.h>
#include <stdlib.h>
// this is a simple program to count how many times a character appears in a phrase 

int main()
{
    char phrase[500];
    printf("Enter a phrase \n");
    gets(phrase);
    //we use gets instead of scanf because gets allows users to input spaces

    for (char ch='a'; ch<='z'; ch++){
        int c = 0;
        for(int i=0; i<strlen(phrase); i++)
        {
            if (ch==phrase[i])
                {
                c++;
            }
        }
        if(c>0){
            printf("%c occurs %d times\n",ch,c);
        }
    }

    return 0;
}
