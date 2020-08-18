// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: ConcurrentSetItem`2<KeyType, ItemType>
  template<typename KeyType, typename ItemType>
  class ConcurrentSetItem_2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ConcurrentSet`2
  template<typename KeyType, typename ItemType>
  struct ConcurrentSet_2 : public System::ValueType {
    static_assert((!std::is_complete_v<std::remove_pointer_t<ItemType>> || std::is_convertible_v<ItemType, System::Diagnostics::Tracing::ConcurrentSetItem_2<KeyType, ItemType>*>));
    public:
    // private ItemType[] items
    // Offset: 0x0
    ::Array<ItemType>* items;
    // Creating value type constructor for type: ConcurrentSet_2
    ConcurrentSet_2(::Array<ItemType>* items_ = {}) : items{items_} {}
    // public ItemType TryGet(KeyType key)
    // Offset: 0xFFFFFFFF
    ItemType TryGet(KeyType key) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<ItemType>(*this, "TryGet", key));
    }
    // public ItemType GetOrAdd(ItemType newItem)
    // Offset: 0xFFFFFFFF
    ItemType GetOrAdd(ItemType newItem) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<ItemType>(*this, "GetOrAdd", newItem));
    }
  }; // System.Diagnostics.Tracing.ConcurrentSet`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Diagnostics::Tracing::ConcurrentSet_2, "System.Diagnostics.Tracing", "ConcurrentSet`2");
#pragma pack(pop)
