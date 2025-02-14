// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshPathStatus
  struct NavMeshPathStatus;
}
// Completed forward declares
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AI.NavMeshPath
  // [NativeHeaderAttribute] Offset: DE6A2C
  // [MovedFromAttribute] Offset: DE6A2C
  class NavMeshPath : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // UnityEngine.Vector3[] m_Corners
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Vector3>* m_Corners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: NavMeshPath
    NavMeshPath(System::IntPtr m_Ptr_ = {}, ::Array<UnityEngine::Vector3>* m_Corners_ = {}) noexcept : m_Ptr{m_Ptr_}, m_Corners{m_Corners_} {}
    // static private System.IntPtr InitializeNavMeshPath()
    // Offset: 0x23D74E0
    static System::IntPtr InitializeNavMeshPath();
    // static private System.Void DestroyNavMeshPath(System.IntPtr ptr)
    // Offset: 0x23D75D8
    static void DestroyNavMeshPath(System::IntPtr ptr);
    // private UnityEngine.Vector3[] CalculateCornersInternal()
    // Offset: 0x23D7618
    ::Array<UnityEngine::Vector3>* CalculateCornersInternal();
    // private System.Void ClearCornersInternal()
    // Offset: 0x23D7658
    void ClearCornersInternal();
    // public System.Void ClearCorners()
    // Offset: 0x23D7234
    void ClearCorners();
    // private System.Void CalculateCorners()
    // Offset: 0x23D7698
    void CalculateCorners();
    // public UnityEngine.Vector3[] get_corners()
    // Offset: 0x23D76EC
    ::Array<UnityEngine::Vector3>* get_corners();
    // public UnityEngine.AI.NavMeshPathStatus get_status()
    // Offset: 0x23D773C
    UnityEngine::AI::NavMeshPathStatus get_status();
    // public System.Void .ctor()
    // Offset: 0x23D7494
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavMeshPath* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AI::NavMeshPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavMeshPath*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x23D7514
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AI.NavMeshPath
  #pragma pack(pop)
  static check_size<sizeof(NavMeshPath), 24 + sizeof(::Array<UnityEngine::Vector3>*)> __UnityEngine_AI_NavMeshPathSizeCheck;
  static_assert(sizeof(NavMeshPath) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMeshPath*, "UnityEngine.AI", "NavMeshPath");
