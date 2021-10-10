#ifndef GATE_GATES_NOR
#define GATE_GATES_NOR
#include "../Gate.h"

namespace Gates {
    class Nor : public Gate {
    public:
        Nor(int x, int y, Object* in1, Object* in2);
        void tick(sf::RenderWindow* w) override;
    };
}

#endif /* GATE_GATES_NOR */
