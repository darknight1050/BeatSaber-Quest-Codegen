// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceTypeCode
  struct ResourceTypeCode;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Resources.ResourceLocator
  struct ResourceLocator/*, public System::ValueType*/ {
    public:
    // System.Object _value
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 _dataPos
    // Size: 0x4
    // Offset: 0x8
    int dataPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ResourceLocator
    constexpr ResourceLocator(::Il2CppObject* value_ = {}, int dataPos_ = {}) noexcept : value{value_}, dataPos{dataPos_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // System.Void .ctor(System.Int32 dataPos, System.Object value)
    // Offset: 0xEEBCB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ResourceLocator(int dataPos, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::ResourceLocator::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dataPos), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, dataPos, value);
    }
    // System.Int32 get_DataPosition()
    // Offset: 0xEEBCC0
    int get_DataPosition();
    // System.Object get_Value()
    // Offset: 0xEEBCC8
    ::Il2CppObject* get_Value();
    // System.Void set_Value(System.Object value)
    // Offset: 0xEEBCD0
    void set_Value(::Il2CppObject* value);
    // static System.Boolean CanCache(System.Resources.ResourceTypeCode value)
    // Offset: 0x13FA3EC
    static bool CanCache(System::Resources::ResourceTypeCode value);
  }; // System.Resources.ResourceLocator
  #pragma pack(pop)
  static check_size<sizeof(ResourceLocator), 8 + sizeof(int)> __System_Resources_ResourceLocatorSizeCheck;
  static_assert(sizeof(ResourceLocator) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceLocator, "System.Resources", "ResourceLocator");
