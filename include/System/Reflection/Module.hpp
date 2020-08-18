// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Reflection.ICustomAttributeProvider
#include "System/Reflection/ICustomAttributeProvider.hpp"
// Including type: System.Runtime.InteropServices._Module
#include "System/Runtime/InteropServices/_Module.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: TypeFilter
  class TypeFilter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.Module
  class Module : public System::Runtime::Serialization::ISerializable, public System::Reflection::ICustomAttributeProvider, public System::Runtime::InteropServices::_Module, public ::Il2CppObject {
    public:
    // System.IntPtr _impl
    // Offset: 0x10
    System::IntPtr impl;
    // System.Reflection.Assembly assembly
    // Offset: 0x18
    System::Reflection::Assembly* assembly;
    // System.String fqname
    // Offset: 0x20
    ::Il2CppString* fqname;
    // System.String name
    // Offset: 0x28
    ::Il2CppString* name;
    // System.String scopename
    // Offset: 0x30
    ::Il2CppString* scopename;
    // System.Boolean is_resource
    // Offset: 0x38
    bool is_resource;
    // System.Int32 token
    // Offset: 0x3C
    int token;
    // Get static field: static public readonly System.Reflection.TypeFilter FilterTypeName
    static System::Reflection::TypeFilter* _get_FilterTypeName();
    // Set static field: static public readonly System.Reflection.TypeFilter FilterTypeName
    static void _set_FilterTypeName(System::Reflection::TypeFilter* value);
    // Get static field: static public readonly System.Reflection.TypeFilter FilterTypeNameIgnoreCase
    static System::Reflection::TypeFilter* _get_FilterTypeNameIgnoreCase();
    // Set static field: static public readonly System.Reflection.TypeFilter FilterTypeNameIgnoreCase
    static void _set_FilterTypeNameIgnoreCase(System::Reflection::TypeFilter* value);
    // static field const value: static private System.Reflection.BindingFlags defaultBindingFlags
    static constexpr const int defaultBindingFlags = 28;
    // Get static field: static private System.Reflection.BindingFlags defaultBindingFlags
    static System::Reflection::BindingFlags _get_defaultBindingFlags();
    // Set static field: static private System.Reflection.BindingFlags defaultBindingFlags
    static void _set_defaultBindingFlags(System::Reflection::BindingFlags value);
    // System.Guid GetModuleVersionId()
    // Offset: 0x10AF14C
    System::Guid GetModuleVersionId();
    // static private System.Boolean filter_by_type_name(System.Type m, System.Object filterCriteria)
    // Offset: 0x10AF184
    static bool filter_by_type_name(System::Type* m, ::Il2CppObject* filterCriteria);
    // static private System.Boolean filter_by_type_name_ignore_case(System.Type m, System.Object filterCriteria)
    // Offset: 0x10AF288
    static bool filter_by_type_name_ignore_case(System::Type* m, ::Il2CppObject* filterCriteria);
    // private System.String GetGuidInternal()
    // Offset: 0x10AF180
    ::Il2CppString* GetGuidInternal();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0x10AF400
    System::Reflection::Assembly* get_Assembly();
    // public System.String get_ScopeName()
    // Offset: 0x10AF4CC
    ::Il2CppString* get_ScopeName();
    // public System.Guid get_ModuleVersionId()
    // Offset: 0x10AF530
    System::Guid get_ModuleVersionId();
    // static private System.Exception CreateNIE()
    // Offset: 0x10AF464
    static System::Exception* CreateNIE();
    // public System.Boolean IsResource()
    // Offset: 0x10AF594
    bool IsResource();
    // static private System.Void .cctor()
    // Offset: 0x10AF6C0
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x10AF0DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Module* New_ctor();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x10AF0E4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x10AF144
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x10AF3A0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x10AF3AC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x10AF5F8
    // Implemented from: System.Reflection.ICustomAttributeProvider
    // Base method: System.Object[] ICustomAttributeProvider::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x10AF65C
    // Implemented from: System.Reflection.ICustomAttributeProvider
    // Base method: System.Boolean ICustomAttributeProvider::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
  }; // System.Reflection.Module
  // static public System.Boolean op_Equality(System.Reflection.Module left, System.Reflection.Module right)
  // Offset: 0x10AF3B4
  bool operator ==(System::Reflection::Module* left, System::Reflection::Module& right);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Module*, "System.Reflection", "Module");
#pragma pack(pop)
