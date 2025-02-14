// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTimeOffset
#include "System/DateTimeOffset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: EntityTagHeaderValue
  class EntityTagHeaderValue;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.RangeConditionHeaderValue
  class RangeConditionHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE5D9C
    // private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    System::Nullable_1<System::DateTimeOffset> Date;
    // [CompilerGeneratedAttribute] Offset: 0xDE5DAC
    // private System.Net.Http.Headers.EntityTagHeaderValue <EntityTag>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    System::Net::Http::Headers::EntityTagHeaderValue* EntityTag;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::EntityTagHeaderValue*) == 0x8);
    // Creating value type constructor for type: RangeConditionHeaderValue
    RangeConditionHeaderValue(System::Nullable_1<System::DateTimeOffset> Date_ = {}, System::Net::Http::Headers::EntityTagHeaderValue* EntityTag_ = {}) noexcept : Date{Date_}, EntityTag{EntityTag_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Void .ctor(System.DateTimeOffset date)
    // Offset: 0x157F390
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangeConditionHeaderValue* New_ctor(System::DateTimeOffset date) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::RangeConditionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangeConditionHeaderValue*, creationType>(date)));
    }
    // public System.Void .ctor(System.Net.Http.Headers.EntityTagHeaderValue entityTag)
    // Offset: 0x157F428
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangeConditionHeaderValue* New_ctor(System::Net::Http::Headers::EntityTagHeaderValue* entityTag) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::RangeConditionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangeConditionHeaderValue*, creationType>(entityTag)));
    }
    // public System.Nullable`1<System.DateTimeOffset> get_Date()
    // Offset: 0x157F4C4
    System::Nullable_1<System::DateTimeOffset> get_Date();
    // private System.Void set_Date(System.Nullable`1<System.DateTimeOffset> value)
    // Offset: 0x157F4D8
    void set_Date(System::Nullable_1<System::DateTimeOffset> value);
    // public System.Net.Http.Headers.EntityTagHeaderValue get_EntityTag()
    // Offset: 0x157F4EC
    System::Net::Http::Headers::EntityTagHeaderValue* get_EntityTag();
    // private System.Void set_EntityTag(System.Net.Http.Headers.EntityTagHeaderValue value)
    // Offset: 0x157F4F4
    void set_EntityTag(System::Net::Http::Headers::EntityTagHeaderValue* value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x157F4FC
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.RangeConditionHeaderValue parsedValue)
    // Offset: 0x157F6C0
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::RangeConditionHeaderValue*& parsedValue);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x157F504
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x157F634
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x157F904
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.RangeConditionHeaderValue
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::RangeConditionHeaderValue*, "System.Net.Http.Headers", "RangeConditionHeaderValue");
