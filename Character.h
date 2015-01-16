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
		char getName();

	protected:
	private:
	    char m_name[100];
	    char m_race[100];
};

#endif // CHARACTER_H
