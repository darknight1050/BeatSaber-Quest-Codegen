// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: ReleaseInfoViewController
  class ReleaseInfoViewController : public HMUI::ViewController {
    public:
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private HMUI.TextPageScrollView _textPageScrollView
    // Size: 0x8
    // Offset: 0x78
    HMUI::TextPageScrollView* textPageScrollView;
    // Field size check
    static_assert(sizeof(HMUI::TextPageScrollView*) == 0x8);
    // private UnityEngine.TextAsset _releaseNotesTextAsset
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::TextAsset* releaseNotesTextAsset;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAsset*) == 0x8);
    // private UnityEngine.TextAsset _firstTextAsset
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::TextAsset* firstTextAsset;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAsset*) == 0x8);
    // Creating value type constructor for type: ReleaseInfoViewController
    ReleaseInfoViewController(GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, HMUI::TextPageScrollView* textPageScrollView_ = {}, UnityEngine::TextAsset* releaseNotesTextAsset_ = {}, UnityEngine::TextAsset* firstTextAsset_ = {}) noexcept : mainSettingsModel{mainSettingsModel_}, textPageScrollView{textPageScrollView_}, releaseNotesTextAsset{releaseNotesTextAsset_}, firstTextAsset{firstTextAsset_} {}
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10AC4C0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x10AC52C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReleaseInfoViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReleaseInfoViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReleaseInfoViewController*, creationType>()));
    }
  }; // ReleaseInfoViewController
  #pragma pack(pop)
  static check_size<sizeof(ReleaseInfoViewController), 136 + sizeof(UnityEngine::TextAsset*)> __GlobalNamespace_ReleaseInfoViewControllerSizeCheck;
  static_assert(sizeof(ReleaseInfoViewController) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReleaseInfoViewController*, "", "ReleaseInfoViewController");
