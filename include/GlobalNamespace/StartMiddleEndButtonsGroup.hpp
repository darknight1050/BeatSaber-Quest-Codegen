// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutController
#include "UnityEngine/UI/ILayoutController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: StartMiddleEndButtonsGroup
  class StartMiddleEndButtonsGroup : public UnityEngine::MonoBehaviour/*, public UnityEngine::UI::ILayoutController*/ {
    public:
    // Creating value type constructor for type: StartMiddleEndButtonsGroup
    StartMiddleEndButtonsGroup() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::UI::ILayoutController
    operator UnityEngine::UI::ILayoutController() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ILayoutController*>(this);
    }
    // public System.Void SetLayoutHorizontal()
    // Offset: 0x117E374
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0x117E478
    void SetLayoutVertical();
    // public System.Void .ctor()
    // Offset: 0x117E47C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StartMiddleEndButtonsGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StartMiddleEndButtonsGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StartMiddleEndButtonsGroup*, creationType>()));
    }
  }; // StartMiddleEndButtonsGroup
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StartMiddleEndButtonsGroup*, "", "StartMiddleEndButtonsGroup");
