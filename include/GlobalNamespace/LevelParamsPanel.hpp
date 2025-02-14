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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LevelParamsPanel
  class LevelParamsPanel : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _notesPerSecondText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* notesPerSecondText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _notesCountText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* notesCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _obstaclesCountText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* obstaclesCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _bombsCountText
    // Size: 0x8
    // Offset: 0x30
    TMPro::TextMeshProUGUI* bombsCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // Creating value type constructor for type: LevelParamsPanel
    LevelParamsPanel(TMPro::TextMeshProUGUI* notesPerSecondText_ = {}, TMPro::TextMeshProUGUI* notesCountText_ = {}, TMPro::TextMeshProUGUI* obstaclesCountText_ = {}, TMPro::TextMeshProUGUI* bombsCountText_ = {}) noexcept : notesPerSecondText{notesPerSecondText_}, notesCountText{notesCountText_}, obstaclesCountText{obstaclesCountText_}, bombsCountText{bombsCountText_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_notesPerSecond(System.Single value)
    // Offset: 0x11FAE98
    void set_notesPerSecond(float value);
    // public System.Void set_notesCount(System.Int32 value)
    // Offset: 0x11FAF18
    void set_notesCount(int value);
    // public System.Void set_obstaclesCount(System.Int32 value)
    // Offset: 0x11FAF5C
    void set_obstaclesCount(int value);
    // public System.Void set_bombsCount(System.Int32 value)
    // Offset: 0x11FAFA0
    void set_bombsCount(int value);
    // public System.Void .ctor()
    // Offset: 0x11FAFE4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelParamsPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelParamsPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelParamsPanel*, creationType>()));
    }
  }; // LevelParamsPanel
  #pragma pack(pop)
  static check_size<sizeof(LevelParamsPanel), 48 + sizeof(TMPro::TextMeshProUGUI*)> __GlobalNamespace_LevelParamsPanelSizeCheck;
  static_assert(sizeof(LevelParamsPanel) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelParamsPanel*, "", "LevelParamsPanel");
