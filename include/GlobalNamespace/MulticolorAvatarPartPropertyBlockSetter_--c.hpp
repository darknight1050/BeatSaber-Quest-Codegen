// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MulticolorAvatarPartPropertyBlockSetter
#include "GlobalNamespace/MulticolorAvatarPartPropertyBlockSetter.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: MulticolorAvatarPartPropertyBlockSetter/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBEC04
  class MulticolorAvatarPartPropertyBlockSetter::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MulticolorAvatarPartPropertyBlockSetter/<>c <>9
    static GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c* _get_$$9();
    // Set static field: static public readonly MulticolorAvatarPartPropertyBlockSetter/<>c <>9
    static void _set_$$9(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c* value);
    // Get static field: static public System.Func`2<MulticolorAvatarPartPropertyBlockSetter/ColorData,UnityEngine.Color> <>9__10_0
    static System::Func_2<GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*, UnityEngine::Color>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<MulticolorAvatarPartPropertyBlockSetter/ColorData,UnityEngine.Color> <>9__10_0
    static void _set_$$9__10_0(System::Func_2<GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*, UnityEngine::Color>* value);
    // static private System.Void .cctor()
    // Offset: 0xFA643C
    static void _cctor();
    // UnityEngine.Color <OnValidate>b__10_0(MulticolorAvatarPartPropertyBlockSetter/ColorData x)
    // Offset: 0xFA64AC
    UnityEngine::Color $OnValidate$b__10_0(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData* x);
    // public System.Void .ctor()
    // Offset: 0xFA64A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MulticolorAvatarPartPropertyBlockSetter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MulticolorAvatarPartPropertyBlockSetter::$$c*, creationType>()));
    }
  }; // MulticolorAvatarPartPropertyBlockSetter/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c*, "", "MulticolorAvatarPartPropertyBlockSetter/<>c");
#pragma pack(pop)
