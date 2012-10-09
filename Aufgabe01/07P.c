#include <cstdio>

int main()
{
    char input[80];
    printf("Greetings! You entered a universe where you have to look at everything from a quite different angle. Is there something I can do for you?\n> ");
    scanf("%s", input);

    // laenge der eingabe herausfinden
    int length = 0;
    while(input[length] != '\0')
    {
        ++length;
    }
    printf("You entered a word whose lenght is %i\n", length);
    printf("Now your word is being mirrored in order to be more alike one of this world's words.");

    char buf;
    for(int i = 0; i < length/2; i++)
    {
        buf = input[i];
        input[i] = input[length-i-1];
        input[length-i-1] = buf;
        printf("%s\n", input);
    }
    printf("Thre result of the transformation is: << %s >>\n", input);

    return 0;
}
