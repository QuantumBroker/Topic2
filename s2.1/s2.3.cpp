#include <iostream>
using namespace std;

class Bonus {
public:
    virtual void apply() = 0; // Чисто віртуальна функція
};

class WidePaddle : public Bonus {
public:
    void apply() override { cout << "Paddle is now wider!" << endl; }
};

class ExtraLife : public Bonus {
public:
    void apply() override { cout << "Extra life added!" << endl; }
};

class GameManager {
public:

    void activateBonus(Bonus& b) {
        cout << "Activating: ";
        b.apply();
    }
};

int main() {
    GameManager manager;
    WidePaddle wp;
    ExtraLife el;
    
    manager.activateBonus(wp);
    manager.activateBonus(el);
    return 0;
}
