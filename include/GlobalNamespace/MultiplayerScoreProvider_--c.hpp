// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreProvider/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C534
  class MultiplayerScoreProvider::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MultiplayerScoreProvider/<>c <>9
    static GlobalNamespace::MultiplayerScoreProvider::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerScoreProvider/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerScoreProvider::$$c* value);
    // Get static field: static public System.Func`2<MultiplayerScoreProvider/RankedPlayer,System.Boolean> <>9__16_0
    static System::Func_2<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, bool>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<MultiplayerScoreProvider/RankedPlayer,System.Boolean> <>9__16_0
    static void _set_$$9__16_0(System::Func_2<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0xF1B824
    static void _cctor();
    // System.Boolean <Update>b__16_0(MultiplayerScoreProvider/RankedPlayer p)
    // Offset: 0xF1B890
    bool $Update$b__16_0(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* p);
    // public System.Void .ctor()
    // Offset: 0xF1B888
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreProvider::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerScoreProvider::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreProvider::$$c*, creationType>()));
    }
  }; // MultiplayerScoreProvider/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreProvider::$$c*, "", "MultiplayerScoreProvider/<>c");
