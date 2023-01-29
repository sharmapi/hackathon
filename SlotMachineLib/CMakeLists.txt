project(SlotMachineLib)

set(SOURCE_FILES MainFrame.h MainFrame.cpp pch.h MachineView.cpp MachineView.h SlotMachine.cpp SlotMachine.h SlotMachineFactory.cpp SlotMachineFactory.h)

set(wxBUILD_PRECOMP OFF)
find_package(wxWidgets COMPONENTS core base xrc html xml REQUIRED)

include(${wxWidgets_USE_FILE})

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
