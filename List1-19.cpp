// 名前を読み込んで挨拶する（スペースも読み込む）

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "お名前は：";
    getline(cin, name); // 名前を読み込む(スペースも含む)

    cout << "こんにちは、" << name << "さん。\n"; // 挨拶を表示
}