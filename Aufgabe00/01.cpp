// Der Taschenrechner soll addieren, subtrahieren, multiplizieren und dividieren können
#include <cstdio>
#include <string.h>
#include <stdlib.h>

void parse(char input[]);

int main()
{
    printf("Calculator! What do you wish to calculate?\n");
    printf("(type 'exit' to exit)\n");

    bool exit = false;
    char input[20];
    char exitstring[] = "exit";
    do
    {
        printf("> ");
        scanf("%s", input);
        if(strcmp(input, exitstring) == 0)
        {
            exit = true;
            break;
        }

        printf("parsing....\n");
        parse(input);
    }
    while(exit == false);
}

// Dieser Parser rechnet mit einem String der Form "Zahl1 <op> Zahl2"
void parse(char input[])
{
    char * stkt;
    stkt = strtok(input, " ");
    int nr1 = atoi(stkt); 
    stkt = strtok(NULL, " ");
    char * op = stkt;
    stkt = strtok(NULL, " ");
    int nr2 = atoi(stkt);

    printf("ich habe das gelesen: 1-%d op-%s 2-%d\n", nr1, op, nr2);
}
