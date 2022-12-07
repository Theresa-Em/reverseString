//
//  reverse4.cpp
//  reverseString
//
//  Created by Chenxi Gong on 12/6/22.
//

#include <string>

std::string reverse4(std::string s){
    int n = s.length();
    std::string rs;
    for (int i = n-1; i >= 0; i--){
        rs.push_back(s[i]);
    }
    return rs;
}


