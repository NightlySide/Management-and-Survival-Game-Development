#include <iostream>
#include "Character.h"

using namespace std;

int main(int argc, char *argv[])
{
	Character perso;

	cout<<perso.statut.health<<endl;
	perso.setHealth(500);
	cout<<perso.statut.health;
	cout << "Je m'appelle : " << perso.getName();
	return 0;
}
