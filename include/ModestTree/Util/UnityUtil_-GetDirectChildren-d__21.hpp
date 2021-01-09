// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x40
  // Autogenerated type: ModestTree.Util.UnityUtil/<GetDirectChildren>d__21
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D92F28
  class UnityUtil::$GetDirectChildren$d__21 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>, public System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject <>2__current
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: obj
    char __padding2[0x4] = {};
    // private UnityEngine.GameObject obj
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* obj;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject <>3__obj
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* $$3__obj;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Collections.IEnumerator <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    System::Collections::IEnumerator* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: $GetDirectChildren$d__21
    $GetDirectChildren$d__21(int $$1__state_ = {}, UnityEngine::GameObject* $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::GameObject* obj_ = {}, UnityEngine::GameObject* $$3__obj_ = {}, System::Collections::IEnumerator* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, obj{obj_}, $$3__obj{$$3__obj_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x10E7E60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$GetDirectChildren$d__21* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::UnityUtil::$GetDirectChildren$d__21::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$GetDirectChildren$d__21*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0x10E8388
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x10E836C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x10E8454
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private UnityEngine.GameObject System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current()
    // Offset: 0x10E86CC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    UnityEngine::GameObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10E86D4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10E8734
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject> System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator()
    // Offset: 0x10E873C
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x10E87F0
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/<GetDirectChildren>d__21
  static check_size<sizeof(UnityUtil::$GetDirectChildren$d__21), 56 + sizeof(System::Collections::IEnumerator*)> __ModestTree_Util_UnityUtil_$GetDirectChildren$d__21SizeCheck;
  static_assert(sizeof(UnityUtil::$GetDirectChildren$d__21) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$GetDirectChildren$d__21*, "ModestTree.Util", "UnityUtil/<GetDirectChildren>d__21");
#pragma pack(pop)
