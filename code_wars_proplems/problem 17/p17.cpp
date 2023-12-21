#include <string>
#include <iostream>
using namespace std;

unsigned int strCount(string word, char letter)
{
    int counter = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            counter += word[i];
        }
    }
    cout << "counter = " << counter / char(letter);
    return counter / char(letter);
}
int main()
{
    strCount("AAAhhhhmed", 'h');
}