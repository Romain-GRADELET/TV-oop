#pragma once
#include <string>
using namespace std;

class Television
{
private:
	int chaine;
	bool estAllumee;
	string marque;
	int volume;

public:
	void Allumer();
	void Eteindre();
	void SetVolume(int vol);
	void ChangerDeChaine(int c);
	int GetVolume();

	Television(string marque);
};