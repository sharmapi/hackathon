/**
 * @file AppView.cpp
 * @author Christina Tagay
 */


#include "pch.h"
#include "AppView.h"
/**
 * Initialize the aquarium view class.
 * @param parent The parent window for this class
 */
void AppView::Initialize(wxFrame* parent)
{
    Create(parent, wxID_ANY);
    SetBackgroundColour(*wxWHITE);

}