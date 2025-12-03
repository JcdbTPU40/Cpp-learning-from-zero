#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    // int dice = 100;
    srand(time(0));

    int n = 0;


    // int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
    int count[7] = {0};

    // for (int n = 1; n <= dice; n++;
    while (count[6] < 50)
    {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;

        n++;

        count[dice1]++;
        count[dice2]++;

/*
        if (dice1 == 1) count1++;
        else if (dice1 == 2) count2++;
        else if (dice1 == 3) count3++;
        else if (dice1 == 4) count4++;
        else if (dice1 == 5) count5++;
        else if (dice1 == 6) count6++;

        if (dice2 == 1) count1++;
        else if (dice2 == 2) count2++;
        else if (dice2 == 3) count3++;
        else if (dice2 == 4) count4++;
        else if (dice2 == 5) count5++;
        else if (dice2 == 6) count6++;
*/

        int sum = dice1 + dice2;
        
        cout << n << ": " << dice1 << " + " << dice2 << " = " << sum << endl;
    }

    for (int i = 1; i <= 6; i++)
    {
        cout << i << "が" << count[i] << "回出ました。" << endl;
    }

/*
    cout << "1が" << count1 << "回出ました。" << endl;
    cout << "2が" << count2 << "回出ました。" << endl;
    cout << "3が" << count3 << "回出ました。" << endl;
    cout << "4が" << count4 << "回出ました。" << endl;
    cout << "5が" << count5 << "回出ました。" << endl;
    cout << "6が" << count6 << "回出ました。" << endl;
*/

    return 0;
}