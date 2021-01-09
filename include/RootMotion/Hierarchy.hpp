// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  // Autogenerated type: RootMotion.Hierarchy
  // [] Offset: FFFFFFFF
  class Hierarchy : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Hierarchy
    Hierarchy() noexcept {}
    // static public System.Boolean HierarchyIsValid(UnityEngine.Transform[] bones)
    // Offset: 0x15F01FC
    static bool HierarchyIsValid(::Array<UnityEngine::Transform*>* bones);
    // static public UnityEngine.Object ContainsDuplicate(UnityEngine.Object[] objects)
    // Offset: 0x15F03FC
    static UnityEngine::Object* ContainsDuplicate(::Array<UnityEngine::Object*>* objects);
    // static public System.Boolean IsAncestor(UnityEngine.Transform transform, UnityEngine.Transform ancestor)
    // Offset: 0x15F0294
    static bool IsAncestor(UnityEngine::Transform* transform, UnityEngine::Transform* ancestor);
    // static public System.Boolean ContainsChild(UnityEngine.Transform transform, UnityEngine.Transform child)
    // Offset: 0x15F0520
    static bool ContainsChild(UnityEngine::Transform* transform, UnityEngine::Transform* child);
    // static public System.Void AddAncestors(UnityEngine.Transform transform, UnityEngine.Transform blocker, ref UnityEngine.Transform[] array)
    // Offset: 0x15F0644
    static void AddAncestors(UnityEngine::Transform* transform, UnityEngine::Transform* blocker, ::Array<UnityEngine::Transform*>*& array);
    // static public UnityEngine.Transform GetAncestor(UnityEngine.Transform transform, System.Int32 minChildCount)
    // Offset: 0x15F08F4
    static UnityEngine::Transform* GetAncestor(UnityEngine::Transform* transform, int minChildCount);
    // static public UnityEngine.Transform GetFirstCommonAncestor(UnityEngine.Transform t1, UnityEngine.Transform t2)
    // Offset: 0x15F0A10
    static UnityEngine::Transform* GetFirstCommonAncestor(UnityEngine::Transform* t1, UnityEngine::Transform* t2);
    // static public UnityEngine.Transform GetFirstCommonAncestor(UnityEngine.Transform[] transforms)
    // Offset: 0x15F0B98
    static UnityEngine::Transform* GetFirstCommonAncestor(::Array<UnityEngine::Transform*>* transforms);
    // static public UnityEngine.Transform GetFirstCommonAncestorRecursive(UnityEngine.Transform transform, UnityEngine.Transform[] transforms)
    // Offset: 0x15F0F2C
    static UnityEngine::Transform* GetFirstCommonAncestorRecursive(UnityEngine::Transform* transform, ::Array<UnityEngine::Transform*>* transforms);
    // static public System.Boolean IsCommonAncestor(UnityEngine.Transform transform, UnityEngine.Transform[] transforms)
    // Offset: 0x15F0D18
    static bool IsCommonAncestor(UnityEngine::Transform* transform, ::Array<UnityEngine::Transform*>* transforms);
    // public System.Void .ctor()
    // Offset: 0x15F10CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hierarchy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Hierarchy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hierarchy*, creationType>()));
    }
  }; // RootMotion.Hierarchy
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Hierarchy*, "RootMotion", "Hierarchy");
#pragma pack(pop)
