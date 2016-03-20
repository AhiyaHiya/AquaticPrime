//
//  main.cpp
//  APSTLTester
//
//  Created by Jaime Rios on 2016-03-20.
//
//

#include <iostream>
#include "AquaticPrime.h"

int main(int argc, const char * argv[])
{
    std::cout << "AquaticPrime STL tester starting\n";
 
    auto key = std::string{""};
    APSetKey(key);
    
    auto pathToLicenseFile = std::string{""};
    const auto licenseIsValid = APVerifyLicenseFile(pathToLicenseFile);
    
    std::cout << "AquaticPrime STL tester shutting down\n";
    return 0;
}
