// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.ValidationUtil
#include "Zenject/ValidationUtil.hpp"
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
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ValidationUtil/<>c
  class ValidationUtil::$$c : public ::CsObject {
    public:
    // Get static field: static public readonly Zenject.ValidationUtil/<>c <>9
    static Zenject::ValidationUtil::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.ValidationUtil/<>c <>9
    static void _set_$$9(Zenject::ValidationUtil::$$c* value);
    // Get static field: static public System.Func`2<System.Type,Zenject.TypeValuePair> <>9__0_0
    static System::Func_2<System::Type*, Zenject::TypeValuePair>* _get_$$9__0_0();
    // Set static field: static public System.Func`2<System.Type,Zenject.TypeValuePair> <>9__0_0
    static void _set_$$9__0_0(System::Func_2<System::Type*, Zenject::TypeValuePair>* value);
    // static private System.Void .cctor()
    // Offset: 0x1928620
    static void _cctor();
    // Zenject.TypeValuePair <CreateDefaultArgs>b__0_0(System.Type x)
    // Offset: 0x1928690
    Zenject::TypeValuePair $CreateDefaultArgs$b__0_0(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0x1928688
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ValidationUtil::$$c* New_ctor();
  }; // Zenject.ValidationUtil/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationUtil::$$c*, "Zenject", "ValidationUtil/<>c");
#pragma pack(pop)
