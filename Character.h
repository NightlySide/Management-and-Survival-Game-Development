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
		std::string getName();

	protected:
	private:
	    std::string m_name[100];
	    std::string m_race[100];
};

#endif // CHARACTER_H
