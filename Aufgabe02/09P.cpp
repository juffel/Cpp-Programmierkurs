#include <iostream>
#include <fstream>
using namespace std;

void printCharFreqs(int * freq);


int main(int argc, char *argv[])
{
    const char * path = argv[1]; 

    ifstream infile;
    infile.open(path, ifstream::in);
    if (infile.is_open() != true)
    {
        cout << "could not open " << path << endl;
        return -1;
    }

    int charFreq [128] = { 0 }; // all elements 0

    int c = infile.get();
    while(infile.good())
    {
        if(c >= 0 && c <= 127)
            charFreq[c]++;
        c = infile.get();
    }

    infile.close();

    printCharFreqs(charFreq);

    return 0;
}


// functions argument is int array of length 128 with frequency of each char
void printCharFreqs(int * freq)
{
    // get highest frequency of letters
    int max = 0;
    for(int i = 65; i <= 90; i++)
    {
        if(freq[i] > max)
            max = freq[i];
    }
    for(int i = 97; i <= 122; i++)
    {
        if(freq[i] > max)
            max = freq[i];
    }

    // calculate appropriate scale so it fits on 80 char wide terminal
    int scale = 1;
    while(max/scale > 80)
        scale *= 2;

    // print
    for(int i = 65; i <= 90; i++)
    {
        cout << (char) i << ": " << freq[i] << ": \t";
        for(int j = 0; j < freq[i]/scale; j++) { cout << "|"; }
        cout << endl;
    }
    for(int i = 97; i <= 122; i++)
    {
        cout << (char) i << ": " << freq[i] << ": \t";
        for(int j = 0; j < freq[i]/scale; j++) { cout << "|"; }
        cout << endl;
    }
}
