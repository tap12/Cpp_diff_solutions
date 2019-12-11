#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

string auto_algorithm_reverse(string pomoc)
{
    reverse(pomoc.begin(), pomoc.end());
    return pomoc;
}

string manual_reverse(string pomoc)
{
    size_t size = pomoc.size();
    string nowy;
    for (size_t i = 0; i < size; ++i)
    {
        nowy += pomoc[size - i - 1];
    }
    return nowy;
}

int main()
{
    string TEST = "Sample String";

    string OUTPUT1;
    string OUTPUT2;

    OUTPUT1 = auto_algorithm_reverse(TEST);
    OUTPUT2 = manual_reverse(TEST);

    cout << TEST << "   myReversed string is shown below 2 times:";
    cout << "\n\nFirst method:   " << OUTPUT1;
    cout << "\n\nSecond method:  "
         << OUTPUT2;

    // getch();
};