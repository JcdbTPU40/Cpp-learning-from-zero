#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int dice = 10;
    srand(time(0));

    for (int n = 0; n < dice; n++)
    {
        int diceValue = rand() % 6 + 1;

        cout << diceValue << " ";
    }

    return 0;
}