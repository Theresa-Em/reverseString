//
//  reverse1.cpp
//  reverseString
//
//  Created by Chenxi Gong on 12/6/22.
//


#include <string>

void reverse1(std::string& s){
    unsigned long n = s.length();
    for (int i = 0; i < n/2; i++){
        std::swap(s[i], s[n-i-1]);
    }
}
