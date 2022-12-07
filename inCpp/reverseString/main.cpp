//
//  main.cpp
//  reverseString
//
//  Created by Chenxi Gong on 12/6/22.
//

#include <iostream>
#include <string>

#include "methods.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string str, str1, str2, str3, str4;
    std::cout << "input the first string:" << "\n";
    std::cin >> str;
    //reverse0, using built in function
    std::reverse(str.begin(), str.end());
    std::cout << "output reverse string:" << str << "\n";
    
    std::cout << "input the second string:" << "\n";
    std::cin >> str1;
    reverse1(str1);
    std::cout << "output reverse string:" << str1 << "\n";

    std::cout << "input the third string:" << "\n";
    std::cin >> str2;
    std::cout << reverse2(str2) << "\n";

    std::cout << "input the forth string:" << "\n";
    std::cin >> str3;
    reverse3(str3, int(str3.length())-1, 0);
    std::cout << str3 << "\n";

    std::cout << "input the fifth string:" << "\n";
    std::cin >> str4;
    std::cout << reverse4(str4) << std::endl;

    //std::cout << "Hello, World!\n";
    return 0;
}
