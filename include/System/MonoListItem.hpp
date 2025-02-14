// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.MonoListItem
  class MonoListItem : public ::Il2CppObject {
    public:
    // private System.MonoListItem next
    // Size: 0x8
    // Offset: 0x10
    System::MonoListItem* next;
    // Field size check
    static_assert(sizeof(System::MonoListItem*) == 0x8);
    // private System.Object data
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: MonoListItem
    MonoListItem(System::MonoListItem* next_ = {}, ::Il2CppObject* data_ = {}) noexcept : next{next_}, data{data_} {}
    // public System.Void .ctor()
    // Offset: 0x180D024
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoListItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MonoListItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoListItem*, creationType>()));
    }
  }; // System.MonoListItem
  #pragma pack(pop)
  static check_size<sizeof(MonoListItem), 24 + sizeof(::Il2CppObject*)> __System_MonoListItemSizeCheck;
  static_assert(sizeof(MonoListItem) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::MonoListItem*, "System", "MonoListItem");
