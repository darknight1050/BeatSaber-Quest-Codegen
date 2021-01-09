// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.NameObjectCollectionBase
#include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x24
  // Autogenerated type: System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
  // [] Offset: FFFFFFFF
  class NameObjectCollectionBase::NameObjectKeysEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Int32 _pos
    // Size: 0x4
    // Offset: 0x10
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: pos and: coll
    char __padding0[0x4] = {};
    // private System.Collections.Specialized.NameObjectCollectionBase _coll
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Specialized::NameObjectCollectionBase* coll;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::NameObjectCollectionBase*) == 0x8);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x20
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NameObjectKeysEnumerator
    NameObjectKeysEnumerator(int pos_ = {}, System::Collections::Specialized::NameObjectCollectionBase* coll_ = {}, int version_ = {}) noexcept : pos{pos_}, coll{coll_}, version{version_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // System.Void .ctor(System.Collections.Specialized.NameObjectCollectionBase coll)
    // Offset: 0x147E90C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase::NameObjectKeysEnumerator* New_ctor(System::Collections::Specialized::NameObjectCollectionBase* coll) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase::NameObjectKeysEnumerator*, creationType>(coll)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x147ED58
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Reset()
    // Offset: 0x147EE40
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // public System.Object get_Current()
    // Offset: 0x147EEE4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
  static check_size<sizeof(NameObjectCollectionBase::NameObjectKeysEnumerator), 32 + sizeof(int)> __System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumeratorSizeCheck;
  static_assert(sizeof(NameObjectCollectionBase::NameObjectKeysEnumerator) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator*, "System.Collections.Specialized", "NameObjectCollectionBase/NameObjectKeysEnumerator");
#pragma pack(pop)
