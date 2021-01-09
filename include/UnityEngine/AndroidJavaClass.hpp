// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AndroidJavaObject
#include "UnityEngine/AndroidJavaObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  // Autogenerated type: UnityEngine.AndroidJavaClass
  // [] Offset: FFFFFFFF
  class AndroidJavaClass : public UnityEngine::AndroidJavaObject {
    public:
    // Creating value type constructor for type: AndroidJavaClass
    AndroidJavaClass() noexcept {}
    // public System.Void .ctor(System.String className)
    // Offset: 0x199DF34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaClass* New_ctor(::Il2CppString* className) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaClass*, creationType>(className)));
    }
    // private System.Void _AndroidJavaClass(System.String className)
    // Offset: 0x199DFBC
    void _AndroidJavaClass(::Il2CppString* className);
    // System.Void .ctor(System.IntPtr jclass)
    // Offset: 0x199E1E4
    // Implemented from: UnityEngine.AndroidJavaObject
    // Base method: System.Void AndroidJavaObject::.ctor(System.IntPtr jclass)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaClass* New_ctor(System::IntPtr jclass) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaClass*, creationType>(jclass)));
    }
  }; // UnityEngine.AndroidJavaClass
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaClass*, "UnityEngine", "AndroidJavaClass");
#pragma pack(pop)
