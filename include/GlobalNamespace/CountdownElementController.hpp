// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: CountdownElementController
  // [] Offset: FFFFFFFF
  class CountdownElementController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // Creating value type constructor for type: CountdownElementController
    CountdownElementController(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::Animation* animation_ = {}) noexcept : text{text_}, animation{animation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetTextAndRunAnimation(System.String text)
    // Offset: 0x1A54AC0
    void SetTextAndRunAnimation(::Il2CppString* text);
    // public System.Void StopAndHide()
    // Offset: 0x1A54C14
    void StopAndHide();
    // public System.Void .ctor()
    // Offset: 0x1A54DAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownElementController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CountdownElementController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownElementController*, creationType>()));
    }
  }; // CountdownElementController
  static check_size<sizeof(CountdownElementController), 32 + sizeof(UnityEngine::Animation*)> __GlobalNamespace_CountdownElementControllerSizeCheck;
  static_assert(sizeof(CountdownElementController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CountdownElementController*, "", "CountdownElementController");
#pragma pack(pop)
