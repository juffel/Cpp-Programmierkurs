#include <cstdio>

int fibRek(int input);
int _fibRek(int sndlst, int lst, int input);
int fib(int input);

int main()
{
    int input;
    printf("Please input Number for calculating fibonacci: ");
    scanf("%d", &input);
    printf("Calculating fibonacci for %d\n", input);
    int result = fib(input);
    printf("Result is: %d\n", result);
    return 0;
}

int fib(int input)
{
    int a, b, c;
    a = 0;
    b = 1;
    c = 1;
    while(input > 0)
    {
        c = a + b;
        a = b;
        b = c;
        input--;
    }
    return c;
}

int fibRek(int input) 
{
    if (input < 0)
        return -1;
    return _fibRek(0, 1, input);
}

int _fibRek(int sndlst, int lst, int input)
{
    if (input == 0)
        return lst;
    else
    {
        int new_sndlst = lst;
        int new_lst = sndlst + lst;
        _fibRek(new_sndlst, new_lst, --input);
    }
}
