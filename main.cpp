#include <iostream>
#include "Character.h"

using namespace std;

int main(int argc, char *argv[])
{
	Character perso;

	cout<<perso.statut.health<<endl;
	perso.setHealth(500);
	cout<<perso.statut.health;
	cout<<endl;
	cout << "Je m'appelle : " << perso.getName()<<endl;
	cout<<endl;
	perso.changeName("Jean-Charles");
	cout << "Je m'appelle maintenant : " << perso.getName();
	cout<<endl;
	cout<<endl;
	return 0;
}
