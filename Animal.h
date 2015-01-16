#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
    public:
        Animal(std::string race, bool canFly, bool canSwim);
        Animal();
        std::string getRace();
        bool canFly();
        bool canSwim();
    protected:
    private:
        std::string m_race;
        bool m_canFly;
        bool m_canSwim;
};

#endif // ANIMAL_H
