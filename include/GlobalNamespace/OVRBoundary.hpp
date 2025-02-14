// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRNativeBuffer
  class OVRNativeBuffer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRBoundary
  class OVRBoundary : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRBoundary::Node
    struct Node;
    // Nested type: GlobalNamespace::OVRBoundary::BoundaryType
    struct BoundaryType;
    // Nested type: GlobalNamespace::OVRBoundary::BoundaryTestResult
    struct BoundaryTestResult;
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> cachedGeometryList
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Vector3>* cachedGeometryList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: OVRBoundary
    OVRBoundary(System::Collections::Generic::List_1<UnityEngine::Vector3>* cachedGeometryList_ = {}) noexcept : cachedGeometryList{cachedGeometryList_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<UnityEngine::Vector3>*
    constexpr operator System::Collections::Generic::List_1<UnityEngine::Vector3>*() const noexcept {
      return cachedGeometryList;
    }
    // Get static field: static private System.Int32 cachedVector3fSize
    static int _get_cachedVector3fSize();
    // Set static field: static private System.Int32 cachedVector3fSize
    static void _set_cachedVector3fSize(int value);
    // Get static field: static private OVRNativeBuffer cachedGeometryNativeBuffer
    static GlobalNamespace::OVRNativeBuffer* _get_cachedGeometryNativeBuffer();
    // Set static field: static private OVRNativeBuffer cachedGeometryNativeBuffer
    static void _set_cachedGeometryNativeBuffer(GlobalNamespace::OVRNativeBuffer* value);
    // Get static field: static private System.Single[] cachedGeometryManagedBuffer
    static ::Array<float>* _get_cachedGeometryManagedBuffer();
    // Set static field: static private System.Single[] cachedGeometryManagedBuffer
    static void _set_cachedGeometryManagedBuffer(::Array<float>* value);
    // public System.Boolean GetConfigured()
    // Offset: 0x125E64C
    bool GetConfigured();
    // public OVRBoundary/BoundaryTestResult TestNode(OVRBoundary/Node node, OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x125E6F0
    GlobalNamespace::OVRBoundary::BoundaryTestResult TestNode(GlobalNamespace::OVRBoundary::Node node, GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public OVRBoundary/BoundaryTestResult TestPoint(UnityEngine.Vector3 point, OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x125E7CC
    GlobalNamespace::OVRBoundary::BoundaryTestResult TestPoint(UnityEngine::Vector3 point, GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public UnityEngine.Vector3[] GetGeometry(OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x125E8CC
    ::Array<UnityEngine::Vector3>* GetGeometry(GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public UnityEngine.Vector3 GetDimensions(OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x125ECEC
    UnityEngine::Vector3 GetDimensions(GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public System.Boolean GetVisible()
    // Offset: 0x125EDF0
    bool GetVisible();
    // public System.Void SetVisible(System.Boolean value)
    // Offset: 0x125EE94
    void SetVisible(bool value);
    // static private System.Void .cctor()
    // Offset: 0x125EFB4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x125EF44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBoundary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRBoundary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBoundary*, creationType>()));
    }
  }; // OVRBoundary
  #pragma pack(pop)
  static check_size<sizeof(OVRBoundary), 16 + sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*)> __GlobalNamespace_OVRBoundarySizeCheck;
  static_assert(sizeof(OVRBoundary) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBoundary*, "", "OVRBoundary");
