// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ResourceRequest
  class ResourceRequest : public UnityEngine::AsyncOperation {
    public:
    // System.String m_Path
    // Offset: 0x20
    ::CsString* m_Path;
    // System.Type m_Type
    // Offset: 0x28
    System::Type* m_Type;
  }; // UnityEngine.ResourceRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceRequest*, "UnityEngine", "ResourceRequest");
#pragma pack(pop)
