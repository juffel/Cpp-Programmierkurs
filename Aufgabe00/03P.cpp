#include <cstdio>

int fib(int input);
int _fib(int sndlst, int lst, int input);

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
    if (input < 0)
        return -1;
    return _fib(0, 1, input);
}

int _fib(int sndlst, int lst, int input)
{
    if (input == 0)
        return lst;
    else
    {
        int new_sndlst = lst;
        int new_lst = sndlst + lst;
        _fib(new_sndlst, new_lst, --input);
    }
}
