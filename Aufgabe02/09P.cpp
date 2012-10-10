#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
    const char * path = argv[1];
    FILE * file;
    file = fopen(path, "r");
    if(file == NULL)
    {
        cout << "Konnte " << path << " nicht öffnen" << endl;
        return -1;
    } else
    {
        cout << path << " erfolgreich geöffnet." << endl;
    }
    return 0;
}
