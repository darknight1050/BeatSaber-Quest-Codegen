// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Il2CppDummyDll
namespace Il2CppDummyDll {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppDummyDll.MetadataOffsetAttribute
  class MetadataOffsetAttribute : public System::Attribute {
    public:
    // public System.String Offset
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Offset;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MetadataOffsetAttribute
    MetadataOffsetAttribute(::Il2CppString* Offset_ = {}) noexcept : Offset{Offset_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Offset;
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetadataOffsetAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Il2CppDummyDll::MetadataOffsetAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetadataOffsetAttribute*, creationType>()));
    }
  }; // Il2CppDummyDll.MetadataOffsetAttribute
}
DEFINE_IL2CPP_ARG_TYPE(Il2CppDummyDll::MetadataOffsetAttribute*, "Il2CppDummyDll", "MetadataOffsetAttribute");
