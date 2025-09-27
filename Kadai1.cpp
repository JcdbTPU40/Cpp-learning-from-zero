// 以下のプログラムの実行結果を書きなさい

#include <iostream>

using namespace std;

int main()
{
    int x = 3;

    while (x-- > 0)　   // xをデクリメントしながら0より大きい間繰り返す
        cout << x;      // xの値を表示
    cout << "\n";

    cout << x << "\n";  // ループ終了後のxの値を表示
    x += 5;

    while (--x > 0) // xをデクリメントしながら0より大きい間繰り返す
        cout << x; // xの値を表示
    cout << "\n";

    cout << x << "\n"; // ループ終了後のxの値を表示
}