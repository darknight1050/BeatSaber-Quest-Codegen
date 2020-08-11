// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OVRSimpleJSON.JSONContainerType
#include "OVRSimpleJSON/JSONContainerType.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
  // Forward declaring type: JSONArray
  class JSONArray;
  // Forward declaring type: JSONObject
  class JSONObject;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: RectOffset
  class RectOffset;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Autogenerated type: OVRSimpleJSON.JSONNode
  class JSONNode : public ::CsObject {
    public:
    // Nested type: OVRSimpleJSON::JSONNode::Enumerator
    struct Enumerator;
    // Nested type: OVRSimpleJSON::JSONNode::ValueEnumerator
    struct ValueEnumerator;
    // Nested type: OVRSimpleJSON::JSONNode::KeyEnumerator
    struct KeyEnumerator;
    // Nested type: OVRSimpleJSON::JSONNode::LinqEnumerator
    class LinqEnumerator;
    // Nested type: OVRSimpleJSON::JSONNode::$get_Children$d__40
    class $get_Children$d__40;
    // Nested type: OVRSimpleJSON::JSONNode::$get_DeepChildren$d__42
    class $get_DeepChildren$d__42;
    // Get static field: static public System.Boolean forceASCII
    static bool _get_forceASCII();
    // Set static field: static public System.Boolean forceASCII
    static void _set_forceASCII(bool value);
    // Get static field: static public System.Boolean longAsString
    static bool _get_longAsString();
    // Set static field: static public System.Boolean longAsString
    static void _set_longAsString(bool value);
    // Get static field: static private System.Text.StringBuilder m_EscapeBuilder
    static System::Text::StringBuilder* _get_m_EscapeBuilder();
    // Set static field: static private System.Text.StringBuilder m_EscapeBuilder
    static void _set_m_EscapeBuilder(System::Text::StringBuilder* value);
    // Get static field: static public OVRSimpleJSON.JSONContainerType VectorContainerType
    static OVRSimpleJSON::JSONContainerType _get_VectorContainerType();
    // Set static field: static public OVRSimpleJSON.JSONContainerType VectorContainerType
    static void _set_VectorContainerType(OVRSimpleJSON::JSONContainerType value);
    // Get static field: static public OVRSimpleJSON.JSONContainerType QuaternionContainerType
    static OVRSimpleJSON::JSONContainerType _get_QuaternionContainerType();
    // Set static field: static public OVRSimpleJSON.JSONContainerType QuaternionContainerType
    static void _set_QuaternionContainerType(OVRSimpleJSON::JSONContainerType value);
    // Get static field: static public OVRSimpleJSON.JSONContainerType RectContainerType
    static OVRSimpleJSON::JSONContainerType _get_RectContainerType();
    // Set static field: static public OVRSimpleJSON.JSONContainerType RectContainerType
    static void _set_RectContainerType(OVRSimpleJSON::JSONContainerType value);
    // public OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0xFFFFFFFF
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public OVRSimpleJSON.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0xF3C51C
    OVRSimpleJSON::JSONNode* get_Item(int aIndex);
    // public System.Void set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    // Offset: 0xF3C524
    void set_Item(int aIndex, OVRSimpleJSON::JSONNode* value);
    // public OVRSimpleJSON.JSONNode get_Item(System.String aKey)
    // Offset: 0xF3C528
    OVRSimpleJSON::JSONNode* get_Item(::CsString* aKey);
    // public System.Void set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    // Offset: 0xF3C530
    void set_Item(::CsString* aKey, OVRSimpleJSON::JSONNode* value);
    // public System.String get_Value()
    // Offset: 0xF3C534
    ::CsString* get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0xF3C57C
    void set_Value(::CsString* value);
    // public System.Int32 get_Count()
    // Offset: 0xF3C580
    int get_Count();
    // public System.Boolean get_IsNumber()
    // Offset: 0xF3C588
    bool get_IsNumber();
    // public System.Boolean get_IsString()
    // Offset: 0xF3C590
    bool get_IsString();
    // public System.Boolean get_IsBoolean()
    // Offset: 0xF3C598
    bool get_IsBoolean();
    // public System.Boolean get_IsNull()
    // Offset: 0xF3C5A0
    bool get_IsNull();
    // public System.Boolean get_IsArray()
    // Offset: 0xF3C5A8
    bool get_IsArray();
    // public System.Boolean get_IsObject()
    // Offset: 0xF3C5B0
    bool get_IsObject();
    // public System.Boolean get_Inline()
    // Offset: 0xF3C5B8
    bool get_Inline();
    // public System.Void set_Inline(System.Boolean value)
    // Offset: 0xF3C5C0
    void set_Inline(bool value);
    // public System.Void Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    // Offset: 0xF3C5C4
    void Add(::CsString* aKey, OVRSimpleJSON::JSONNode* aItem);
    // public System.Void Add(OVRSimpleJSON.JSONNode aItem)
    // Offset: 0xF3C5C8
    void Add(OVRSimpleJSON::JSONNode* aItem);
    // public OVRSimpleJSON.JSONNode Remove(System.String aKey)
    // Offset: 0xF3C634
    OVRSimpleJSON::JSONNode* Remove(::CsString* aKey);
    // public OVRSimpleJSON.JSONNode Remove(System.Int32 aIndex)
    // Offset: 0xF3C63C
    OVRSimpleJSON::JSONNode* Remove(int aIndex);
    // public OVRSimpleJSON.JSONNode Remove(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0xF3C644
    OVRSimpleJSON::JSONNode* Remove(OVRSimpleJSON::JSONNode* aNode);
    // public System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> get_Children()
    // Offset: 0xF3C64C
    System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>* get_Children();
    // public System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> get_DeepChildren()
    // Offset: 0xF3C6F4
    System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>* get_DeepChildren();
    // public System.String ToString(System.Int32 aIndent)
    // Offset: 0xF3C84C
    ::CsString* ToString(int aIndent);
    // System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0xFFFFFFFF
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
    // public OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0xFFFFFFFF
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,OVRSimpleJSON.JSONNode>> get_Linq()
    // Offset: 0xF3C8EC
    System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::CsString*, OVRSimpleJSON::JSONNode*>>* get_Linq();
    // public OVRSimpleJSON.JSONNode/KeyEnumerator get_Keys()
    // Offset: 0xF3CA30
    OVRSimpleJSON::JSONNode::KeyEnumerator get_Keys();
    // public OVRSimpleJSON.JSONNode/ValueEnumerator get_Values()
    // Offset: 0xF3CA84
    OVRSimpleJSON::JSONNode::ValueEnumerator get_Values();
    // public System.Double get_AsDouble()
    // Offset: 0xF3CAD8
    double get_AsDouble();
    // public System.Void set_AsDouble(System.Double value)
    // Offset: 0xF3CBB4
    void set_AsDouble(double value);
    // public System.Int32 get_AsInt()
    // Offset: 0xF3CC4C
    int get_AsInt();
    // public System.Void set_AsInt(System.Int32 value)
    // Offset: 0xF3CC70
    void set_AsInt(int value);
    // public System.Single get_AsFloat()
    // Offset: 0xF3CC88
    float get_AsFloat();
    // public System.Void set_AsFloat(System.Single value)
    // Offset: 0xF3CCAC
    void set_AsFloat(float value);
    // public System.Boolean get_AsBool()
    // Offset: 0xF3CCC0
    bool get_AsBool();
    // public System.Void set_AsBool(System.Boolean value)
    // Offset: 0xF3CD88
    void set_AsBool(bool value);
    // public System.Int64 get_AsLong()
    // Offset: 0xF3CE04
    int64_t get_AsLong();
    // public System.Void set_AsLong(System.Int64 value)
    // Offset: 0xF3CE44
    void set_AsLong(int64_t value);
    // public OVRSimpleJSON.JSONArray get_AsArray()
    // Offset: 0xF3CE84
    OVRSimpleJSON::JSONArray* get_AsArray();
    // public OVRSimpleJSON.JSONObject get_AsObject()
    // Offset: 0xF3CF04
    OVRSimpleJSON::JSONObject* get_AsObject();
    // static System.Text.StringBuilder get_EscapeBuilder()
    // Offset: 0xF3D6A8
    static System::Text::StringBuilder* get_EscapeBuilder();
    // static System.String Escape(System.String aText)
    // Offset: 0xF3D780
    static ::CsString* Escape(::CsString* aText);
    // static private OVRSimpleJSON.JSONNode ParseElement(System.String token, System.Boolean quoted)
    // Offset: 0xF3DA20
    static OVRSimpleJSON::JSONNode* ParseElement(::CsString* token, bool quoted);
    // static public OVRSimpleJSON.JSONNode Parse(System.String aJSON)
    // Offset: 0xF3A054
    static OVRSimpleJSON::JSONNode* Parse(::CsString* aJSON);
    // static private OVRSimpleJSON.JSONNode GetContainer(OVRSimpleJSON.JSONContainerType aType)
    // Offset: 0xF3DC24
    static OVRSimpleJSON::JSONNode* GetContainer(OVRSimpleJSON::JSONContainerType aType);
    // public UnityEngine.Vector2 ReadVector2(UnityEngine.Vector2 aDefault)
    // Offset: 0xF3EFA4
    UnityEngine::Vector2 ReadVector2(UnityEngine::Vector2 aDefault);
    // public UnityEngine.Vector2 ReadVector2(System.String aXName, System.String aYName)
    // Offset: 0xF3F100
    UnityEngine::Vector2 ReadVector2(::CsString* aXName, ::CsString* aYName);
    // public UnityEngine.Vector2 ReadVector2()
    // Offset: 0xF3ED08
    UnityEngine::Vector2 ReadVector2();
    // public OVRSimpleJSON.JSONNode WriteVector2(UnityEngine.Vector2 aVec, System.String aXName, System.String aYName)
    // Offset: 0xF3DD44
    OVRSimpleJSON::JSONNode* WriteVector2(UnityEngine::Vector2 aVec, ::CsString* aXName, ::CsString* aYName);
    // public UnityEngine.Vector3 ReadVector3(UnityEngine.Vector3 aDefault)
    // Offset: 0xF3F214
    UnityEngine::Vector3 ReadVector3(UnityEngine::Vector3 aDefault);
    // public UnityEngine.Vector3 ReadVector3(System.String aXName, System.String aYName, System.String aZName)
    // Offset: 0xF3F3EC
    UnityEngine::Vector3 ReadVector3(::CsString* aXName, ::CsString* aYName, ::CsString* aZName);
    // public UnityEngine.Vector3 ReadVector3()
    // Offset: 0xF3ED88
    UnityEngine::Vector3 ReadVector3();
    // public OVRSimpleJSON.JSONNode WriteVector3(UnityEngine.Vector3 aVec, System.String aXName, System.String aYName, System.String aZName)
    // Offset: 0xF3DF40
    OVRSimpleJSON::JSONNode* WriteVector3(UnityEngine::Vector3 aVec, ::CsString* aXName, ::CsString* aYName, ::CsString* aZName);
    // public UnityEngine.Vector4 ReadVector4(UnityEngine.Vector4 aDefault)
    // Offset: 0xF3F550
    UnityEngine::Vector4 ReadVector4(UnityEngine::Vector4 aDefault);
    // public UnityEngine.Vector4 ReadVector4()
    // Offset: 0xF3EE08
    UnityEngine::Vector4 ReadVector4();
    // public OVRSimpleJSON.JSONNode WriteVector4(UnityEngine.Vector4 aVec)
    // Offset: 0xF3E188
    OVRSimpleJSON::JSONNode* WriteVector4(UnityEngine::Vector4 aVec);
    // public UnityEngine.Quaternion ReadQuaternion(UnityEngine.Quaternion aDefault)
    // Offset: 0xF3F78C
    UnityEngine::Quaternion ReadQuaternion(UnityEngine::Quaternion aDefault);
    // public UnityEngine.Quaternion ReadQuaternion()
    // Offset: 0xF3EE88
    UnityEngine::Quaternion ReadQuaternion();
    // public OVRSimpleJSON.JSONNode WriteQuaternion(UnityEngine.Quaternion aRot)
    // Offset: 0xF3E460
    OVRSimpleJSON::JSONNode* WriteQuaternion(UnityEngine::Quaternion aRot);
    // public UnityEngine.Rect ReadRect(UnityEngine.Rect aDefault)
    // Offset: 0xF3F9C8
    UnityEngine::Rect ReadRect(UnityEngine::Rect aDefault);
    // public UnityEngine.Rect ReadRect()
    // Offset: 0xF3EF18
    UnityEngine::Rect ReadRect();
    // public OVRSimpleJSON.JSONNode WriteRect(UnityEngine.Rect aRect)
    // Offset: 0xF3E738
    OVRSimpleJSON::JSONNode* WriteRect(UnityEngine::Rect aRect);
    // public UnityEngine.RectOffset ReadRectOffset(UnityEngine.RectOffset aDefault)
    // Offset: 0xF3FC04
    UnityEngine::RectOffset* ReadRectOffset(UnityEngine::RectOffset* aDefault);
    // public UnityEngine.RectOffset ReadRectOffset()
    // Offset: 0xF3EF40
    UnityEngine::RectOffset* ReadRectOffset();
    // public OVRSimpleJSON.JSONNode WriteRectOffset(UnityEngine.RectOffset aRect)
    // Offset: 0xF3EA44
    OVRSimpleJSON::JSONNode* WriteRectOffset(UnityEngine::RectOffset* aRect);
    // public UnityEngine.Matrix4x4 ReadMatrix()
    // Offset: 0xF3FE5C
    UnityEngine::Matrix4x4 ReadMatrix();
    // public OVRSimpleJSON.JSONNode WriteMatrix(UnityEngine.Matrix4x4 aMatrix)
    // Offset: 0xF3FF6C
    OVRSimpleJSON::JSONNode* WriteMatrix(UnityEngine::Matrix4x4 aMatrix);
    // static private System.Void .cctor()
    // Offset: 0xF4001C
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xF3C7B8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF3D694
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::CsObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF3D6A0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // protected System.Void .ctor()
    // Offset: 0xF3B25C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static JSONNode* New_ctor();
  }; // OVRSimpleJSON.JSONNode
  // static public System.Boolean op_Equality(OVRSimpleJSON.JSONNode a, System.Object b)
  // Offset: 0xF3AA08
  bool operator ==(OVRSimpleJSON::JSONNode* a, ::CsObject& b);
  // static public System.Boolean op_Inequality(OVRSimpleJSON.JSONNode a, System.Object b)
  // Offset: 0xF3D614
  bool operator !=(OVRSimpleJSON::JSONNode* a, ::CsObject& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode*, "OVRSimpleJSON", "JSONNode");
#pragma pack(pop)
