//
//  reverse2.cpp
//  reverseString
//
//  Created by Chenxi Gong on 12/6/22.
//

#include <string>
#include <stack>

std::string reverse2(std::string s){
    std::stack<char> tmp;
    std::string outs;
    for (char c: s)
        tmp.push(c);
    while (! tmp.empty()){
        outs += tmp.top();
        tmp.pop();
    }
    return outs;
}
