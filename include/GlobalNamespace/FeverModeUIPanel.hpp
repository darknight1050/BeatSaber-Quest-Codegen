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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: FeverModeUIPanel
  // [] Offset: FFFFFFFF
  class FeverModeUIPanel : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _feverBGTextRectTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* feverBGTextRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [InjectAttribute] Offset: 0xD24F9C
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // private System.Single _feverTextRectWidth
    // Size: 0x4
    // Offset: 0x28
    float feverTextRectWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: FeverModeUIPanel
    FeverModeUIPanel(UnityEngine::RectTransform* feverBGTextRectTransform_ = {}, GlobalNamespace::IScoreController* scoreController_ = {}, float feverTextRectWidth_ = {}) noexcept : feverBGTextRectTransform{feverBGTextRectTransform_}, scoreController{scoreController_}, feverTextRectWidth{feverTextRectWidth_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF2AC5C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF2AF0C
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xF2B14C
    void Update();
    // private System.Void SetProgress(System.Single progress)
    // Offset: 0xF2AEA8
    void SetProgress(float progress);
    // private System.Void HandleFeverModeDidStart()
    // Offset: 0xF2B298
    void HandleFeverModeDidStart();
    // private System.Void HandleFeverModeDidFinish()
    // Offset: 0xF2B2A0
    void HandleFeverModeDidFinish();
    // private System.Void HandleFeverModeChargeProgressDidChange(System.Single progress)
    // Offset: 0xF2B2A8
    void HandleFeverModeChargeProgressDidChange(float progress);
    // public System.Void .ctor()
    // Offset: 0xF2B2AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FeverModeUIPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FeverModeUIPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FeverModeUIPanel*, creationType>()));
    }
  }; // FeverModeUIPanel
  #pragma pack(pop)
  static check_size<sizeof(FeverModeUIPanel), 40 + sizeof(float)> __GlobalNamespace_FeverModeUIPanelSizeCheck;
  static_assert(sizeof(FeverModeUIPanel) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FeverModeUIPanel*, "", "FeverModeUIPanel");
