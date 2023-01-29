/**
 * @file MainFrame.h
 * @author Christina Tagay
 *
 *
 */

#ifndef HACK_MAINFRAME_H
#define HACK_MAINFRAME_H

#include "SlotMachine.h"

class MainFrame : public wxFrame {
private:
    std::shared_ptr<SlotMachine> mSlotMachine;

public:
    void Initialize();

};

#endif //HACK_MAINFRAME_H
