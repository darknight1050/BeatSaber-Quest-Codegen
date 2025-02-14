// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Cache
  // [StaticAccessorAttribute] Offset: D8E058
  // [NativeHeaderAttribute] Offset: D8E058
  struct Cache/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Cache>*/ {
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Cache
    constexpr Cache(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Cache>
    operator System::IEquatable_1<UnityEngine::Cache>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Cache>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // System.Int32 get_handle()
    // Offset: 0xF066B0
    int get_handle();
    // public System.Boolean Equals(UnityEngine.Cache other)
    // Offset: 0xF066C8
    bool Equals(UnityEngine::Cache other);
    // public System.Boolean get_valid()
    // Offset: 0xF066D8
    bool get_valid();
    // static System.Boolean Cache_IsValid(System.Int32 handle)
    // Offset: 0x1B7148C
    static bool Cache_IsValid(int handle);
    // public System.String get_path()
    // Offset: 0xF06718
    ::Il2CppString* get_path();
    // static System.String Cache_GetPath(System.Int32 handle)
    // Offset: 0x1B7150C
    static ::Il2CppString* Cache_GetPath(int handle);
    // public System.Void set_maximumAvailableStorageSpace(System.Int64 value)
    // Offset: 0xF06758
    void set_maximumAvailableStorageSpace(int64_t value);
    // static System.Void Cache_SetMaximumDiskSpaceAvailable(System.Int32 handle, System.Int64 value)
    // Offset: 0x1B7159C
    static void Cache_SetMaximumDiskSpaceAvailable(int handle, int64_t value);
    // public System.Void set_expirationDelay(System.Int32 value)
    // Offset: 0xF067A8
    void set_expirationDelay(int value);
    // static System.Void Cache_SetExpirationDelay(System.Int32 handle, System.Int32 value)
    // Offset: 0x1B7163C
    static void Cache_SetExpirationDelay(int handle, int value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF066B8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF066C0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Cache
  #pragma pack(pop)
  static check_size<sizeof(Cache), 0 + sizeof(int)> __UnityEngine_CacheSizeCheck;
  static_assert(sizeof(Cache) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Cache, "UnityEngine", "Cache");
