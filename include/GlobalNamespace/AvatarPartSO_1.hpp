// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IAvatarPart
#include "GlobalNamespace/IAvatarPart.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AvatarPartSO`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class AvatarPartSO_1 : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::IAvatarPart*/ {
    public:
    // private System.String _id
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0xDC4F3C
    // private System.String _localizationKey
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* localizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NullAllowed] Offset: 0xDC4F74
    // private T _partAsset
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T partAsset;
    // Creating value type constructor for type: AvatarPartSO_1
    AvatarPartSO_1(::Il2CppString* id_ = {}, ::Il2CppString* localizationKey_ = {}, T partAsset_ = {}) noexcept : id{id_}, localizationKey{localizationKey_}, partAsset{partAsset_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IAvatarPart
    operator GlobalNamespace::IAvatarPart() noexcept {
      return *reinterpret_cast<GlobalNamespace::IAvatarPart*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public T get_partAsset()
    // Offset: 0xFFFFFFFF
    T get_partAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartSO_1::get_partAsset");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_partAsset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // public System.String get_localizationKey()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_localizationKey() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartSO_1::get_localizationKey");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_localizationKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
    // public System.String get_id()
    // Offset: 0xFFFFFFFF
    // Implemented from: IAvatarPart
    // Base method: System.String IAvatarPart::get_id()
    ::Il2CppString* get_id() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartSO_1::get_id");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_id", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
    // public System.String get_localizedName()
    // Offset: 0xFFFFFFFF
    // Implemented from: IAvatarPart
    // Base method: System.String IAvatarPart::get_localizedName()
    ::Il2CppString* get_localizedName() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartSO_1::get_localizedName");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_localizedName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPartSO_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartSO_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPartSO_1<T>*, creationType>()));
    }
  }; // AvatarPartSO`1
  // Could not write size check! Type: AvatarPartSO`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::AvatarPartSO_1, "", "AvatarPartSO`1");
