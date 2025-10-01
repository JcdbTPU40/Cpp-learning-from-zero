// 0~9のラッキーナンバーを乱数で制せして表示

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));      // 乱数の種を初期化

    int lucky = rand() % 10; // 0~9の乱数を生成

    cout << "今日のラッキーナンバーは" << lucky << "です。\n";
}