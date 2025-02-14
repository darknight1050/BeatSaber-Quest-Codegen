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
  // Forward declaring type: MissionDataSO
  class MissionDataSO;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MissionNode
  // [SelectionBaseAttribute] Offset: E111AC
  class MissionNode : public UnityEngine::MonoBehaviour {
    public:
    // private MissionDataSO _missionDataSO
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionDataSO* missionDataSO;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionDataSO*) == 0x8);
    // private System.String _letterPartName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* letterPartName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _numberPartName
    // Size: 0x4
    // Offset: 0x28
    int numberPartName;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberPartName and: rectTransform
    char __padding2[0x4] = {};
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private MissionNodeVisualController _missionNodeVisualController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MissionNodeVisualController* missionNodeVisualController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodeVisualController*) == 0x8);
    // [SpaceAttribute] Offset: 0xE23704
    // private MissionNode[] _childNodes
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::MissionNode*>* childNodes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionNode*>*) == 0x8);
    // Creating value type constructor for type: MissionNode
    MissionNode(GlobalNamespace::MissionDataSO* missionDataSO_ = {}, ::Il2CppString* letterPartName_ = {}, int numberPartName_ = {}, UnityEngine::RectTransform* rectTransform_ = {}, GlobalNamespace::MissionNodeVisualController* missionNodeVisualController_ = {}, ::Array<GlobalNamespace::MissionNode*>* childNodes_ = {}) noexcept : missionDataSO{missionDataSO_}, letterPartName{letterPartName_}, numberPartName{numberPartName_}, rectTransform{rectTransform_}, missionNodeVisualController{missionNodeVisualController_}, childNodes{childNodes_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MissionDataSO get_missionData()
    // Offset: 0x10537CC
    GlobalNamespace::MissionDataSO* get_missionData();
    // public MissionNode[] get_childNodes()
    // Offset: 0x10537D4
    ::Array<GlobalNamespace::MissionNode*>* get_childNodes();
    // public MissionNodeVisualController get_missionNodeVisualController()
    // Offset: 0x10537DC
    GlobalNamespace::MissionNodeVisualController* get_missionNodeVisualController();
    // public System.String get_letterPartName()
    // Offset: 0x10537E4
    ::Il2CppString* get_letterPartName();
    // public System.Int32 get_numberPartName()
    // Offset: 0x10537EC
    int get_numberPartName();
    // public System.String get_missionId()
    // Offset: 0x104EFF0
    ::Il2CppString* get_missionId();
    // public System.String get_formattedMissionNodeName()
    // Offset: 0x10537F4
    ::Il2CppString* get_formattedMissionNodeName();
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x1052A80
    UnityEngine::Vector2 get_position();
    // public System.Single get_radius()
    // Offset: 0x1053878
    float get_radius();
    // public System.Void .ctor()
    // Offset: 0x10538BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNode*, creationType>()));
    }
  }; // MissionNode
  #pragma pack(pop)
  static check_size<sizeof(MissionNode), 64 + sizeof(::Array<GlobalNamespace::MissionNode*>*)> __GlobalNamespace_MissionNodeSizeCheck;
  static_assert(sizeof(MissionNode) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNode*, "", "MissionNode");
