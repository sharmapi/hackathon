/**
 * @file MachineView.h
 * @author Christina Tagay
 *
 *
 */

#ifndef HACK_MACHINEVIEW_H
#define HACK_MACHINEVIEW_H

#include "SlotMachine.h"

class MachineView : public wxWindow {
private:
    SlotMachine mSlotMachine;

public:
    MachineView(){}
    void Initialize(wxFrame* parent);
    void OnPaint(wxPaintEvent& event);


};

#endif //HACK_MACHINEVIEW_H
