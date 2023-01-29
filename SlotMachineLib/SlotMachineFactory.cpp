/**
 * @file SlotMachineFactory.cpp
 * @author Christina Tagay
 */
#include "pch.h"
#include "SlotMachineFactory.h"

std::shared_ptr<SlotMachine> SlotMachineFactory::Create()
{
    auto machine = std::make_shared<SlotMachine>();
    return machine;
}