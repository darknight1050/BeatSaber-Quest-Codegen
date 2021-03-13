// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoxCuttableBySaber
  class BoxCuttableBySaber;
  // Forward declaring type: NoteMovement
  class NoteMovement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ProModeTrailingCollidersController
  // [] Offset: FFFFFFFF
  class ProModeTrailingCollidersController : public UnityEngine::MonoBehaviour {
    public:
    // private BoxCuttableBySaber _mainSmallCuttableBySaber
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BoxCuttableBySaber* mainSmallCuttableBySaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoxCuttableBySaber*) == 0x8);
    // private BoxCuttableBySaber[] _trailingSmallCuttableBySaberList
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::BoxCuttableBySaber*>* trailingSmallCuttableBySaberList;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BoxCuttableBySaber*>*) == 0x8);
    // private NoteMovement _noteMovement
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NoteMovement* noteMovement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteMovement*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: ProModeTrailingCollidersController
    ProModeTrailingCollidersController(GlobalNamespace::BoxCuttableBySaber* mainSmallCuttableBySaber_ = {}, ::Array<GlobalNamespace::BoxCuttableBySaber*>* trailingSmallCuttableBySaberList_ = {}, GlobalNamespace::NoteMovement* noteMovement_ = {}, UnityEngine::Transform* transform_ = {}) noexcept : mainSmallCuttableBySaber{mainSmallCuttableBySaber_}, trailingSmallCuttableBySaberList{trailingSmallCuttableBySaberList_}, noteMovement{noteMovement_}, transform{transform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF9DA38
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF9DAD4
    void OnDestroy();
    // private System.Void HandleNoteDidMoveInJumpPhase()
    // Offset: 0xF9DBA8
    void HandleNoteDidMoveInJumpPhase();
    // public System.Void .ctor()
    // Offset: 0xF9DD50
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProModeTrailingCollidersController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ProModeTrailingCollidersController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProModeTrailingCollidersController*, creationType>()));
    }
  }; // ProModeTrailingCollidersController
  #pragma pack(pop)
  static check_size<sizeof(ProModeTrailingCollidersController), 48 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_ProModeTrailingCollidersControllerSizeCheck;
  static_assert(sizeof(ProModeTrailingCollidersController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ProModeTrailingCollidersController*, "", "ProModeTrailingCollidersController");
