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
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Dropdown
  class Dropdown;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.LanguageDropdown
  class LanguageDropdown : public Polyglot::ILocalize, public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Dropdown dropdown
    // Offset: 0x18
    UnityEngine::UI::Dropdown* dropdown;
    // public System.Void Reset()
    // Offset: 0x186A984
    void Reset();
    // public System.Void Start()
    // Offset: 0x186A9E4
    void Start();
    // private System.Void CreateDropdown()
    // Offset: 0x186AA14
    void CreateDropdown();
    // public System.Void OnLocalize()
    // Offset: 0x186AF04
    // Implemented from: Polyglot.ILocalize
    // Base method: System.Void ILocalize::OnLocalize()
    void OnLocalize();
    // public System.Void .ctor()
    // Offset: 0x186B038
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LanguageDropdown* New_ctor();
  }; // Polyglot.LanguageDropdown
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LanguageDropdown*, "Polyglot", "LanguageDropdown");
#pragma pack(pop)
