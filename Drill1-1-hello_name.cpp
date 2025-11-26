#include <stdio.h>
#include <string>
#include <iostream>

int main(){

    std::string lastName;
    std::string firstName;

    // 入力
    std::cout << "苗字と名前をスペースで区切って入力してください。(Kogei Taro):";
    std::cin >> lastName >> firstName;

    /*
    std::cout << "苗字を入力してください：";
    std::cin >> lastName;

    std::cout << "名前を入力してください：";
    std::cin >> firstName;
    */

    // 出力
    std::cout << "Hello! " << lastName << " " << firstName << ". Nice to meet you." << std::endl;

    std::cout << "Hello! Your name is " << firstName << " " << lastName << "!" << std::endl;

    // 名前の長さ
    size_t nameLength = lastName.length() + firstName.length() + 1;

    std::cout << "Your full name has " << nameLength << " characeters!" << std::endl;

    return 0;
}
