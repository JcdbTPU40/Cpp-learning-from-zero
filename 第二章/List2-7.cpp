// 読み込んだ整数値の桁数（ゼロ・１桁・２桁以上）を判定

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "整数値：";
    cin >> n;

    if(n == 0){
        cout << "その値はゼロです。\n";
    } else  if (n >= -9 && n <= 9){
        cout << "その値は１桁です。\n";
    } else {
        cout << "その値は２桁以上です。\n";
    }
}