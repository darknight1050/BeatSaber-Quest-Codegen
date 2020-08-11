// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Version
  class Version : public ::CsObject, public System::ICloneable, public System::IComparable, public System::IComparable_1<System::Version*>, public System::IEquatable_1<System::Version*> {
    public:
    // Nested type: System::Version::ParseFailureKind
    struct ParseFailureKind;
    // Nested type: System::Version::VersionResult
    struct VersionResult;
    // private System.Int32 _Major
    // Offset: 0x10
    int Major;
    // private System.Int32 _Minor
    // Offset: 0x14
    int Minor;
    // private System.Int32 _Build
    // Offset: 0x18
    int Build;
    // private System.Int32 _Revision
    // Offset: 0x1C
    int Revision;
    // Get static field: static private readonly System.Char[] SeparatorsArray
    static ::Array<::Il2CppChar>* _get_SeparatorsArray();
    // Set static field: static private readonly System.Char[] SeparatorsArray
    static void _set_SeparatorsArray(::Array<::Il2CppChar>* value);
    // static field const value: static private System.Int32 ZERO_CHAR_VALUE
    static constexpr const int ZERO_CHAR_VALUE = 48;
    // Get static field: static private System.Int32 ZERO_CHAR_VALUE
    static int _get_ZERO_CHAR_VALUE();
    // Set static field: static private System.Int32 ZERO_CHAR_VALUE
    static void _set_ZERO_CHAR_VALUE(int value);
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build, System.Int32 revision)
    // Offset: 0x1786B84
    static Version* New_ctor(int major, int minor, int build, int revision);
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build)
    // Offset: 0x1786D14
    static Version* New_ctor(int major, int minor, int build);
    // public System.Void .ctor(System.Int32 major, System.Int32 minor)
    // Offset: 0x1786E64
    static Version* New_ctor(int major, int minor);
    // public System.Void .ctor(System.String version)
    // Offset: 0x1786F68
    static Version* New_ctor(::CsString* version);
    // public System.Int32 get_Major()
    // Offset: 0x178715C
    int get_Major();
    // public System.Int32 get_Minor()
    // Offset: 0x1787164
    int get_Minor();
    // public System.Int32 get_Build()
    // Offset: 0x178716C
    int get_Build();
    // public System.Int32 get_Revision()
    // Offset: 0x1787174
    int get_Revision();
    // public System.String ToString(System.Int32 fieldCount)
    // Offset: 0x1787628
    ::CsString* ToString(int fieldCount);
    // static private System.Void AppendPositiveNumber(System.Int32 num, System.Text.StringBuilder sb)
    // Offset: 0x17879E4
    static void AppendPositiveNumber(int num, System::Text::StringBuilder* sb);
    // static public System.Version Parse(System.String input)
    // Offset: 0x1787018
    static System::Version* Parse(::CsString* input);
    // static private System.Boolean TryParseVersion(System.String version, System.Version/VersionResult result)
    // Offset: 0x1787A7C
    static bool TryParseVersion(::CsString* version, System::Version::VersionResult& result);
    // static private System.Boolean TryParseComponent(System.String component, System.String componentName, System.Version/VersionResult result, System.Int32 parsedComponent)
    // Offset: 0x1787FB4
    static bool TryParseComponent(::CsString* component, ::CsString* componentName, System::Version::VersionResult& result, int& parsedComponent);
    // static private System.Void .cctor()
    // Offset: 0x17883C8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x178712C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Version* New_ctor();
    // public System.Object Clone()
    // Offset: 0x178717C
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::CsObject* Clone();
    // public System.Int32 CompareTo(System.Object version)
    // Offset: 0x1787210
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object version)
    int CompareTo(::CsObject* version);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::CsObject* version);
    // public System.Int32 CompareTo(System.Version value)
    // Offset: 0x178735C
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable`1::CompareTo(System.Version value)
    int CompareTo(System::Version* value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x178743C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::CsObject* obj);
    // public System.Boolean Equals(System.Version obj)
    // Offset: 0x1787518
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.Version obj)
    bool Equals(System::Version* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17875E4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1787600
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString();
  }; // System.Version
  // static public System.Boolean op_Equality(System.Version v1, System.Version v2)
  // Offset: 0x1787348
  bool operator ==(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_Inequality(System.Version v1, System.Version v2)
  // Offset: 0x1788110
  bool operator !=(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_LessThan(System.Version v1, System.Version v2)
  // Offset: 0x17881A4
  bool operator <(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_LessThanOrEqual(System.Version v1, System.Version v2)
  // Offset: 0x1788240
  bool operator <=(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_GreaterThan(System.Version v1, System.Version v2)
  // Offset: 0x17882E0
  bool operator >(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_GreaterThanOrEqual(System.Version v1, System.Version v2)
  // Offset: 0x1788354
  bool operator >=(System::Version* v1, System::Version& v2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Version*, "System", "Version");
#pragma pack(pop)
