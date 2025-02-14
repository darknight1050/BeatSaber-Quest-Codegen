// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenFactoryMethod
  class ZenFactoryMethod : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ZenFactoryMethod
    ZenFactoryMethod() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23C0894
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenFactoryMethod* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenFactoryMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenFactoryMethod*, creationType>(object, method)));
    }
    // public System.Object Invoke(System.Object[] args)
    // Offset: 0x23C08A4
    ::Il2CppObject* Invoke(::Array<::Il2CppObject*>* args);
    // public System.IAsyncResult BeginInvoke(System.Object[] args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x23C0C40
    System::IAsyncResult* BeginInvoke(::Array<::Il2CppObject*>* args, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x23C0C64
    ::Il2CppObject* EndInvoke(System::IAsyncResult* result);
  }; // Zenject.ZenFactoryMethod
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenFactoryMethod*, "Zenject", "ZenFactoryMethod");
