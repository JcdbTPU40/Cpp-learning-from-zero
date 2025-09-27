// 説明用にラベル付きで出力するバージョン
#include <iostream>

using namespace std;

int main()
{
    int x = 3;

    cout << "start x = " << x << "\n";

    while (x-- > 0) // 後置デクリメント: 比較のあとで減らす
        cout << x;
    cout << "\n";

    cout << "after first loop x = " << x << "\n";
    x += 5;

    cout << "x after +5 = " << x << "\n";

    while (--x > 0) // 前置デクリメント: 減らしたあとで比較
        cout << x;
    cout << "\n";

    cout << "after second loop x = " << x << "\n";
    return 0;
}
