// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomFilterUtils
#include "GlobalNamespace/BloomFilterUtils.hpp"
// Including type: BloomFilter
#include "GlobalNamespace/BloomFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: BloomFilterUtils/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA39D0
  class BloomFilterUtils::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly BloomFilterUtils/<>c <>9
    static GlobalNamespace::BloomFilterUtils::$$c* _get_$$9();
    // Set static field: static public readonly BloomFilterUtils/<>c <>9
    static void _set_$$9(GlobalNamespace::BloomFilterUtils::$$c* value);
    // Get static field: static public System.Func`3<BloomFilter,System.String,BloomFilter> <>9__0_0
    static System::Func_3<GlobalNamespace::BloomFilter, ::Il2CppString*, GlobalNamespace::BloomFilter>* _get_$$9__0_0();
    // Set static field: static public System.Func`3<BloomFilter,System.String,BloomFilter> <>9__0_0
    static void _set_$$9__0_0(System::Func_3<GlobalNamespace::BloomFilter, ::Il2CppString*, GlobalNamespace::BloomFilter>* value);
    // static private System.Void .cctor()
    // Offset: 0x19A3AF4
    static void _cctor();
    // BloomFilter <ToBloomFilter>b__0_0(BloomFilter a, System.String b)
    // Offset: 0x19A3B64
    GlobalNamespace::BloomFilter $ToBloomFilter$b__0_0(GlobalNamespace::BloomFilter a, ::Il2CppString* b);
    // public System.Void .ctor()
    // Offset: 0x19A3B5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomFilterUtils::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilterUtils::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomFilterUtils::$$c*, creationType>()));
    }
  }; // BloomFilterUtils/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFilterUtils::$$c*, "", "BloomFilterUtils/<>c");
#pragma pack(pop)
