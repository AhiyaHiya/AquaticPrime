//
//  base64_tester.cpp
//  Base64Tester
//
//  Created by Jaime Rios on 2016-03-20.
//
//

#include <iostream>
#include "base64.hpp"

int main(int argc, const char * argv[])
{
    const auto s = std::string{"ADP GmbH\nAnalyse Design & Programmierung\nGesellschaft mit beschränkter Haftung" };
    
    auto encoded = base64_encode(reinterpret_cast<const unsigned char*>(s.c_str()), s.length());
    auto decoded = base64_decode(encoded);
    
    std::cout << "encoded: " << encoded << std::endl;
    std::cout << "decoded: " << &decoded << std::endl;
    
    return 0;
}
