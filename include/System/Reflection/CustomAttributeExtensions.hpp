// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: MemberInfo
  class MemberInfo;
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
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.CustomAttributeExtensions
  class CustomAttributeExtensions : public ::Il2CppObject {
    public:
    // static public System.Attribute GetCustomAttribute(System.Reflection.Assembly element, System.Type attributeType)
    // Offset: 0x12C35E8
    static System::Attribute* GetCustomAttribute(System::Reflection::Assembly* element, System::Type* attributeType);
    // static public T GetCustomAttribute(System.Reflection.Assembly element)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetCustomAttribute(System::Reflection::Assembly* element) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("System.Reflection", "CustomAttributeExtensions", "GetCustomAttribute", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, element)));
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Attribute> GetCustomAttributes(System.Reflection.Assembly element, System.Type attributeType)
    // Offset: 0x12C35F0
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* GetCustomAttributes(System::Reflection::Assembly* element, System::Type* attributeType);
    // static public System.Collections.Generic.IEnumerable`1<T> GetCustomAttributes(System.Reflection.Assembly element)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* GetCustomAttributes(System::Reflection::Assembly* element) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<T>*>("System.Reflection", "CustomAttributeExtensions", "GetCustomAttributes", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, element)));
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Attribute> GetCustomAttributes(System.Reflection.MemberInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x12C35F8
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* GetCustomAttributes(System::Reflection::MemberInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Collections.Generic.IEnumerable`1<T> GetCustomAttributes(System.Reflection.MemberInfo element, System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* GetCustomAttributes(System::Reflection::MemberInfo* element, bool inherit) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<T>*>("System.Reflection", "CustomAttributeExtensions", "GetCustomAttributes", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, element, inherit)));
    }
  }; // System.Reflection.CustomAttributeExtensions
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeExtensions*, "System.Reflection", "CustomAttributeExtensions");
#pragma pack(pop)
