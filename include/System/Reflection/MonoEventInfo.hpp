// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Reflection.EventAttributes
#include "System/Reflection/EventAttributes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: MonoEvent
  class MonoEvent;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoEventInfo
  // [] Offset: FFFFFFFF
  struct MonoEventInfo/*, public System::ValueType*/ {
    public:
    // public System.Type declaring_type
    // Size: 0x8
    // Offset: 0x0
    System::Type* declaring_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.Type reflected_type
    // Size: 0x8
    // Offset: 0x8
    System::Type* reflected_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Reflection.MethodInfo add_method
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::MethodInfo* add_method;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public System.Reflection.MethodInfo remove_method
    // Size: 0x8
    // Offset: 0x20
    System::Reflection::MethodInfo* remove_method;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public System.Reflection.MethodInfo raise_method
    // Size: 0x8
    // Offset: 0x28
    System::Reflection::MethodInfo* raise_method;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public System.Reflection.EventAttributes attrs
    // Size: 0x4
    // Offset: 0x30
    System::Reflection::EventAttributes attrs;
    // Field size check
    static_assert(sizeof(System::Reflection::EventAttributes) == 0x4);
    // Padding between fields: attrs and: other_methods
    char __padding6[0x4] = {};
    // public System.Reflection.MethodInfo[] other_methods
    // Size: 0x8
    // Offset: 0x38
    ::Array<System::Reflection::MethodInfo*>* other_methods;
    // Field size check
    static_assert(sizeof(::Array<System::Reflection::MethodInfo*>*) == 0x8);
    // Creating value type constructor for type: MonoEventInfo
    constexpr MonoEventInfo(System::Type* declaring_type_ = {}, System::Type* reflected_type_ = {}, ::Il2CppString* name_ = {}, System::Reflection::MethodInfo* add_method_ = {}, System::Reflection::MethodInfo* remove_method_ = {}, System::Reflection::MethodInfo* raise_method_ = {}, System::Reflection::EventAttributes attrs_ = {}, ::Array<System::Reflection::MethodInfo*>* other_methods_ = {}) noexcept : declaring_type{declaring_type_}, reflected_type{reflected_type_}, name{name_}, add_method{add_method_}, remove_method{remove_method_}, raise_method{raise_method_}, attrs{attrs_}, other_methods{other_methods_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static private System.Void get_event_info(System.Reflection.MonoEvent ev, out System.Reflection.MonoEventInfo info)
    // Offset: 0x1AC8F00
    static void get_event_info(System::Reflection::MonoEvent* ev, System::Reflection::MonoEventInfo& info);
    // static System.Reflection.MonoEventInfo GetEventInfo(System.Reflection.MonoEvent ev)
    // Offset: 0x1AC8B04
    static System::Reflection::MonoEventInfo GetEventInfo(System::Reflection::MonoEvent* ev);
  }; // System.Reflection.MonoEventInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoEventInfo), 56 + sizeof(::Array<System::Reflection::MethodInfo*>*)> __System_Reflection_MonoEventInfoSizeCheck;
  static_assert(sizeof(MonoEventInfo) == 0x40);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoEventInfo, "System.Reflection", "MonoEventInfo");
