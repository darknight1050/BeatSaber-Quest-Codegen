// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
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
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::InitializableManager::InitializableInfo*>* initializables;
    // private System.Boolean _hasInitialized
    // Offset: 0x18
    bool hasInitialized;
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.IInitializable> initializables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities)
    // Offset: 0xE96CAC
    static InitializableManager* New_ctor(System::Collections::Generic::List_1<Zenject::IInitializable*>* initializables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities);
    // public System.Void Add(Zenject.IInitializable initializable)
    // Offset: 0xE96FD4
    void Add(Zenject::IInitializable* initializable);
    // public System.Void Add(Zenject.IInitializable initializable, System.Int32 priority)
    // Offset: 0xE96FDC
    void Add(Zenject::IInitializable* initializable, int priority);
    // public System.Void Initialize()
    // Offset: 0xE97090
    void Initialize();
  }; // Zenject.InitializableManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::InitializableManager*, "Zenject", "InitializableManager");
#pragma pack(pop)
