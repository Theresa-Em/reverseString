//
//  reverse3.cpp
//  reverseString
//
//  Created by Chenxi Gong on 12/6/22.
//

#include <string>

void reverse3(std::string& s, int r, int l){
    if (r <= l)
        {return;}
    std::swap(s[l], s[r]);
    reverse3(s, r-1, l+1);
}
