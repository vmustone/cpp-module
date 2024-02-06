#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static Base *generate() {
    int random = std::rand() % 3;
    switch (random) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
}

static void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    }
}

static void identify(Base& p) {
    try {
        identify(&p);
    } catch (...) {
        std::cout << "Unknown" << std::endl;
    }
}

int main() {
    Base* objects[6];
    for (int i = 0; i < 2; ++i) {
        objects[i] = generate();
    }
    A a1, a2;
    B b1, b2;
    C c1, c2;
    objects[2] = &a1;
    objects[3] = &a2;
    objects[4] = &b1;
    objects[5] = &c1;

    for (int i = 0; i < 6; i++) {
        identify(objects[i]);
    }
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    Base* obj = generate();
    identify(obj);

    Base a, b, c;
    identify(a);
    identify(b);
    identify(c);

    delete obj;

    return 0;
}