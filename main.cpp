#include <iostream>
#include <string>
using namespace std;

// String Bits
// Given a string, set result to a new string made of every other char
// starting with the first, so "Hello" yields "Hlo".

// Output
// • for input of "Hello" → "Hlo"
// • for input of "Hi" → "H"
// • for input of "Heeololeo" → "Hello"

string stringBits(const string &str)
{
    string result = "";
    int len = str.size();

    for (int i = 0; i < len; i += 2) // increment by 2
    {
        result += str.substr(i, 1);
    }
    return result;
}

int main()
{

    cout << "Testing stringBits(\"Hello\"): " << stringBits("Hello") << endl;
    cout << "Testing stringBits(\"Hi\"): " << stringBits("Hi") << endl;
    cout << "Testing stringBits(\"Heeololeo\"): " << stringBits("Heeololeo") << endl;
    return 0;
}
