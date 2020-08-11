// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ContextMenu
  class ContextMenu : public System::Attribute {
    public:
    // public readonly System.String menuItem
    // Offset: 0x10
    ::CsString* menuItem;
    // public readonly System.Boolean validate
    // Offset: 0x18
    bool validate;
    // public readonly System.Int32 priority
    // Offset: 0x1C
    int priority;
    // public System.Void .ctor(System.String itemName)
    // Offset: 0x12EFBC0
    static ContextMenu* New_ctor(::CsString* itemName);
    // public System.Void .ctor(System.String itemName, System.Boolean isValidateFunction)
    // Offset: 0x12EFC08
    static ContextMenu* New_ctor(::CsString* itemName, bool isValidateFunction);
    // public System.Void .ctor(System.String itemName, System.Boolean isValidateFunction, System.Int32 priority)
    // Offset: 0x12EFC60
    static ContextMenu* New_ctor(::CsString* itemName, bool isValidateFunction, int priority);
  }; // UnityEngine.ContextMenu
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContextMenu*, "UnityEngine", "ContextMenu");
#pragma pack(pop)
