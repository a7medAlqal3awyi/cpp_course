#include <string>
using namespace std;
string rps(string p1, string p2)
{
    if (p1 == p2)
        return "Draw!";
    if (p1[0] == 's' && p2[0] == 'p' ||
        p1[0] == 'r' && p2[0] == 's' ||
        p1[0] == 'p' && p2[0] == 'r')
        return "Player 1 won!";
    return "Player 2 won!";
}