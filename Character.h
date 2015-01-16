#ifndef CHARACTER_H
#define CHARACTER_H

#include <vector>
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

	protected:
	private:
};

#endif // CHARACTER_H
