/**
 * @file App.cpp
 * @author Christina Tagay
 */
#include "pch.h"
#include "App.h"
#include <MainFrame.h>

/**
 * Initialize the application.
 * @return
 */
bool App::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    auto frame = new MainFrame();
    frame->Initialize();
    frame->Show(true);

    return true;
}