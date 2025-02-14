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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IInitializable
  class IInitializable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InitializableManager
  class InitializableManager : public ::Il2CppObject {
    public:
    // Nested type: Zenject::InitializableManager::InitializableInfo
    class InitializableInfo;
    // Nested type: Zenject::InitializableManager::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: Zenject::InitializableManager::$$c
    class $$c;
    // private System.Collections.Generic.List`1<Zenject.InitializableManager/InitializableInfo> _initializables
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::InitializableManager::InitializableInfo*>* initializables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::InitializableManager::InitializableInfo*>*) == 0x8);
    // private System.Boolean _hasInitialized
    // Size: 0x1
    // Offset: 0x18
    bool hasInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitializableManager
    InitializableManager(System::Collections::Generic::List_1<Zenject::InitializableManager::InitializableInfo*>* initializables_ = {}, bool hasInitialized_ = {}) noexcept : initializables{initializables_}, hasInitialized{hasInitialized_} {}
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.IInitializable> initializables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities)
    // Offset: 0x1627374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializableManager* New_ctor(System::Collections::Generic::List_1<Zenject::IInitializable*>* initializables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InitializableManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializableManager*, creationType>(initializables, priorities)));
    }
    // public System.Void Add(Zenject.IInitializable initializable)
    // Offset: 0x1627660
    void Add(Zenject::IInitializable* initializable);
    // public System.Void Add(Zenject.IInitializable initializable, System.Int32 priority)
    // Offset: 0x1627668
    void Add(Zenject::IInitializable* initializable, int priority);
    // public System.Void Initialize()
    // Offset: 0x1627710
    void Initialize();
  }; // Zenject.InitializableManager
  #pragma pack(pop)
  static check_size<sizeof(InitializableManager), 24 + sizeof(bool)> __Zenject_InitializableManagerSizeCheck;
  static_assert(sizeof(InitializableManager) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InitializableManager*, "Zenject", "InitializableManager");
