#include <iostream>
using namespace std;

struct Best3
{
    unsigned int maxs[3];
    int pCount;
    static int globalPushCount;
    Best3()
    {
        fill_n(maxs, 3, 0);
        pCount = 0;
    }

    ~Best3()
    {
        globalPushCount -= pCount;
    }
    
    void push(unsigned int nr)
    {
        pCount++;
        globalPushCount++;
        int c = 2;
        // einfügeposition suchen
        while(maxs[c] > nr && c >= 0)
            c--;

        // platz machen
        for(int i = 0; i < c; i++)
            maxs[i] = maxs[i+1];
        
        // nr einfügen
        if(c < 0)
            return;
        maxs[c] = nr;
    }
    
    void print()
    {
        if (pCount < 1)
        {
            cout << "No pushed values so far..." << endl;
            return;
        }
        else if (pCount < 2)
        {
            cout << maxs[2] << endl;
            return;
        }
        else if (pCount < 3)
        {
            cout << maxs[1] << "|" << maxs[2] << endl;
            return;
        }
        cout << maxs[0] << "|" << maxs[1] << "|" << maxs[2] << endl;
    }

    int count()
    {
        return pCount;
    }
};

int Best3::globalPushCount = 0;

void testTod();

int main()
{
    Best3 bessy;
    bessy.print();
    bessy.push(3);
    bessy.print();
    bessy.push(4);
    bessy.print();
    bessy.push(10);
    bessy.print();
    bessy.push(20);
    bessy.print();
    cout << "pCount: " << bessy.count() << endl;

    Best3 alejandro;
    alejandro.push(1);
    alejandro.push(9);
    alejandro.push(3);
    alejandro.push(1);
    alejandro.push(6);

    cout << "globalCount: " << Best3::globalPushCount << endl;
    testTod();
    cout << "globalCount: " << Best3::globalPushCount << endl;
}

void testTod()
{
    Best3 testy;
    testy.push(0);
    testy.push(0);
    testy.push(0);
    testy.push(0);
    testy.push(0);
    testy.push(0);
    cout << "testTod(): " << Best3::globalPushCount << endl;
}
