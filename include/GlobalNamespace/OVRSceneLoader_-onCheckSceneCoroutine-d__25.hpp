// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSceneLoader
#include "GlobalNamespace/OVRSceneLoader.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVRSceneLoader/<onCheckSceneCoroutine>d__25
  // [CompilerGeneratedAttribute] Offset: DCE188
  class OVRSceneLoader::$onCheckSceneCoroutine$d__25 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public OVRSceneLoader <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OVRSceneLoader* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRSceneLoader*) == 0x8);
    // Creating value type constructor for type: $onCheckSceneCoroutine$d__25
    $onCheckSceneCoroutine$d__25(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::OVRSceneLoader* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1611D00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneLoader::$onCheckSceneCoroutine$d__25* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSceneLoader::$onCheckSceneCoroutine$d__25::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneLoader::$onCheckSceneCoroutine$d__25*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1611FE8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1611FEC
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x16122A0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x16122A8
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1612308
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // OVRSceneLoader/<onCheckSceneCoroutine>d__25
  #pragma pack(pop)
  static check_size<sizeof(OVRSceneLoader::$onCheckSceneCoroutine$d__25), 32 + sizeof(GlobalNamespace::OVRSceneLoader*)> __GlobalNamespace_OVRSceneLoader_$onCheckSceneCoroutine$d__25SizeCheck;
  static_assert(sizeof(OVRSceneLoader::$onCheckSceneCoroutine$d__25) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneLoader::$onCheckSceneCoroutine$d__25*, "", "OVRSceneLoader/<onCheckSceneCoroutine>d__25");
