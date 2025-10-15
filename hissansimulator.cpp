#include <iostream>
#include <string>
#include <format>

using namespace std;

int main() {

    const int WIDTH = 51;
    const int MAX_DIGITS = 50;

    int digitsArr[MAX_DIGITS] = {};
    cout << "配列の要素数(確認): "<< (sizeof(digitsArr) / sizeof(digitsArr[0])) << "\n\n";

    string total = "0";
    bool totalNeg = false;

    while (true) {
        cout << "入力> ";
        string input;
        if (!(cin >> input)) {
            return 0;
        }

        string check = input;
        if (!check.empty() && (check[0] == '+' || check[0] == '-')) {
            check.erase(0, 1);
        }
        while (check.size() > 1 && check[0] == '0') {
            check.erase(0, 1);
        }
        if (check.empty()) {
            check = "0";
        }
        if (check == "0") {
            cout << "今までの合計は" << (totalNeg ? "-" : "") << total << "でした。終了します。\n";
            break;
        }

        string digits = input;
        bool inputNeg = false;
        if (!digits.empty() && (digits[0] == '+' || digits[0] == '-')) {
            inputNeg = (digits[0] == '-');
            digits.erase(0, 1);
        }

        while (digits.size() > 1 && digits[0] == '0') {
            digits.erase(0, 1);
        }
        if (digits.empty()) {
            digits = "0";
        }
        if (digits == "0") {
            inputNeg = false;
        }

        if (static_cast<int>(digits.size()) > MAX_DIGITS) {
            cout << MAX_DIGITS << "桁以内の数値を入力してください。もう一度入力をお願いします。\n";
            continue;
        }
        int length = static_cast<int>(digits.size());

        for (int i = 0; i < MAX_DIGITS; ++i) {
            digitsArr[i] = 0;
        }
        for (int i = 0; i < length; ++i) {
            digitsArr[i] = digits[length - 1 - i] - '0';
        }

        string beforeTotal = total;
        bool beforeNeg = totalNeg;

        string absTotal = total;
        string absInput = digits;

        while (absTotal.size() > 1 && absTotal[0] == '0') {
            absTotal.erase(0, 1);
        }
        if (absTotal.empty()) {
            absTotal = "0";
        }
        while (absInput.size() > 1 && absInput[0] == '0') {
            absInput.erase(0, 1);
        }
        if (absInput.empty()) {
            absInput = "0";
        }

        string result = "0";
        bool resultNeg = false;

        bool sameSign = (totalNeg == inputNeg);
        if (sameSign) {
            string a = absTotal;
            string b = absInput;
            if (a.size() < b.size()) {
                a.insert(0, b.size() - a.size(), '0');
            }
            if (b.size() < a.size()) {
                b.insert(0, a.size() - b.size(), '0');
            }

            result = string(a.size(), '0');
            int carry = 0;
            for (int i = static_cast<int>(a.size()) - 1; i >= 0; --i) {
                int sum = (a[i] - '0') + (b[i] - '0') + carry;
                result[i] = static_cast<char>('0' + (sum % 10));
                carry = sum / 10;
            }
            if (carry > 0) {
                result.insert(result.begin(), static_cast<char>('0' + carry));
            }

            size_t pos = result.find_first_not_of('0');
            if (pos == string::npos) {
                result = "0";
            } else if (pos > 0) {
                result.erase(0, pos);
            }

            resultNeg = totalNeg;
        } else {
            bool totalLess = false;
            if (absTotal.size() != absInput.size()) {
                totalLess = absTotal.size() < absInput.size();
            } else {
                totalLess = absTotal < absInput;
            }

            if (!totalLess) {
                string a = absTotal;
                string b = absInput;
                if (a.size() < b.size()) {
                    a.insert(0, b.size() - a.size(), '0');
                }
                if (b.size() < a.size()) {
                    b.insert(0, a.size() - b.size(), '0');
                }

                result = string(a.size(), '0');
                int borrow = 0;
                for (int i = static_cast<int>(a.size()) - 1; i >= 0; --i) {
                    int x = (a[i] - '0') - borrow;
                    int y = b[i] - '0';
                    if (x < y) {
                        x += 10;
                        borrow = 1;
                    } else {
                        borrow = 0;
                    }
                    result[i] = static_cast<char>('0' + (x - y));
                }

                size_t pos = result.find_first_not_of('0');
                if (pos == string::npos) {
                    result = "0";
                } else if (pos > 0) {
                    result.erase(0, pos);
                }

                resultNeg = totalNeg;
            } else {
                string a = absInput;
                string b = absTotal;
                if (a.size() < b.size()) {
                    a.insert(0, b.size() - a.size(), '0');
                }
                if (b.size() < a.size()) {
                    b.insert(0, a.size() - b.size(), '0');
                }

                result = string(a.size(), '0');
                int borrow = 0;
                for (int i = static_cast<int>(a.size()) - 1; i >= 0; --i) {
                    int x = (a[i] - '0') - borrow;
                    int y = b[i] - '0';
                    if (x < y) {
                        x += 10;
                        borrow = 1;
                    } else {
                        borrow = 0;
                    }
                    result[i] = static_cast<char>('0' + (x - y));
                }

                size_t pos = result.find_first_not_of('0');
                if (pos == string::npos) {
                    result = "0";
                } else if (pos > 0) {
                    result.erase(0, pos);
                }

                resultNeg = inputNeg;
            }
        }

        if (result == "0") {
            resultNeg = false;
        }

        if (static_cast<int>(result.size()) > MAX_DIGITS + 1) {
            result = result.substr(result.size() - (MAX_DIGITS + 1));
        }

        total = result;
        totalNeg = resultNeg;

        string displayBefore = beforeTotal;
        while (displayBefore.size() > 1 && displayBefore[0] == '0') {
            displayBefore.erase(0, 1);
        }
        if (displayBefore.empty()) {
            displayBefore = "0";
        }
        string showBefore = (beforeNeg ? "-" : "") + displayBefore;
        cout << format("{:>{}}", showBefore, WIDTH) << "\n";

        string showDigits = digits;
        cout << (inputNeg ? '-' : '+')
             << format("{:>{}}", showDigits, WIDTH - 1) << "\n";

        cout << string(WIDTH, '-') << "\n";

        string displayAfter = total;
        while (displayAfter.size() > 1 && displayAfter[0] == '0') {
            displayAfter.erase(0, 1);
        }
        if (displayAfter.empty()) {
            displayAfter = "0";
        }
        string showAfter = (totalNeg ? "-" : "") + displayAfter;
        cout << format("{:>{}}", showAfter, WIDTH) << "\n\n";
    }

    return 0;
}
