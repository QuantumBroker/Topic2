#include <iostream>
using namespace std;

class Brick {
public:
    virtual void onHit() { cout << "Brick hit!" << endl; }
};

class SimpleBrick : public Brick {
public:
    void onHit() override { cout << "Simple brick destroyed!" << endl; }
};

class HardBrick : public Brick {
public:
    void onHit() override { cout << "Hard brick damaged! Needs one more hit." << endl; }
};


void processCollision(Brick* b) {
    b->onHit();
}

int main() {
    SimpleBrick s;
    HardBrick h;
    processCollision(&s); // Передача адреси об'єкта
    processCollision(&h);
    return 0;
}
