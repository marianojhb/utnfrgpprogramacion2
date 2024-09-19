#include <iostream>
using namespace std;

class Enemy
{
protected:
    int attackPower;
public:
    void setAttackPower(int a)
    {
        attackPower = a;
    }
};

class Ninja: public Enemy
{
public:
    void attack() const
    {
        cout << "Ninja! - "<<attackPower<<endl;
    }
};

class Monster: public Enemy
{
public:
    void attack() const
    {
        cout << "Monster! - "<<attackPower * 10<<endl;
    }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->setAttackPower(20);
    e2->setAttackPower(20);

    n.attack();
    m.attack();
}
