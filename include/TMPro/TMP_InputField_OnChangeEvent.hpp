// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: TMPro.TMP_InputField
#include "TMPro/TMP_InputField.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_InputField/OnChangeEvent
  class TMP_InputField::OnChangeEvent : public UnityEngine::Events::UnityEvent_1<::CsString*> {
    public:
    // public System.Void .ctor()
    // Offset: 0xB97020
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent`1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_InputField::OnChangeEvent* New_ctor();
  }; // TMPro.TMP_InputField/OnChangeEvent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputField::OnChangeEvent*, "TMPro", "TMP_InputField/OnChangeEvent");
#pragma pack(pop)
