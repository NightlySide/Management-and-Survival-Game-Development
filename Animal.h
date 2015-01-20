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
        std::pair<int, int> getPos();
        void setPos(std::pair<int, int> pos);
        void setPos(int pos_x, int pos_y);
    protected:
    private:
        std::string m_race;
        bool m_canFly;
        bool m_canSwim;
        std::pair<int, int> m_pos;
};

#endif // ANIMAL_H
