//
//  base64.hpp
//  APSTLTester
//
//  Created by Jaime Rios on 2016-03-20.
//
//  Original code from:
//  http://stackoverflow.com/questions/180947/base64-decode-snippet-in-c
//  http://www.adp-gmbh.ch/cpp/common/base64.html
//

#ifndef _BASE64_H_
#define _BASE64_H_

#include <vector>
#include <string>
typedef unsigned char BYTE;

std::string base64_encode(BYTE const* buf, size_t bufLen);
std::vector<BYTE> base64_decode(std::string const&);

#endif