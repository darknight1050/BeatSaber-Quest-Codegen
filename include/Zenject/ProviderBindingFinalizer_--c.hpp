// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ProviderBindingFinalizer/<>c
  // [CompilerGeneratedAttribute] Offset: DDE2E8
  class ProviderBindingFinalizer::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Zenject.ProviderBindingFinalizer/<>c <>9
    static Zenject::ProviderBindingFinalizer::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.ProviderBindingFinalizer/<>c <>9
    static void _set_$$9(Zenject::ProviderBindingFinalizer::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.String> <>9__7_0
    static System::Func_2<System::Type*, ::Il2CppString*>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<System.Type,System.String> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<System::Type*, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<System.Type,System.String> <>9__8_0
    static System::Func_2<System::Type*, ::Il2CppString*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.Type,System.String> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<System::Type*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x16CC4B8
    static void _cctor();
    // System.String <GetScope>b__7_0(System.Type x)
    // Offset: 0x16CC524
    ::Il2CppString* $GetScope$b__7_0(System::Type* x);
    // System.String <FinalizeBinding>b__8_0(System.Type x)
    // Offset: 0x16CC58C
    ::Il2CppString* $FinalizeBinding$b__8_0(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0x16CC51C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProviderBindingFinalizer::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ProviderBindingFinalizer::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProviderBindingFinalizer::$$c*, creationType>()));
    }
  }; // Zenject.ProviderBindingFinalizer/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProviderBindingFinalizer::$$c*, "Zenject", "ProviderBindingFinalizer/<>c");
