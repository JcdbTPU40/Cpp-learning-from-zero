// 空白類をはさむ文字列リテラルが連結されることの確認

#include <iostream>

using namespace std;

int main()
{
    cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz"
            "0123456789"                                // 空白類をはさんで並んだ
            "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~\n";     // 文字列リテラルは連結される
}