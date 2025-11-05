// 読み込んだ個数だけ＋とを－交互に表示

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "何個表示しますか：";
    cin >> n;

    if (n > 0){
        int i = 0;
        while (i < n / 2){
            cout << "+-";
            i++;
        }
        if(n % 2) cout << '+';
        cout << '\n';
    }
}

/*
int i = 1;
while (i <= n){
    if(i % 2)
        cout << '+';
    else
        cout << '-';
    i++;
}
*/