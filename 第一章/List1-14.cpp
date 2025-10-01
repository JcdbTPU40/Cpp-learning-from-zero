// 演習の長さと円の面積を求める（その１：円周率を浮動小数点リテラルで表す）

#include <iostream>

using namespace std;

int main()
{
    double r;      // 半径

    cout << "半径：";
    cin >> r;

    cout << "長さは" << 2 * 3.14 * r << "です。\n";
    cout << "面積は" << 3.14 * r * r << "です。\n";
}