// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: ReorderableAttribute
  // [] Offset: FFFFFFFF
  class ReorderableAttribute : public UnityEngine::PropertyAttribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCF4EE4
    // private System.String <ElementHeader>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* ElementHeader;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCF4EF4
    // private System.Boolean <HeaderZeroIndex>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool HeaderZeroIndex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCF4F04
    // private System.Boolean <ElementSingleLine>k__BackingField
    // Size: 0x1
    // Offset: 0x19
    bool ElementSingleLine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ReorderableAttribute
    ReorderableAttribute(::Il2CppString* ElementHeader_ = {}, bool HeaderZeroIndex_ = {}, bool ElementSingleLine_ = {}) noexcept : ElementHeader{ElementHeader_}, HeaderZeroIndex{HeaderZeroIndex_}, ElementSingleLine{ElementSingleLine_} {}
    // public System.String get_ElementHeader()
    // Offset: 0x112C488
    ::Il2CppString* get_ElementHeader();
    // protected System.Void set_ElementHeader(System.String value)
    // Offset: 0x112C490
    void set_ElementHeader(::Il2CppString* value);
    // public System.Boolean get_HeaderZeroIndex()
    // Offset: 0x112C498
    bool get_HeaderZeroIndex();
    // protected System.Void set_HeaderZeroIndex(System.Boolean value)
    // Offset: 0x112C4A0
    void set_HeaderZeroIndex(bool value);
    // public System.Boolean get_ElementSingleLine()
    // Offset: 0x112C4AC
    bool get_ElementSingleLine();
    // protected System.Void set_ElementSingleLine(System.Boolean value)
    // Offset: 0x112C4B4
    void set_ElementSingleLine(bool value);
    // public System.Void .ctor(System.String headerString, System.Boolean isZeroIndex, System.Boolean isSingleLine)
    // Offset: 0x112C528
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReorderableAttribute* New_ctor(::Il2CppString* headerString, bool isZeroIndex, bool isSingleLine) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReorderableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReorderableAttribute*, creationType>(headerString, isZeroIndex, isSingleLine)));
    }
    // public System.Void .ctor()
    // Offset: 0x112C4C0
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReorderableAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReorderableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReorderableAttribute*, creationType>()));
    }
  }; // ReorderableAttribute
  #pragma pack(pop)
  static check_size<sizeof(ReorderableAttribute), 25 + sizeof(bool)> __GlobalNamespace_ReorderableAttributeSizeCheck;
  static_assert(sizeof(ReorderableAttribute) == 0x1A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReorderableAttribute*, "", "ReorderableAttribute");
