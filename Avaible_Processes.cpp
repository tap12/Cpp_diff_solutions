#include <windows.h>
#include <tlhelp32.h>
#include <iostream>

using namespace std;

int main()
{
    PROCESSENTRY32 proc32;  //deklaracja struktury
    HANDLE hSnapshot;       //uchwyt na CreateToolhelp32Snapshot

    hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

    //ustawiamy rozmiar struktury
    proc32.dwSize = sizeof(PROCESSENTRY32);

    //pierwsze wywolanie Process32First
    if(Process32First(hSnapshot, &proc32))
    {
        //wyświetlamy Process32First, czyli napis "[System Process]"
        cout << proc32.szExeFile << endl;

        //glowna petla wyświetlająca procesy przez Process32Next
        while(Process32Next(hSnapshot, &proc32))
        {
            cout << proc32.szExeFile << endl;
        }
    }

    CloseHandle(hSnapshot);

    system ("pause >nul");
    return 0;
}