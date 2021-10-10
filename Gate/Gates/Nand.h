#ifndef GATE_GATES_NAND
#define GATE_GATES_NAND
#include "../Gate.h"

namespace Gates {
    class Nand : public Gate {
    public:
        Nand(int x, int y, Object* in1, Object* in2);
        void tick(sf::RenderWindow* w) override;
    };
}

#endif /* GATE_GATES_NAND */
