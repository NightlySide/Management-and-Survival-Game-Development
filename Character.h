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
			int health;
		};
		Stat statut;

		void setHealth(int val);
		std::string getName() const;
		void changeName(std::string newName);
		Inventory* getInventory();
		std::pair<int, int> getPos();
		void setPos(std::pair<int, int> pos);
		void setPos(int pos_x, int pos_y);

	protected:
	private:
	    std::string m_name;
	    std::string m_race;
	    std::pair<int, int> m_pos;
	    Inventory* m_inventory;
};

#endif // CHARACTER_H
