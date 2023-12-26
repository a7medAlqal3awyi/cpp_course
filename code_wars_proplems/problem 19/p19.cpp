//https://www.codewars.com/kata/56efc695740d30f963000557/train/cpp
#include <iostream>
using namespace std;

string to_alternating_case(const string& str)
{
  string newStr;
  for (int i = 0; i < str.length(); i++) 
  {
    if (isupper(str[i])) 
    {
      newStr += tolower(str[i]);
    } 
    else if (islower(str[i]))
    {
      newStr += toupper(str[i]);
    }
    else 
    {
      newStr += str[i];
    }
  }
	return newStr;
}