// 正の整数値を０までカウントダウン（その１）

#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "カウントダウンします。\n";

    do{
        cout << "正の整数値：";
        cin >> x;
    } while (x <= 0);

    while (0 <= x){
        cout << x << "\n";      // xの値を表示
        x--;                    // xの値をデクリメント（値を一つ減らす）
    }
}