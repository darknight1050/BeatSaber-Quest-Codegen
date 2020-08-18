// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TabBarViewController
#include "GlobalNamespace/TabBarViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TabBarViewController/TabBarItem
  class TabBarViewController::TabBarItem : public ::Il2CppObject {
    public:
    // public readonly System.String title
    // Offset: 0x10
    ::Il2CppString* title;
    // public readonly System.Action action
    // Offset: 0x18
    System::Action* action;
    // public System.Void .ctor(System.String title, System.Action action)
    // Offset: 0x18FD55C
    static TabBarViewController::TabBarItem* New_ctor(::Il2CppString* title, System::Action* action);
  }; // TabBarViewController/TabBarItem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TabBarViewController::TabBarItem*, "", "TabBarViewController/TabBarItem");
#pragma pack(pop)
