#ifndef INPUT_OUTPUT_H
#define INPUT_OUTPUT_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <sstream>

std::string askForStringInput(std::string message);
int askForIntInput(std::string message);
float askForFloatInput(std::string message);
void printOut(std::string message);

// Provided helper functions -- do not modify
inline int strToInt(std::string s) { return atoi(s.c_str()); }
inline float strToFloat(std::string s) { return atof(s.c_str()); }
inline std::string intToStr(int n) { char buf[32]; sprintf(buf, "%d", n); return std::string(buf); }
inline std::string floatToStr(float f) { char buf[32]; sprintf(buf, "%g", f); return std::string(buf); }

#endif /*INPUT_OUTPUT_H*/
