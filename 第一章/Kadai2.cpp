// C++20で導入されたstd::formatを利用したソースがある。実行結果のように出力されるよう下線部を埋めなさい。
/*
123 45
 45.7
 1.732
*/

#include <iostream>
#include <string>
#include <format>

using namespace std;

int main()
{
    int x = 123, y = 45;
    double z = 45.6789;
    double rt3 = 1.7320508;

    // cout << format("{:3d} {:3d}", x, y) << '\n'; // x,yを3桁幅
    // cout << format("{:3.1f}", z) << '\n';        // zを3桁幅、小数部1桁幅

    // string str = format("{:2.3f}", rt3); // rt3を2桁幅、小数部3桁幅
    // cout << str << '\n';
}