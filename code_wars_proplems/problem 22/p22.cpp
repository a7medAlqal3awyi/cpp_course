
// https://www.codewars.com/kata/56cd44e1aa4ac7879200010b
#include <string>
#include <cctype>

bool is_uppercase(const std::string &s)
{
    for (size_t i = 0; i < s.length(); ++i)
        if (std::islower(s[i]))
            return false;
    return true;
}
