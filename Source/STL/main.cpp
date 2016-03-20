//
//  main.cpp
//  APSTLTester
//
//  Created by Jaime Rios on 2016-03-20.
//
//

#include <iostream>
#include "AquaticPrime.h"

using Key = std::string;
using Value = std::string;

int main(int argc, const char * argv[])
{
    std::cout << "AquaticPrime STL tester starting\n";
 
    // All functions called
    auto key = std::string{""};
    APSetKey(key);
    
    auto data = std::map<Key, Value>{};
    auto result = APCreateDictionaryForLicenseData(data);
    
    auto pathToLicenseFile = std::string{""};
    auto licenseFileDict = APCreateDictionaryForLicenseFile(pathToLicenseFile);
    
    const auto licenseDataIsValid = APVerifyLicenseData(data); (void)licenseDataIsValid;
    const auto licenseFileIsValid = APVerifyLicenseFile(pathToLicenseFile); (void)licenseFileIsValid;
    
    auto hashString = APHash();
    
    // Next two?
    
    
    std::cout << "AquaticPrime STL tester shutting down\n";
    return 0;
}
