#include <iostream>
using namespace std;

class GameObject {
public:
    virtual void render() { cout << "Rendering generic object" << endl; }
};

class Ball : public GameObject {
public:
    void render() override { cout << "Rendering Ball at (x, y)" << endl; }
};

int main() {
    GameObject* obj = new Ball();
    obj->render();
    delete obj;
    return 0;
}
