// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x19
  // Autogenerated type: OVRSimpleJSON.JSONObject
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D83C3C
  class JSONObject : public OVRSimpleJSON::JSONNode {
    public:
    // Nested type: OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // Nested type: OVRSimpleJSON::JSONObject::$get_Children$d__23
    class $get_Children$d__23;
    // private System.Collections.Generic.Dictionary`2<System.String,OVRSimpleJSON.JSONNode> m_Dict
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>* m_Dict;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>*) == 0x8);
    // private System.Boolean inline
    // Size: 0x1
    // Offset: 0x18
    bool _inline;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: JSONObject
    JSONObject(System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>* m_Dict_ = {}, bool _inline_ = {}) noexcept : m_Dict{m_Dict_}, _inline{_inline_} {}
    // public override System.Boolean get_Inline()
    // Offset: 0x12EDC50
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_Inline()
    bool get_Inline();
    // public override System.Void set_Inline(System.Boolean value)
    // Offset: 0x12EDC58
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Inline(System.Boolean value)
    void set_Inline(bool value);
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x12EDC64
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsObject()
    // Offset: 0x12EDC6C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsObject()
    bool get_IsObject();
    // public override OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0x12EDC74
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override OVRSimpleJSON.JSONNode get_Item(System.String aKey)
    // Offset: 0x12EDD2C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.String aKey)
    OVRSimpleJSON::JSONNode* get_Item(::Il2CppString* aKey);
    // public override System.Void set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    // Offset: 0x12EDDE8
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    void set_Item(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* value);
    // public override OVRSimpleJSON.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0x12EDEFC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.Int32 aIndex)
    OVRSimpleJSON::JSONNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    // Offset: 0x12EDF94
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    void set_Item(int aIndex, OVRSimpleJSON::JSONNode* value);
    // public override System.Int32 get_Count()
    // Offset: 0x12EE0B0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::get_Count()
    int get_Count();
    // public override System.Void Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    // Offset: 0x12EE108
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    void Add(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* aItem);
    // public override OVRSimpleJSON.JSONNode Remove(System.String aKey)
    // Offset: 0x12EE28C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(System.String aKey)
    OVRSimpleJSON::JSONNode* Remove(::Il2CppString* aKey);
    // public override OVRSimpleJSON.JSONNode Remove(System.Int32 aIndex)
    // Offset: 0x12EE348
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(System.Int32 aIndex)
    OVRSimpleJSON::JSONNode* Remove(int aIndex);
    // public override OVRSimpleJSON.JSONNode Remove(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0x12EE404
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(OVRSimpleJSON.JSONNode aNode)
    OVRSimpleJSON::JSONNode* Remove(OVRSimpleJSON::JSONNode* aNode);
    // public override System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> get_Children()
    // Offset: 0x12EE59C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> JSONNode::get_Children()
    System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>* get_Children();
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x12EE660
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
    // public System.Void .ctor()
    // Offset: 0x12E80A4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONObject*, creationType>()));
    }
  }; // OVRSimpleJSON.JSONObject
  static check_size<sizeof(JSONObject), 24 + sizeof(bool)> __OVRSimpleJSON_JSONObjectSizeCheck;
  static_assert(sizeof(JSONObject) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONObject*, "OVRSimpleJSON", "JSONObject");
#pragma pack(pop)
