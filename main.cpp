#include <iostream>
#include "Animal.h"
#include "Character.h"

using namespace std;

int main(int argc, char *argv[])
{
    Animal gull = Animal("Gull", true, false);
    Animal dog = Animal("Dog", false, false);
    Animal gold_fish = Animal("Gold Fish", false, true);

    Animal animals[3] = {gull, dog, gold_fish};

	Animal test;
	test = gull;

    for (int i = 0; i<sizeof(animals)/sizeof(Animal); i++)
    {
        cout << "+--------------------+" << endl;
        cout << "Test avec animal " << i << endl;
        cout << "Name : " << animals[i].getRace() <<endl;
        cout << "Can fly : " << animals[i].canFly() << endl;
        cout << "Can swim : " << animals[i].canSwim() << endl;
        cout << "+--------------------+" << endl << endl;
    }
<<<<<<< HEAD

    Character perso;
    Item epee = Item("Epee","arme",40);
    perso.getInventory()->addItem(epee);
    cout << "Name: " << perso.getInventory()->getItemById(0).getName() << endl;
    cout << "Damage: " << perso.getInventory()->getItemById(0).getDamage() << endl;
=======
    cout << "End of test" << endl;
>>>>>>> origin/master
	return 0;
}
