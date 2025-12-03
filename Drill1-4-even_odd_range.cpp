#include <iostream>

using namespace std;

int main(){

    int num = 0;

    int evenCount = 0;
    int oddCount = 0;
    int rangeIn = 0;
    int rangeOut = 0;

    bool firstInput = true;
    int minVal, maxVal;

    int count = 0;
    int sum = 0;

    while (true) {

    cout << "整数を入力してください(0で終了)：";
    cin >> num;

    count++;
    sum += num;

    if (num == 0) break;

    if (firstInput)
    {
        minVal = num;
        maxVal = num;
        firstInput = false;
    }

    if (num < minVal) minVal = num;
    else if (num > maxVal) maxVal = num; 

    if (num % 2 != 0) oddCount++;
    else evenCount++;

    if (num >= 0 && num <= 100) rangeIn++;
    else rangeOut++;
    }

    double avg = (double)sum / count;
    double percent = (rangeIn * 100) / count;


    cout << "奇数：" << oddCount << endl;
    cout << "偶数：" << evenCount << endl;
    cout << "範囲内：" << rangeIn << endl;
    cout << "範囲外：" << rangeOut << endl;
    cout << "最小値：" << minVal << endl;
    cout << "最大値：" << maxVal << endl;
    cout << "平均値：" << avg << endl;
    cout << "範囲内割合：" << percent << endl;

/*
    if (num == 0) cout << "\nzero";
    else if (num % 2 != 0) cout << "\nodd"; // num % 2 == 1 だとマイナス入力だとバグる
    else cout << "\neven";

    if (num >= 0 && num <= 100) cout << " in range";
    else cout << " out of range"; 
*/
    return 0;
}