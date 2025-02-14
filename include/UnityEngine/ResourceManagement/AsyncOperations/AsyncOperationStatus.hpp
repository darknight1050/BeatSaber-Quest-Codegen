// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus
  struct AsyncOperationStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AsyncOperationStatus
    constexpr AsyncOperationStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus None
    static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus _get_None();
    // Set static field: static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus None
    static void _set_None(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus value);
    // static field const value: static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus Succeeded
    static constexpr const int Succeeded = 1;
    // Get static field: static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus Succeeded
    static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus _get_Succeeded();
    // Set static field: static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus Succeeded
    static void _set_Succeeded(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus value);
    // static field const value: static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus Failed
    static constexpr const int Failed = 2;
    // Get static field: static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus Failed
    static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus _get_Failed();
    // Set static field: static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus Failed
    static void _set_Failed(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus value);
  }; // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus
  #pragma pack(pop)
  static check_size<sizeof(AsyncOperationStatus), 0 + sizeof(int)> __UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationStatusSizeCheck;
  static_assert(sizeof(AsyncOperationStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationStatus");
