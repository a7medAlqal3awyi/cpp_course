#include <iostream >
using namespace std;
#include <string>

std::string repeat_str(size_t n, const std::string &t)
{
    std::string fn = "";

    for (int i = 0; i < n; i++)
    {
        fn += t;
        cout << t << "\n";
    }
    return fn;
}

int main()
{
    repeat_str(3, "ahmed");
}