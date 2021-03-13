// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SyncStateId
#include "GlobalNamespace/SyncStateId.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ISyncStateSerializable`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class ISyncStateSerializable_1 {
    public:
    // Creating value type constructor for type: ISyncStateSerializable_1
    ISyncStateSerializable_1() noexcept {}
    // public SyncStateId get_id()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::SyncStateId get_id_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ISyncStateSerializable_1::get_id_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_id", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::SyncStateId, false>(this, ___internal__method);
    }
    // public System.Void set_id(SyncStateId value)
    // Offset: 0xFFFFFFFF
    void set_id_NEW(GlobalNamespace::SyncStateId value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ISyncStateSerializable_1::set_id_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_id", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Single get_time()
    // Offset: 0xFFFFFFFF
    float get_time_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ISyncStateSerializable_1::get_time_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_time", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // public System.Void set_time(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_time_NEW(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ISyncStateSerializable_1::set_time_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_time", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public T get_state()
    // Offset: 0xFFFFFFFF
    T get_state_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ISyncStateSerializable_1::get_state_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_state", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // public System.Void set_state(T value)
    // Offset: 0xFFFFFFFF
    void set_state_NEW(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ISyncStateSerializable_1::set_state_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_state", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
  }; // ISyncStateSerializable`1
  // Could not write size check! Type: ISyncStateSerializable`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ISyncStateSerializable_1, "", "ISyncStateSerializable`1");
