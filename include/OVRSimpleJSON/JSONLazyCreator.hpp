// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONArray
  class JSONArray;
  // Forward declaring type: JSONObject
  class JSONObject;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONLazyCreator
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CE01E4
  class JSONLazyCreator : public OVRSimpleJSON::JSONNode {
    public:
    // private OVRSimpleJSON.JSONNode m_Node
    // Size: 0x8
    // Offset: 0x10
    OVRSimpleJSON::JSONNode* m_Node;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONNode*) == 0x8);
    // private System.String m_Key
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_Key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: JSONLazyCreator
    JSONLazyCreator(OVRSimpleJSON::JSONNode* m_Node_ = {}, ::Il2CppString* m_Key_ = {}) noexcept : m_Node{m_Node_}, m_Key{m_Key_} {}
    // public System.Void .ctor(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0x1566EA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONLazyCreator* New_ctor(OVRSimpleJSON::JSONNode* aNode) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONLazyCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONLazyCreator*, creationType>(aNode)));
    }
    // public System.Void .ctor(OVRSimpleJSON.JSONNode aNode, System.String aKey)
    // Offset: 0x1567DCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONLazyCreator* New_ctor(OVRSimpleJSON::JSONNode* aNode, ::Il2CppString* aKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONLazyCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONLazyCreator*, creationType>(aNode, aKey)));
    }
    // private T Set(T aVal)
    // Offset: 0xFFFFFFFF
    template<class T>
    T Set(T aVal) {
      static_assert(std::is_convertible_v<T, OVRSimpleJSON::JSONNode*>);
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONLazyCreator::Set");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Set", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(aVal)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method, aVal);
    }
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x1567DA4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag_NEW()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0x1567DAC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/Enumerator JSONNode::GetEnumerator_NEW()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override OVRSimpleJSON.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0x1567E4C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item_NEW(System.Int32 aIndex)
    OVRSimpleJSON::JSONNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    // Offset: 0x1567EAC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item_NEW(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    void set_Item(int aIndex, OVRSimpleJSON::JSONNode* value);
    // public override OVRSimpleJSON.JSONNode get_Item(System.String aKey)
    // Offset: 0x1567F40
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item_NEW(System.String aKey)
    OVRSimpleJSON::JSONNode* get_Item(::Il2CppString* aKey);
    // public override System.Void set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    // Offset: 0x1567FB0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item_NEW(System.String aKey, OVRSimpleJSON.JSONNode value)
    void set_Item(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* value);
    // public override System.Void Add(OVRSimpleJSON.JSONNode aItem)
    // Offset: 0x1568050
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::Add_NEW(OVRSimpleJSON.JSONNode aItem)
    void Add(OVRSimpleJSON::JSONNode* aItem);
    // public override System.Void Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    // Offset: 0x15680E4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::Add_NEW(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    void Add(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* aItem);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15681B4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15681CC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
    // public override System.Int32 get_AsInt()
    // Offset: 0x15681D4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::get_AsInt_NEW()
    int get_AsInt();
    // public override System.Void set_AsInt(System.Int32 value)
    // Offset: 0x1568250
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsInt_NEW(System.Int32 value)
    void set_AsInt(int value);
    // public override System.Single get_AsFloat()
    // Offset: 0x15682D0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Single JSONNode::get_AsFloat_NEW()
    float get_AsFloat();
    // public override System.Void set_AsFloat(System.Single value)
    // Offset: 0x156834C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsFloat_NEW(System.Single value)
    void set_AsFloat(float value);
    // public override System.Double get_AsDouble()
    // Offset: 0x15683CC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Double JSONNode::get_AsDouble_NEW()
    double get_AsDouble();
    // public override System.Void set_AsDouble(System.Double value)
    // Offset: 0x1568448
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsDouble_NEW(System.Double value)
    void set_AsDouble(double value);
    // public override System.Int64 get_AsLong()
    // Offset: 0x15684C8
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int64 JSONNode::get_AsLong_NEW()
    int64_t get_AsLong();
    // public override System.Void set_AsLong(System.Int64 value)
    // Offset: 0x15685A8
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsLong_NEW(System.Int64 value)
    void set_AsLong(int64_t value);
    // public override System.Boolean get_AsBool()
    // Offset: 0x15686B8
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_AsBool_NEW()
    bool get_AsBool();
    // public override System.Void set_AsBool(System.Boolean value)
    // Offset: 0x1568730
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsBool_NEW(System.Boolean value)
    void set_AsBool(bool value);
    // public override OVRSimpleJSON.JSONArray get_AsArray()
    // Offset: 0x15687AC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONArray JSONNode::get_AsArray_NEW()
    OVRSimpleJSON::JSONArray* get_AsArray();
    // public override OVRSimpleJSON.JSONObject get_AsObject()
    // Offset: 0x1568818
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONObject JSONNode::get_AsObject_NEW()
    OVRSimpleJSON::JSONObject* get_AsObject();
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x1568888
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder_NEW(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
  }; // OVRSimpleJSON.JSONLazyCreator
  #pragma pack(pop)
  static check_size<sizeof(JSONLazyCreator), 24 + sizeof(::Il2CppString*)> __OVRSimpleJSON_JSONLazyCreatorSizeCheck;
  static_assert(sizeof(JSONLazyCreator) == 0x20);
  // static public System.Boolean op_Equality(OVRSimpleJSON.JSONLazyCreator a, System.Object b)
  // Offset: 0x1568184
  bool operator ==(OVRSimpleJSON::JSONLazyCreator* a, ::Il2CppObject& b);
  // static public System.Boolean op_Inequality(OVRSimpleJSON.JSONLazyCreator a, System.Object b)
  // Offset: 0x156819C
  bool operator !=(OVRSimpleJSON::JSONLazyCreator* a, ::Il2CppObject& b);
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONLazyCreator*, "OVRSimpleJSON", "JSONLazyCreator");
