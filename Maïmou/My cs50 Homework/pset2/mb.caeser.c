#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, string argv[])
{

if (argc == 2)
{
string s;

int k=atoi(argv[1]);

p=get_string("plaintext: ");

printf("cyphertext: ");
for(int i=0; i<strlen(s); i++)

if(isalpha(s[i]))
{
    if(islower(s[i]))
        {
            printf("%c",(((s[i]- 97)+ k)%26)+ 97);
        }
    if(isupper(s[i]))
        {
            printf("%c",(((s[i]- 65)+ k)%26)+ 65);
        }
}
else
        {
            printf("%c",s[i]);
        }
    printf("\n");
    }
}
