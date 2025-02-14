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
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Scripting.RequiredByNativeCodeAttribute
  // [AttributeUsageAttribute] Offset: D8BBB4
  // [VisibleToOtherModulesAttribute] Offset: D8BBB4
  class RequiredByNativeCodeAttribute : public System::Attribute {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xD8C16C
    // [CompilerGeneratedAttribute] Offset: 0xD8C16C
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD8C1A8
    // [DebuggerBrowsableAttribute] Offset: 0xD8C1A8
    // private System.Boolean <Optional>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool Optional;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xD8C1E4
    // [CompilerGeneratedAttribute] Offset: 0xD8C1E4
    // private System.Boolean <GenerateProxy>k__BackingField
    // Size: 0x1
    // Offset: 0x19
    bool GenerateProxy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RequiredByNativeCodeAttribute
    RequiredByNativeCodeAttribute(::Il2CppString* Name_ = {}, bool Optional_ = {}, bool GenerateProxy_ = {}) noexcept : Name{Name_}, Optional{Optional_}, GenerateProxy{GenerateProxy_} {}
    // public System.Void .ctor(System.String name)
    // Offset: 0x23D0E64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequiredByNativeCodeAttribute* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::RequiredByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequiredByNativeCodeAttribute*, creationType>(name)));
    }
    // public System.Void set_Name(System.String value)
    // Offset: 0x23D0E90
    void set_Name(::Il2CppString* value);
    // public System.Void set_Optional(System.Boolean value)
    // Offset: 0x23D0E98
    void set_Optional(bool value);
    // public System.Void set_GenerateProxy(System.Boolean value)
    // Offset: 0x23D0EA4
    void set_GenerateProxy(bool value);
    // public System.Void .ctor()
    // Offset: 0x23D0E5C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequiredByNativeCodeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::RequiredByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequiredByNativeCodeAttribute*, creationType>()));
    }
  }; // UnityEngine.Scripting.RequiredByNativeCodeAttribute
  #pragma pack(pop)
  static check_size<sizeof(RequiredByNativeCodeAttribute), 25 + sizeof(bool)> __UnityEngine_Scripting_RequiredByNativeCodeAttributeSizeCheck;
  static_assert(sizeof(RequiredByNativeCodeAttribute) == 0x1A);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::RequiredByNativeCodeAttribute*, "UnityEngine.Scripting", "RequiredByNativeCodeAttribute");
