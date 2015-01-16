#include <iostream>
#include "Animal.h"

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
	return 0;
}
