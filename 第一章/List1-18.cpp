// 名前を読み込んで挨拶する

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "お名前は：";
    cin >> name; // 名前を読み込む(スペースで区切られた最初の単語)

    cout << "こんにちは、" << name << "さん。\n"; // 挨拶を表示
}