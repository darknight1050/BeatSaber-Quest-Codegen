// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TrackedReference
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: CA89E0
  class TrackedReference : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: TrackedReference
    TrackedReference(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // protected System.Void .ctor()
    // Offset: 0x19860A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackedReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TrackedReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackedReference*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1986144
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals_NEW(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19861D4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode_NEW()
    int GetHashCode();
  }; // UnityEngine.TrackedReference
  #pragma pack(pop)
  static check_size<sizeof(TrackedReference), 16 + sizeof(System::IntPtr)> __UnityEngine_TrackedReferenceSizeCheck;
  static_assert(sizeof(TrackedReference) == 0x18);
  // static public System.Boolean op_Equality(UnityEngine.TrackedReference x, UnityEngine.TrackedReference y)
  // Offset: 0x19860AC
  bool operator ==(UnityEngine::TrackedReference* x, UnityEngine::TrackedReference& y);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TrackedReference*, "UnityEngine", "TrackedReference");
