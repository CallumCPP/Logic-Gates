#ifndef GATE_GATES_XNOR
#define GATE_GATES_XNOR
#include "../Gate.h"

namespace Gates {
    class Xnor : public Gate {
    public:
        Xnor(int x, int y, Object* in1, Object* in2);
        void tick(sf::RenderWindow* w) override;
    };
}

#endif /* GATE_GATES_XNOR */
