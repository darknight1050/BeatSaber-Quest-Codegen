// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestAnalyticsModel
#include "GlobalNamespace/TestAnalyticsModel.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
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
  // Autogenerated type: TestAnalyticsModel/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBEB74
  class TestAnalyticsModel::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly TestAnalyticsModel/<>c <>9
    static GlobalNamespace::TestAnalyticsModel::$$c* _get_$$9();
    // Set static field: static public readonly TestAnalyticsModel/<>c <>9
    static void _set_$$9(GlobalNamespace::TestAnalyticsModel::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> <>9__3_0
    static System::Func_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppString*>, ::Il2CppString*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppString*>, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xF4A0C4
    static void _cctor();
    // System.String <LogEvent>b__3_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String> kvp)
    // Offset: 0xF4A134
    ::Il2CppString* $LogEvent$b__3_0(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppString*> kvp);
    // public System.Void .ctor()
    // Offset: 0xF4A12C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestAnalyticsModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TestAnalyticsModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestAnalyticsModel::$$c*, creationType>()));
    }
  }; // TestAnalyticsModel/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestAnalyticsModel::$$c*, "", "TestAnalyticsModel/<>c");
#pragma pack(pop)
