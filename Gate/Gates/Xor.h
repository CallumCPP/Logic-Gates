#ifndef GATE_GATES_XOR
#define GATE_GATES_XOR
#include "../Gate.h"

namespace Gates {
    class Xor : public Gate {
    public:
        Xor(int x, int y, Object* in1, Object* in2);
        void tick(sf::RenderWindow* w) override;
    };
}

#endif /* GATE_GATES_XOR */
