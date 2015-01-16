#ifndef CHARACTER_H
#define CHARACTER_H

#include "Inventory.h"

#include <string>

class Character
{
	public:

		Character();
		virtual ~Character();

		struct Stat
		{
			int health=100;
		};
		Stat statut;

		void setHealth(int val);
		std::string getName() const;
		void changeName(std::string newName);
		Inventory* getInventory();

	protected:
	private:
	    std::string m_name;
	    std::string m_race;
	    Inventory* m_inventory;
};

#endif // CHARACTER_H
