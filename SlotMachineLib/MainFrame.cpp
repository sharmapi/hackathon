/**
 * @file MainFrame.cpp
 * @author Christina Tagay
 */

#include "pch.h"
#include "MainFrame.h"
#include "MachineView.h"
#include "SlotMachineFactory.h"
/**
 * Initialize the MainFrame window.
 */
void MainFrame::Initialize()
{
    Create(nullptr, wxID_ANY, L"Slot Machine",
            wxDefaultPosition,  wxSize( 1000,800 ));
    // Create a sizer that will lay out child windows vertically
    // one above each other
    auto sizer = new wxBoxSizer( wxVERTICAL );

    // Create the view class object as a child of MainFrame
    auto mMachineView = new MachineView();
    mMachineView->Initialize(this);

    // Add it to the sizer
    sizer->Add(mMachineView, 1, wxEXPAND | wxALL );

    // Set the sizer for this frame
    SetSizer( sizer );

    // Layout (place) the child windows.
    Layout();


    //
    // Create the SlotMachine
    //
    SlotMachineFactory factory;
    mSlotMachine = factory.Create();
}