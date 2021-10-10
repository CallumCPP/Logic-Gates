#ifndef GATE_GATES_NOT
#define GATE_GATES_NOT
#include "../Gate.h"

namespace Gates {
    class Not : public Gate {
    public:
        Not(int x, int y, Object* in);
        void tick(sf::RenderWindow* w) override;
    };
}

#endif /* GATE_GATES_NOT */
