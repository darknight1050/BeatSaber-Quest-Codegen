// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ReadOnlyCollectionBase
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C98894
  class ReadOnlyCollectionBase : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // private System.Collections.ArrayList list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: ReadOnlyCollectionBase
    ReadOnlyCollectionBase(System::Collections::ArrayList* list_ = {}) noexcept : list{list_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // protected System.Collections.ArrayList get_InnerList()
    // Offset: 0x181592C
    System::Collections::ArrayList* get_InnerList();
    // public System.Int32 get_Count()
    // Offset: 0x1815998
    int get_Count_NEW();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x18159C0
    void System_Collections_ICollection_CopyTo_NEW(System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1815A00
    System::Collections::IEnumerator* GetEnumerator_NEW();
    // protected System.Void .ctor()
    // Offset: 0x1815A28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadOnlyCollectionBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ReadOnlyCollectionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadOnlyCollectionBase*, creationType>()));
    }
  }; // System.Collections.ReadOnlyCollectionBase
  #pragma pack(pop)
  static check_size<sizeof(ReadOnlyCollectionBase), 16 + sizeof(System::Collections::ArrayList*)> __System_Collections_ReadOnlyCollectionBaseSizeCheck;
  static_assert(sizeof(ReadOnlyCollectionBase) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ReadOnlyCollectionBase*, "System.Collections", "ReadOnlyCollectionBase");
