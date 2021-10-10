#ifndef GATE_GATES_AND
#define GATE_GATES_AND
#include "../Gate.h"

namespace Gates {
    class And : public Gate {
    public:
        And(int x, int y, Object* in1, Object* in2);
        void tick(sf::RenderWindow* w) override;
    };
}

#endif /* GATE_GATES_AND */
