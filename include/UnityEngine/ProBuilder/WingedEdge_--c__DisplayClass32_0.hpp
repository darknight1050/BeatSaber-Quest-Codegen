// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.WingedEdge
#include "UnityEngine/ProBuilder/WingedEdge.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x18
  // Autogenerated type: UnityEngine.ProBuilder.WingedEdge/<>c__DisplayClass32_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE304C
  class WingedEdge::$$c__DisplayClass32_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.HashSet`1<System.Int32> common
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<int>* common;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass32_0
    $$c__DisplayClass32_0(System::Collections::Generic::HashSet_1<int>* common_ = {}) noexcept : common{common_} {}
    // Creating conversion operator: operator System::Collections::Generic::HashSet_1<int>*
    constexpr operator System::Collections::Generic::HashSet_1<int>*() const noexcept {
      return common;
    }
    // System.Boolean <SortCommonIndexesByAdjacency>b__0(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x195708C
    bool $SortCommonIndexesByAdjacency$b__0(UnityEngine::ProBuilder::WingedEdge* x);
    // public System.Void .ctor()
    // Offset: 0x1956E88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WingedEdge::$$c__DisplayClass32_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WingedEdge::$$c__DisplayClass32_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.WingedEdge/<>c__DisplayClass32_0
  static check_size<sizeof(WingedEdge::$$c__DisplayClass32_0), 16 + sizeof(System::Collections::Generic::HashSet_1<int>*)> __UnityEngine_ProBuilder_WingedEdge_$$c__DisplayClass32_0SizeCheck;
  static_assert(sizeof(WingedEdge::$$c__DisplayClass32_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0*, "UnityEngine.ProBuilder", "WingedEdge/<>c__DisplayClass32_0");
#pragma pack(pop)
