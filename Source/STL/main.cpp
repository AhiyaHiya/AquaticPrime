//
//  main.cpp
//  APSTLTester
//
//  Created by Jaime Rios on 2016-03-20.
//
//

#include <iostream>
#include <cassert>
#include <vector>

#if defined (__APPLE__)
#include <unistd.h>
#endif

#include "AquaticPrime.h"

using Key = std::string;
using Value = std::string;

int main(int argc, const char * argv[])
{
    std::cout << "AquaticPrime STL tester starting\n";
 
    // All functions called
    const auto key = std::string{""};
    const auto setKeyResult = APSetKey(key);
    assert(setKeyResult == true && "Failure detected while attempting to set key");
    
    const auto data = std::map<Key, Value>{};
    auto result = APCreateDictionaryForLicenseData(data);
    assert(result.empty() && "This function should have returned an empty dictionary");
    
    auto currentPath = std::vector<char>(1024);
    auto currentWorkingDir = getcwd(currentPath.data(), currentPath.size());
    
    auto pathToLicenseFile = std::string{currentWorkingDir};
    pathToLicenseFile += "/sample_licenses/valid_example_license_file.xml";
    auto licenseFileDict = APCreateDictionaryForLicenseFile(pathToLicenseFile);
    
    const auto licenseDataIsValid = APVerifyLicenseData(licenseFileDict); (void)licenseDataIsValid;
    
    const auto licenseFileIsValid = APVerifyLicenseFile(pathToLicenseFile); (void)licenseFileIsValid;
    
    auto hashString = APHash();
    
    // Next two?
    
    
    std::cout << "AquaticPrime STL tester shutting down\n";
    return 0;
}
