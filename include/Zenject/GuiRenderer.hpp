// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GuiRenderableManager
  class GuiRenderableManager;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.GuiRenderer
  // [] Offset: FFFFFFFF
  class GuiRenderer : public UnityEngine::MonoBehaviour {
    public:
    // private Zenject.GuiRenderableManager _renderableManager
    // Size: 0x8
    // Offset: 0x18
    Zenject::GuiRenderableManager* renderableManager;
    // Field size check
    static_assert(sizeof(Zenject::GuiRenderableManager*) == 0x8);
    // Creating value type constructor for type: GuiRenderer
    GuiRenderer(Zenject::GuiRenderableManager* renderableManager_ = {}) noexcept : renderableManager{renderableManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Construct(Zenject.GuiRenderableManager renderableManager)
    // Offset: 0x1478658
    void Construct(Zenject::GuiRenderableManager* renderableManager);
    // public System.Void OnGUI()
    // Offset: 0x1478660
    void OnGUI();
    // public System.Void .ctor()
    // Offset: 0x1478678
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuiRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GuiRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuiRenderer*, creationType>()));
    }
  }; // Zenject.GuiRenderer
  #pragma pack(pop)
  static check_size<sizeof(GuiRenderer), 24 + sizeof(Zenject::GuiRenderableManager*)> __Zenject_GuiRendererSizeCheck;
  static_assert(sizeof(GuiRenderer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderer*, "Zenject", "GuiRenderer");
