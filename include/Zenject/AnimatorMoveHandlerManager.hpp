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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IAnimatorMoveHandler
  class IAnimatorMoveHandler;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.AnimatorMoveHandlerManager
  class AnimatorMoveHandlerManager : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.List`1<Zenject.IAnimatorMoveHandler> _handlers
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>* handlers;
    // public System.Void Construct(System.Collections.Generic.List`1<Zenject.IAnimatorMoveHandler> handlers)
    // Offset: 0xCC42A8
    void Construct(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>* handlers);
    // public System.Void OnAnimatorMove()
    // Offset: 0xCC42B0
    void OnAnimatorMove();
    // public System.Void .ctor()
    // Offset: 0xCC4410
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AnimatorMoveHandlerManager* New_ctor();
  }; // Zenject.AnimatorMoveHandlerManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::AnimatorMoveHandlerManager*, "Zenject", "AnimatorMoveHandlerManager");
#pragma pack(pop)
