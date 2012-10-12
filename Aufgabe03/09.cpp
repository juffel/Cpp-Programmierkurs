#include <iostream>
using namespace std;

enum Color {Red, Blue, Green, Yellow};

struct Candy
{
    enum Color col;
    bool containsWheat;
    int percentSugar;
    bool yummy;
    bool fancy;
    bool sticky[2];
    int something[2];
};

int main()
{
    Candy c;
    cout << "Sizeof one candy: " << sizeof(c) << endl;
}
