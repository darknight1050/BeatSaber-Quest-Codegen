// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ISynchronizeInvoke
  // [] Offset: FFFFFFFF
  class ISynchronizeInvoke {
    public:
    // Creating value type constructor for type: ISynchronizeInvoke
    ISynchronizeInvoke() noexcept {}
    // public System.Boolean get_InvokeRequired()
    // Offset: 0xFFFFFFFF
    bool get_InvokeRequired_NEW();
    // public System.IAsyncResult BeginInvoke(System.Delegate method, System.Object[] args)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke_NEW(System::Delegate* method, ::Array<::Il2CppObject*>* args);
  }; // System.ComponentModel.ISynchronizeInvoke
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ISynchronizeInvoke*, "System.ComponentModel", "ISynchronizeInvoke");
