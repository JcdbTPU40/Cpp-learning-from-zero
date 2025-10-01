// 円周の長さと円の面積を求める（その２：円周率を定値オブジェクトで表す）

#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.1416;  // 円周率
    double r;      // 半径

    cout << "半径：";
    cin >> r;

    cout << "長さは" << 2 * PI * r << "です。\n";
    cout << "面積は" << PI * r * r << "です。\n";
}