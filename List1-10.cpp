// 二つの整数を読み込んで加減剰余した値を表示

#include <iostream>

using namespace std;

int main ()
{
    int x;      // 加減剰余する値
    int y;      // 加減剰余する値

    cout << "xとyを加減剰余します。\n";

    cout << "xの値を入力してください: ";    // xの値を入力 
    cin >> x;                             // キーボードから読み込み

    cout << "yの値を入力してください: ";    // yの値を入力          
    cin >> y;                             // キーボードから読み込み                                

    cout << "x + y は" << x + y << "です。\n";
    cout << "x - y は" << x - y << "です。\n";
    cout << "x * y は" << x * y << "です。\n";
    cout << "x / y は" << x / y << "です。\n";
    cout << "x % y は" << x % y << "です。\n";
}