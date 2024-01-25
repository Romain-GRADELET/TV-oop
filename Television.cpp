#include "Television.h"
#include <string>
using namespace std;

// Définition du constructeur
Television::Television(string marque)
{
    this->marque = marque;
    this->estAllumee = false;
}

void Television::Allumer()
{
    this->estAllumee = true;
};

void Television::Eteindre()
{
    this->estAllumee = false;
};

int Television::GetVolume()
{
    return this->volume;
};

void Television::SetVolume(int vol)
{
    this->volume = vol;
};


void Television::ChangerDeChaine(int c)
{
    this->chaine = c;
};



