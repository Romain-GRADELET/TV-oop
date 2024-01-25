#include <iostream>
#include "Television.cpp"

using namespace std;

int main()
{
    Television tv1("Samsung");
    tv1.Allumer();
    tv1.SetVolume(80);

    Television* tv2 = new Television("Phillips");
    tv2->SetVolume(80);

    cout << tv2->GetVolume();
}

