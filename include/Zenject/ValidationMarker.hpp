// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ValidationMarker
  class ValidationMarker : public ::CsObject {
    public:
    // private System.Boolean <InstantiateFailed>k__BackingField
    // Offset: 0x10
    bool InstantiateFailed;
    // private System.Type <MarkedType>k__BackingField
    // Offset: 0x18
    System::Type* MarkedType;
    // public System.Void .ctor(System.Type markedType, System.Boolean instantiateFailed)
    // Offset: 0x1928470
    static ValidationMarker* New_ctor(System::Type* markedType, bool instantiateFailed);
    // public System.Void .ctor(System.Type markedType)
    // Offset: 0x19284BC
    static ValidationMarker* New_ctor(System::Type* markedType);
    // public System.Boolean get_InstantiateFailed()
    // Offset: 0x19284F8
    bool get_InstantiateFailed();
    // private System.Void set_InstantiateFailed(System.Boolean value)
    // Offset: 0x1928500
    void set_InstantiateFailed(bool value);
    // public System.Type get_MarkedType()
    // Offset: 0x192850C
    System::Type* get_MarkedType();
    // private System.Void set_MarkedType(System.Type value)
    // Offset: 0x1928514
    void set_MarkedType(System::Type* value);
  }; // Zenject.ValidationMarker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationMarker*, "Zenject", "ValidationMarker");
#pragma pack(pop)
