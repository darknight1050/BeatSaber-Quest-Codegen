// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo
  class ReflectionTypeInfo::InjectParameterInfo : public ::Il2CppObject {
    public:
    // public readonly System.Reflection.ParameterInfo ParameterInfo
    // Offset: 0x10
    System::Reflection::ParameterInfo* ParameterInfo;
    // public readonly Zenject.InjectableInfo InjectableInfo
    // Offset: 0x18
    Zenject::InjectableInfo* InjectableInfo;
    // public System.Void .ctor(System.Reflection.ParameterInfo parameterInfo, Zenject.InjectableInfo injectableInfo)
    // Offset: 0xE9BA88
    static ReflectionTypeInfo::InjectParameterInfo* New_ctor(System::Reflection::ParameterInfo* parameterInfo, Zenject::InjectableInfo* injectableInfo);
  }; // Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectParameterInfo");
#pragma pack(pop)
