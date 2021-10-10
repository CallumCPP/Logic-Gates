#ifndef GATE_GATES_OR
#define GATE_GATES_OR
#include "../Gate.h"

namespace Gates {
    class Or : public Gate {
    public:
        Or(int x, int y, Object* in1, Object* in2);
        void tick(sf::RenderWindow* w) override;
    };
}

#endif /* GATE_GATES_OR */
