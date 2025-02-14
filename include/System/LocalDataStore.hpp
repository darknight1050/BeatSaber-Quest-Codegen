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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreElement
  class LocalDataStoreElement;
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
  // Forward declaring type: LocalDataStoreSlot
  class LocalDataStoreSlot;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.LocalDataStore
  class LocalDataStore : public ::Il2CppObject {
    public:
    // private System.LocalDataStoreElement[] m_DataTable
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::LocalDataStoreElement*>* m_DataTable;
    // Field size check
    static_assert(sizeof(::Array<System::LocalDataStoreElement*>*) == 0x8);
    // private System.LocalDataStoreMgr m_Manager
    // Size: 0x8
    // Offset: 0x18
    System::LocalDataStoreMgr* m_Manager;
    // Field size check
    static_assert(sizeof(System::LocalDataStoreMgr*) == 0x8);
    // Creating value type constructor for type: LocalDataStore
    LocalDataStore(::Array<System::LocalDataStoreElement*>* m_DataTable_ = {}, System::LocalDataStoreMgr* m_Manager_ = {}) noexcept : m_DataTable{m_DataTable_}, m_Manager{m_Manager_} {}
    // public System.Void .ctor(System.LocalDataStoreMgr mgr, System.Int32 InitialCapacity)
    // Offset: 0x1808900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalDataStore* New_ctor(System::LocalDataStoreMgr* mgr, int InitialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::LocalDataStore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalDataStore*, creationType>(mgr, InitialCapacity)));
    }
    // System.Void Dispose()
    // Offset: 0x1808978
    void Dispose();
    // public System.Object GetData(System.LocalDataStoreSlot slot)
    // Offset: 0x1808A64
    ::Il2CppObject* GetData(System::LocalDataStoreSlot* slot);
    // public System.Void SetData(System.LocalDataStoreSlot slot, System.Object data)
    // Offset: 0x1808C18
    void SetData(System::LocalDataStoreSlot* slot, ::Il2CppObject* data);
    // System.Void FreeData(System.Int32 slot, System.Int64 cookie)
    // Offset: 0x1808FB8
    void FreeData(int slot, int64_t cookie);
    // private System.LocalDataStoreElement PopulateElement(System.LocalDataStoreSlot slot)
    // Offset: 0x1808D2C
    System::LocalDataStoreElement* PopulateElement(System::LocalDataStoreSlot* slot);
  }; // System.LocalDataStore
  #pragma pack(pop)
  static check_size<sizeof(LocalDataStore), 24 + sizeof(System::LocalDataStoreMgr*)> __System_LocalDataStoreSizeCheck;
  static_assert(sizeof(LocalDataStore) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStore*, "System", "LocalDataStore");
