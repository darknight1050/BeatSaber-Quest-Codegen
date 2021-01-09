// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.CustomAttributeTypedArgument
#include "System/Reflection/CustomAttributeTypedArgument.hpp"
// Including type: System.Reflection.CustomAttributeNamedArgument
#include "System/Reflection/CustomAttributeNamedArgument.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x30
  // Autogenerated type: System.Reflection.CustomAttributeData
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D38D48
  class CustomAttributeData : public ::Il2CppObject {
    public:
    // Nested type: System::Reflection::CustomAttributeData::LazyCAttrData
    class LazyCAttrData;
    // private System.Reflection.ConstructorInfo ctorInfo
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::ConstructorInfo* ctorInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::ConstructorInfo*) == 0x8);
    // private System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> ctorArgs
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument>* ctorArgs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument>*) == 0x8);
    // private System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> namedArgs
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument>* namedArgs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument>*) == 0x8);
    // private System.Reflection.CustomAttributeData/LazyCAttrData lazyData
    // Size: 0x8
    // Offset: 0x28
    System::Reflection::CustomAttributeData::LazyCAttrData* lazyData;
    // Field size check
    static_assert(sizeof(System::Reflection::CustomAttributeData::LazyCAttrData*) == 0x8);
    // Creating value type constructor for type: CustomAttributeData
    CustomAttributeData(System::Reflection::ConstructorInfo* ctorInfo_ = {}, System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument>* ctorArgs_ = {}, System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument>* namedArgs_ = {}, System::Reflection::CustomAttributeData::LazyCAttrData* lazyData_ = {}) noexcept : ctorInfo{ctorInfo_}, ctorArgs{ctorArgs_}, namedArgs{namedArgs_}, lazyData{lazyData_} {}
    // System.Void .ctor(System.Reflection.ConstructorInfo ctorInfo, System.Reflection.Assembly assembly, System.IntPtr data, System.UInt32 data_length)
    // Offset: 0x1721B78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomAttributeData* New_ctor(System::Reflection::ConstructorInfo* ctorInfo, System::Reflection::Assembly* assembly, System::IntPtr data, uint data_length) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::CustomAttributeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomAttributeData*, creationType>(ctorInfo, assembly, data, data_length)));
    }
    // static private System.Void ResolveArgumentsInternal(System.Reflection.ConstructorInfo ctor, System.Reflection.Assembly assembly, System.IntPtr data, System.UInt32 data_length, out System.Object[] ctorArgs, out System.Object[] namedArgs)
    // Offset: 0x1721C40
    static void ResolveArgumentsInternal(System::Reflection::ConstructorInfo* ctor, System::Reflection::Assembly* assembly, System::IntPtr data, uint data_length, ::Array<::Il2CppObject*>*& ctorArgs, ::Array<::Il2CppObject*>*& namedArgs);
    // private System.Void ResolveArguments()
    // Offset: 0x1721C44
    void ResolveArguments();
    // public System.Reflection.ConstructorInfo get_Constructor()
    // Offset: 0x1721DA0
    System::Reflection::ConstructorInfo* get_Constructor();
    // public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> get_ConstructorArguments()
    // Offset: 0x1721DA8
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument>* get_ConstructorArguments();
    // public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> get_NamedArguments()
    // Offset: 0x1721DCC
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument>* get_NamedArguments();
    // static public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributes(System.Reflection.Assembly target)
    // Offset: 0x1721DF0
    static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributes(System::Reflection::Assembly* target);
    // static public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributes(System.Reflection.MemberInfo target)
    // Offset: 0x1721E58
    static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributes(System::Reflection::MemberInfo* target);
    // static System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesInternal(System.RuntimeType target)
    // Offset: 0x1721EC0
    static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesInternal(System::RuntimeType* target);
    // static public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributes(System.Reflection.Module target)
    // Offset: 0x1721F28
    static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributes(System::Reflection::Module* target);
    // static public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributes(System.Reflection.ParameterInfo target)
    // Offset: 0x1721F90
    static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributes(System::Reflection::ParameterInfo* target);
    // public System.Type get_AttributeType()
    // Offset: 0x1721FF8
    System::Type* get_AttributeType();
    // static private T[] UnboxValues(System.Object[] values)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* UnboxValues(::Array<::Il2CppObject*>* values) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::CustomAttributeData::UnboxValues");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Reflection", "CustomAttributeData", "UnboxValues", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(values)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, values);
    }
    // protected System.Void .ctor()
    // Offset: 0x1721B74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomAttributeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::CustomAttributeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomAttributeData*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1722018
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x17227E4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x172300C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.CustomAttributeData
  static check_size<sizeof(CustomAttributeData), 40 + sizeof(System::Reflection::CustomAttributeData::LazyCAttrData*)> __System_Reflection_CustomAttributeDataSizeCheck;
  static_assert(sizeof(CustomAttributeData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeData*, "System.Reflection", "CustomAttributeData");
#pragma pack(pop)
