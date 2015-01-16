#include <iostream>
#include "Inventory.h"
#include "Character.h"

using namespace std;

int main()
{
    Character david = Character("David", "Human");
    Inventory inv = david.getInventory();
    Item lancePierre = Item("Lance pierre", "Arme", 10);

    inv.addItem(lancePierre);

    cout << david.getStatus() << endl;
    cout << "End of programm." << endl;
    cout << "Hello" << endl;
    return 0;
}
