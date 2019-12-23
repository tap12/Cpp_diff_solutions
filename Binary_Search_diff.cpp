#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int tab[10], searched;

    cout << "Give 10 numbers to the table:";

    for(int i = 0; i < 10; i++)
        cin >> tab[i];

    sort(tab, tab+10); //container must be sorted

    cout << "Give searched number: ";

    cin >> searched;

    if(binary_search(tab, tab+10, searched))
        cout << "Founded! " << searched << endl;
    else
    {
        cout << "Not founded! " << searched << endl;
    }
}