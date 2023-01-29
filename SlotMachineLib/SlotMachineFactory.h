/**
 * @file SlotMachineFactory.h
 * @author Christina Tagay
 *
 *
 */

#ifndef HACK_SLOTMACHINEFACTORY_H
#define HACK_SLOTMACHINEFACTORY_H

#include "SlotMachine.h"

class SlotMachineFactory {
private:

public:
    std::shared_ptr<SlotMachine> Create();


};

#endif //HACK_SLOTMACHINEFACTORY_H
