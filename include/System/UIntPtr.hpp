// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.UIntPtr
  // [] Offset: FFFFFFFF
  // [CLSCompliantAttribute] Offset: C93C5C
  // [ComVisibleAttribute] Offset: C93C5C
  struct UIntPtr/*, public System::ValueType, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Void* _pointer
    // Size: 0x8
    // Offset: 0x0
    void* pointer;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // Creating value type constructor for type: UIntPtr
    constexpr UIntPtr(void* pointer_ = {}) noexcept : pointer{pointer_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator void*
    constexpr operator void*() const noexcept {
      return pointer;
    }
    // Get static field: static public readonly System.UIntPtr Zero
    static System::UIntPtr _get_Zero();
    // Set static field: static public readonly System.UIntPtr Zero
    static void _set_Zero(System::UIntPtr value);
    // public System.Void .ctor(System.UInt64 value)
    // Offset: 0xE0D7EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    UIntPtr(uint64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::UIntPtr::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.Void .ctor(System.UInt32 value)
    // Offset: 0xE0D7F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    UIntPtr(uint value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::UIntPtr::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xE0D818
    void System_Runtime_Serialization_ISerializable_GetObjectData_NEW(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static public System.UInt64 op_Explicit(System.UIntPtr value)
    // Offset: 0x20D9618
    explicit operator uint64_t();
    // static public System.UInt32 op_Explicit(System.UIntPtr value)
    // Offset: 0x20D961C
    explicit operator uint();
    // static public System.UIntPtr op_Explicit(System.UInt64 value)
    // Offset: 0x20D9620
    explicit UIntPtr(uint64_t& value);
    // static public System.Int32 get_Size()
    // Offset: 0x20D9448
    static int get_Size();
    // static private System.Void .cctor()
    // Offset: 0x20D964C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE0D800
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE0D808
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xE0D810
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.UIntPtr
  #pragma pack(pop)
  static check_size<sizeof(UIntPtr), 0 + sizeof(void*)> __System_UIntPtrSizeCheck;
  static_assert(sizeof(UIntPtr) == 0x8);
  // static public System.Boolean op_Equality(System.UIntPtr value1, System.UIntPtr value2)
  // Offset: 0x20D960C
  bool operator ==(const System::UIntPtr& value1, const System::UIntPtr& value2);
}
DEFINE_IL2CPP_ARG_TYPE(System::UIntPtr, "System", "UIntPtr");
