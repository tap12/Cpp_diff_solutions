#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

int main()
{
    int liczba = 1;
    // int podz_pzez_3, podz_pzez_5, podz_pzez_15;

    for (int i = 0; i < 100; i++)
    {
        cout << liczba << std::endl;

        if ((liczba % 3) == 0)
        {
            cout << "Fizz";
        }

        if ((liczba % 5) == 0)
        {
            cout << "Buzz";
        }

        if ((liczba % 15) == 0)
        {
            cout << "FizzBuzz";
        }

        liczba++;
    }
};