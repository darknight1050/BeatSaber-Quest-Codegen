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
  // Forward declaring type: CrashManagerSO
  class CrashManagerSO;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CrashInfoViewController
  // [] Offset: FFFFFFFF
  class CrashInfoViewController : public UnityEngine::MonoBehaviour {
    public:
    // private CrashManagerSO _crashManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::CrashManagerSO* crashManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CrashManagerSO*) == 0x8);
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // Creating value type constructor for type: CrashInfoViewController
    CrashInfoViewController(GlobalNamespace::CrashManagerSO* crashManager_ = {}, TMPro::TextMeshProUGUI* text_ = {}) noexcept : crashManager{crashManager_}, text{text_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFD7FA0
    void Start();
    // public System.Void .ctor()
    // Offset: 0xFD8018
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrashInfoViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CrashInfoViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrashInfoViewController*, creationType>()));
    }
  }; // CrashInfoViewController
  #pragma pack(pop)
  static check_size<sizeof(CrashInfoViewController), 32 + sizeof(TMPro::TextMeshProUGUI*)> __GlobalNamespace_CrashInfoViewControllerSizeCheck;
  static_assert(sizeof(CrashInfoViewController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CrashInfoViewController*, "", "CrashInfoViewController");
