// がちいらない　#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    
    cout << "整数を３つ入力して下さい。\n";
    cout << "整数１:"; cin >> num1;
    cout << "整数２:"; cin >> num2;
    cout << "整数３:"; cin >> num3;

    int sum = num1 + num2 + num3;
    float avg = sum / 3.0f;     // 3.0f にして小数で割り算する

    // 初期値を 0 ではなく num1 にすると３つ整数が同じ場合でも正しく出力
    int max = num1;
    int min = num1;

    /*

    // 短くできるよ！

    if (num1 > num2)
    {
        max = num1;
        if (num1 < num3)
        {
            max = num3;
        }
    } else if (num1 < num2)
    {
        max = num2;
        if(num2 < num3)
        {
            max = num3;
        } 
    }

    if (num1 < num2)
    {
        min = num1;
        if (num1 > num3)
        {
            min = num3;
        }
    } else if (num1 > num2)
    {
        min = num2;
        if(num2 > num3)
        {
            min = num3;
        } 
    }

    */

    if (num2 > max) max = num2;
    if (num3 > max) max = num3;

    if (num2 < min) min = num2;
    if (num3 < min) min = num3;

    // swap
    if (num1 > num2) swap(num1, num2);
    if (num1 > num3) swap(num1, num3);
    if (num2 > num3) swap(num2, num3);

    cout << "sum = " << sum << "\n";
    cout << "avg = " << avg << "\n";
    cout << "max = " << max << "\n";
    cout << "min = " << min << "\n";
    cout << "sorted\n" << num1 << " " << num2 << " " << num3;

    return 0;
}