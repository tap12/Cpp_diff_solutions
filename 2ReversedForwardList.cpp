#include <iostream>
#include <conio.h>
#include <string>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> Lista_Cw_2 = { 34, 77, 16, 2 };

	forward_list<int> Lista_Cw_2_reversed;

	for (auto it = Lista_Cw_2.begin(); it != Lista_Cw_2.end(); ++it)
	{
		Lista_Cw_2_reversed.push_front(*it);
	}

	std::cout << "myReversed list contains:";
	for (auto it = Lista_Cw_2_reversed.begin(); it != Lista_Cw_2_reversed.end(); ++it)
		std::cout << ' ' << *it;
        
    getch();
};