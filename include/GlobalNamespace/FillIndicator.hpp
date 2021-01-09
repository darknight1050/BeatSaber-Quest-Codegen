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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: FillIndicator
  // [] Offset: FFFFFFFF
  class FillIndicator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Image _bgImage
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Image* bgImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _image
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* image;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: FillIndicator
    FillIndicator(UnityEngine::UI::Image* bgImage_ = {}, UnityEngine::UI::Image* image_ = {}) noexcept : bgImage{bgImage_}, image{image_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_fillAmount(System.Single value)
    // Offset: 0x1A11560
    void set_fillAmount(float value);
    // public System.Single get_fillAmount()
    // Offset: 0x1A115B0
    float get_fillAmount();
    // public System.Void .ctor()
    // Offset: 0x1A115CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FillIndicator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FillIndicator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FillIndicator*, creationType>()));
    }
  }; // FillIndicator
  static check_size<sizeof(FillIndicator), 32 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_FillIndicatorSizeCheck;
  static_assert(sizeof(FillIndicator) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FillIndicator*, "", "FillIndicator");
#pragma pack(pop)
