// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DelegateSerializationHolder
#include "System/DelegateSerializationHolder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x48
  // Autogenerated type: System.DelegateSerializationHolder/DelegateEntry
  // [] Offset: FFFFFFFF
  class DelegateSerializationHolder::DelegateEntry : public ::Il2CppObject {
    public:
    // private System.String type
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String assembly
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* assembly;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Object target
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* target;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String targetTypeAssembly
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* targetTypeAssembly;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String targetTypeName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* targetTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String methodName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* methodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.DelegateSerializationHolder/DelegateEntry delegateEntry
    // Size: 0x8
    // Offset: 0x40
    System::DelegateSerializationHolder::DelegateEntry* delegateEntry;
    // Field size check
    static_assert(sizeof(System::DelegateSerializationHolder::DelegateEntry*) == 0x8);
    // Creating value type constructor for type: DelegateEntry
    DelegateEntry(::Il2CppString* type_ = {}, ::Il2CppString* assembly_ = {}, ::Il2CppObject* target_ = {}, ::Il2CppString* targetTypeAssembly_ = {}, ::Il2CppString* targetTypeName_ = {}, ::Il2CppString* methodName_ = {}, System::DelegateSerializationHolder::DelegateEntry* delegateEntry_ = {}) noexcept : type{type_}, assembly{assembly_}, target{target_}, targetTypeAssembly{targetTypeAssembly_}, targetTypeName{targetTypeName_}, methodName{methodName_}, delegateEntry{delegateEntry_} {}
    // public System.Void .ctor(System.Delegate del, System.String targetLabel)
    // Offset: 0x1677480
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelegateSerializationHolder::DelegateEntry* New_ctor(System::Delegate* del, ::Il2CppString* targetLabel) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DelegateSerializationHolder::DelegateEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelegateSerializationHolder::DelegateEntry*, creationType>(del, targetLabel)));
    }
    // public System.Delegate DeserializeDelegate(System.Runtime.Serialization.SerializationInfo info, System.Int32 index)
    // Offset: 0x167720C
    System::Delegate* DeserializeDelegate(System::Runtime::Serialization::SerializationInfo* info, int index);
  }; // System.DelegateSerializationHolder/DelegateEntry
  static check_size<sizeof(DelegateSerializationHolder::DelegateEntry), 64 + sizeof(System::DelegateSerializationHolder::DelegateEntry*)> __System_DelegateSerializationHolder_DelegateEntrySizeCheck;
  static_assert(sizeof(DelegateSerializationHolder::DelegateEntry) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::DelegateSerializationHolder::DelegateEntry*, "System", "DelegateSerializationHolder/DelegateEntry");
#pragma pack(pop)
