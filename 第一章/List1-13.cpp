// 二つの実数値を読み込んで加減剰余した値を表示

#include <iostream>

using namespace std;

int main()
{
    double x;      // 加減剰余する値
    double y;      // 加減剰余する値

    cout << "xの値:";
    cin >> x;                             // キーボードから読み込み

    cout << "yの値:";
    cin >> y;                             // キーボードから読み込み

    cout << "x + y は" << x + y << "です。\n";
    cout << "x - y は" << x - y << "です。\n";
    cout << "x * y は" << x * y << "です。\n";
    cout << "x / y は" << x / y << "です。\n";
}