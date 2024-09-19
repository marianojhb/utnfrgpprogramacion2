#include <iostream>
using namespace std;

class Enemy
{
protected:
public:
    int attackPower;
    virtual void attack(){}
    virtual void setAttackPower(int a)
    {
        attackPower = a;
        cout << "se uso la funcion de la base" <<endl;
    }
};

class Ninja: public Enemy
{
public:
    void attack()
    {
        cout << "Ninja! - "<<this->attackPower<<endl;
    }
    void setAttackPower(int a)
    {
        attackPower = a*10;
    }
};

class Monster: public Enemy
{
public:
    void attack()
    {
        cout << "Monster! - "<< this->attackPower<<endl;
    }
    void setAttactPower(int &a)
    {
        this->attackPower = a*2;
    }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->setAttackPower(20);
    e2->setAttackPower(80);

    e1->attack();
    e2->attack();
}
