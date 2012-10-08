// Der Taschenrechner soll addieren, subtrahieren, multiplizieren und dividieren können
#include <cstdio>
#include <string.h>
#include <stdlib.h>

int evaluate(int op1, char op, int op2);

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
        // parse the exptression <operand1> <operator> <operand2>
        int op1 = atoi(input);
        scanf("%s", input);
        char op = input[0];
        scanf("%s", input);
        int op2 = atoi(input);

        // evaluate
        int result = evaluate(op1, op, op2);
        printf("%d\n", result);

    }
    while(exit == false);
}

int evaluate(int op1, char op, int op2)
{
    switch(op)
    {
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
        default:
            return -1;
    }
}
