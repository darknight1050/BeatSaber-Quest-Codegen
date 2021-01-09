// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: LineLightManager
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: DA4350
  class LineLightManager : public UnityEngine::MonoBehaviour {
    public:
    // private readonly UnityEngine.Vector4[] _points
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Vector4>* points;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private readonly UnityEngine.Vector4[] _dirs
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Vector4>* dirs;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private readonly System.Single[] _dirLengths
    // Size: 0x8
    // Offset: 0x28
    ::Array<float>* dirLengths;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private readonly UnityEngine.Vector4[] _colors
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::Vector4>* colors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // Creating value type constructor for type: LineLightManager
    LineLightManager(::Array<UnityEngine::Vector4>* points_ = {}, ::Array<UnityEngine::Vector4>* dirs_ = {}, ::Array<float>* dirLengths_ = {}, ::Array<UnityEngine::Vector4>* colors_ = {}) noexcept : points{points_}, dirs{dirs_}, dirLengths{dirLengths_}, colors{colors_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxNumberOfLights
    static constexpr const int kMaxNumberOfLights = 4;
    // Get static field: static private System.Int32 kMaxNumberOfLights
    static int _get_kMaxNumberOfLights();
    // Set static field: static private System.Int32 kMaxNumberOfLights
    static void _set_kMaxNumberOfLights(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA5678
    // Get static field: static private readonly System.Int32 _activeLineLightsCountID
    static int _get__activeLineLightsCountID();
    // Set static field: static private readonly System.Int32 _activeLineLightsCountID
    static void _set__activeLineLightsCountID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA5688
    // Get static field: static private readonly System.Int32 _lineLightPointsID
    static int _get__lineLightPointsID();
    // Set static field: static private readonly System.Int32 _lineLightPointsID
    static void _set__lineLightPointsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA5698
    // Get static field: static private readonly System.Int32 _lineLightDirsID
    static int _get__lineLightDirsID();
    // Set static field: static private readonly System.Int32 _lineLightDirsID
    static void _set__lineLightDirsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA56A8
    // Get static field: static private readonly System.Int32 _lineLightDirLengthsID
    static int _get__lineLightDirLengthsID();
    // Set static field: static private readonly System.Int32 _lineLightDirLengthsID
    static void _set__lineLightDirLengthsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA56B8
    // Get static field: static private readonly System.Int32 _lineLightColorsID
    static int _get__lineLightColorsID();
    // Set static field: static private readonly System.Int32 _lineLightColorsID
    static void _set__lineLightColorsID(int value);
    // protected System.Void Update()
    // Offset: 0x187D2DC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x187D6B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LineLightManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LineLightManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LineLightManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x187D780
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // LineLightManager
  static check_size<sizeof(LineLightManager), 48 + sizeof(::Array<UnityEngine::Vector4>*)> __GlobalNamespace_LineLightManagerSizeCheck;
  static_assert(sizeof(LineLightManager) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LineLightManager*, "", "LineLightManager");
#pragma pack(pop)
