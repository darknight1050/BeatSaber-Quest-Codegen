// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Autogenerated type: ObjectiveListItem
  class ObjectiveListItem : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _titleText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* titleText;
    // private TMPro.TextMeshProUGUI _conditionText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* conditionText;
    // public System.Void set_title(System.String value)
    // Offset: 0xBA6B18
    void set_title(::Il2CppString* value);
    // public System.Void set_conditionText(System.String value)
    // Offset: 0xBA6B34
    void set_conditionText(::Il2CppString* value);
    // public System.Void set_hideCondition(System.Boolean value)
    // Offset: 0xBA6B50
    void set_hideCondition(bool value);
    // public System.Void .ctor()
    // Offset: 0xBA6B90
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ObjectiveListItem* New_ctor();
  }; // ObjectiveListItem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObjectiveListItem*, "", "ObjectiveListItem");
#pragma pack(pop)
