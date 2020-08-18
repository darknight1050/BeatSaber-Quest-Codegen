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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.VerticalScrollIndicator
  class VerticalScrollIndicator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _handle
    // Offset: 0x18
    UnityEngine::RectTransform* handle;
    // private System.Single _progress
    // Offset: 0x20
    float progress;
    // private System.Single _normalizedPageHeight
    // Offset: 0x24
    float normalizedPageHeight;
    // public System.Void set_progress(System.Single value)
    // Offset: 0x103EF70
    void set_progress(float value);
    // public System.Single get_progress()
    // Offset: 0x104919C
    float get_progress();
    // public System.Void set_normalizedPageHeight(System.Single value)
    // Offset: 0x103EB34
    void set_normalizedPageHeight(float value);
    // public System.Single get_normalizedPageHeight()
    // Offset: 0x10491A4
    float get_normalizedPageHeight();
    // protected System.Void Awake()
    // Offset: 0x10491AC
    void Awake();
    // private System.Void RefreshHandle()
    // Offset: 0x1049088
    void RefreshHandle();
    // public System.Void .ctor()
    // Offset: 0x10491B0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VerticalScrollIndicator* New_ctor();
  }; // HMUI.VerticalScrollIndicator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::VerticalScrollIndicator*, "HMUI", "VerticalScrollIndicator");
#pragma pack(pop)
