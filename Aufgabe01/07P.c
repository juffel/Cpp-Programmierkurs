#include <cstdio>

void reverse(char * input);
int lengthOf(char * input);
void decapitalize(char * input);
bool isPalindrome(char * input);


int main()
{
    char input[80];
    printf("Greetings! You entered a universe where you have to look at everything from a quite different angle. Is there something I can do for you?\n> ");
    scanf("%s", input);

    reverse(input);
    decapitalize(input);
    printf("Thre result of the transformation is: << %s >>\n", input);
    if(isPalindrome(input))
        printf("Oh, by the way I recognized that your \"word\" is one of those few special ones, our both worlds share!\n");
    return 0;
}


void reverse(char * input)
{
    printf("You entered a word whose lenght is %i\n", lengthOf(input));
    printf("Now your word is being mirrored in order to be more alike one of this world's words.");

    char buf;
    for(int i = 0; i < lengthOf(input)/2; i++)
    {
        buf = input[i];
        input[i] = input[lengthOf(input)-i-1];
        input[lengthOf(input)-i-1] = buf;
//        printf("%s\n", input);
    }
}

void decapitalize(char * input)
{
    for(int i = 0; i < lengthOf(input); i++)
    {
        if(input[i] >= 65 && input[i] <= 90)
            input[i] += 32;
    }
}

int lengthOf(char * input)
{
    int length = 0;
    while(input[length] != '\0')
    {
        ++length;
    }
    return length;
}

bool isPalindrome(char * input)
{
    bool result = true;
    for(int i = 0; i < lengthOf(input)/2; i++)
    {
        if(input[i] != input[lengthOf(input)-i-1])
            result = false;
    }
    return result;
}
