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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorStepValuePicker
  class ColorStepValuePicker;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: IncDecColorController
  // [] Offset: FFFFFFFF
  class IncDecColorController : public UnityEngine::MonoBehaviour {
    public:
    // private ColorStepValuePicker _stepValuePicker
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorStepValuePicker* stepValuePicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorStepValuePicker*) == 0x8);
    // Creating value type constructor for type: IncDecColorController
    IncDecColorController(GlobalNamespace::ColorStepValuePicker* stepValuePicker_ = {}) noexcept : stepValuePicker{stepValuePicker_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void set_enableDec(System.Boolean value)
    // Offset: 0xF1AE98
    void set_enableDec(bool value);
    // protected System.Void set_enableInc(System.Boolean value)
    // Offset: 0xF1AEB8
    void set_enableInc(bool value);
    // protected System.Void set_color(UnityEngine.Color value)
    // Offset: 0xF1AED8
    void set_color(UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0xF1AEF4
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF1AFB8
    void OnDestroy();
    // protected System.Void IncButtonPressed()
    // Offset: 0xFFFFFFFF
    void IncButtonPressed();
    // protected System.Void DecButtonPressed()
    // Offset: 0xFFFFFFFF
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0xF1B0C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IncDecColorController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IncDecColorController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IncDecColorController*, creationType>()));
    }
  }; // IncDecColorController
  static check_size<sizeof(IncDecColorController), 24 + sizeof(GlobalNamespace::ColorStepValuePicker*)> __GlobalNamespace_IncDecColorControllerSizeCheck;
  static_assert(sizeof(IncDecColorController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IncDecColorController*, "", "IncDecColorController");
#pragma pack(pop)
