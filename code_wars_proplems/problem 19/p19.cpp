#include <iostream >
using namespace std;
string to_alternating_case(string str)
{
    string updated ;
    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) >= 65 && int(str[i] <= 90))
        {
            updated += char(int(str[i] + 32));
        }
        else
        {
            updated  += char(int(str[i] - 32));
        }
    }
    cout << updated  ;
    return str;
}
int main()
{
    to_alternating_case("AhMEdK  haledEW");
}