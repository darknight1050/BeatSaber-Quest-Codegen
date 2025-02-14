// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONObject
#include "OVRSimpleJSON/JSONObject.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRSimpleJSON.JSONObject/<get_Children>d__23
  // [CompilerGeneratedAttribute] Offset: DCFB54
  class JSONObject::$get_Children$d__23 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>, public System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private OVRSimpleJSON.JSONNode <>2__current
    // Size: 0x8
    // Offset: 0x18
    OVRSimpleJSON::JSONNode* $$2__current;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONNode*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public OVRSimpleJSON.JSONObject <>4__this
    // Size: 0x8
    // Offset: 0x28
    OVRSimpleJSON::JSONObject* $$4__this;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONObject*) == 0x8);
    // private System.Collections.Generic.Dictionary`2/Enumerator<System.String,OVRSimpleJSON.JSONNode> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>::Enumerator $$7__wrap1;
    // Creating value type constructor for type: $get_Children$d__23
    $get_Children$d__23(int $$1__state_ = {}, OVRSimpleJSON::JSONNode* $$2__current_ = {}, int $$l__initialThreadId_ = {}, OVRSimpleJSON::JSONObject* $$4__this_ = {}, typename System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>::Enumerator $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>
    operator System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>
    operator System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1EB5B84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONObject::$get_Children$d__23* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONObject::$get_Children$d__23::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONObject::$get_Children$d__23*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1EB5F98
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1EB600C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1EB5FB4
    void $$m__Finally1();
    // private OVRSimpleJSON.JSONNode System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current()
    // Offset: 0x1EB6168
    OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator$OVRSimpleJSON_JSONNode$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1EB6170
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1EB61D0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<OVRSimpleJSON.JSONNode> System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator()
    // Offset: 0x1EB61D8
    System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable$OVRSimpleJSON_JSONNode$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1EB6284
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // OVRSimpleJSON.JSONObject/<get_Children>d__23
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONObject::$get_Children$d__23*, "OVRSimpleJSON", "JSONObject/<get_Children>d__23");
