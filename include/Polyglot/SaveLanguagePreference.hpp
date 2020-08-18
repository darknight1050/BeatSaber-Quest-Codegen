// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.SaveLanguagePreference
  class SaveLanguagePreference : public Polyglot::ILocalize, public UnityEngine::MonoBehaviour {
    public:
    // private System.String preferenceKey
    // Offset: 0x18
    ::Il2CppString* preferenceKey;
    // public System.Void Start()
    // Offset: 0x186DCFC
    void Start();
    // public System.Void OnLocalize()
    // Offset: 0x186DD50
    // Implemented from: Polyglot.ILocalize
    // Base method: System.Void ILocalize::OnLocalize()
    void OnLocalize();
    // public System.Void .ctor()
    // Offset: 0x186DD84
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaveLanguagePreference* New_ctor();
  }; // Polyglot.SaveLanguagePreference
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::SaveLanguagePreference*, "Polyglot", "SaveLanguagePreference");
#pragma pack(pop)
