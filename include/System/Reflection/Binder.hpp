// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.ParameterModifier
#include "System/Reflection/ParameterModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Binder
  // [ClassInterfaceAttribute] Offset: D7BB20
  // [ComVisibleAttribute] Offset: D7BB20
  class Binder : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Binder
    Binder() noexcept {}
    // public System.Reflection.MethodBase BindToMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, ref System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] names, out System.Object state)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodBase* BindToMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<::Il2CppObject*>*& args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* culture, ::Array<::Il2CppString*>* names, ::Il2CppObject*& state);
    // public System.Reflection.FieldInfo BindToField(System.Reflection.BindingFlags bindingAttr, System.Reflection.FieldInfo[] match, System.Object value, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    System::Reflection::FieldInfo* BindToField(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::FieldInfo*>* match, ::Il2CppObject* value, System::Globalization::CultureInfo* culture);
    // public System.Reflection.MethodBase SelectMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodBase* SelectMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.PropertyInfo SelectProperty(System.Reflection.BindingFlags bindingAttr, System.Reflection.PropertyInfo[] match, System.Type returnType, System.Type[] indexes, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFF
    System::Reflection::PropertyInfo* SelectProperty(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::PropertyInfo*>* match, System::Type* returnType, ::Array<System::Type*>* indexes, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Object ChangeType(System.Object value, System.Type type, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* ChangeType(::Il2CppObject* value, System::Type* type, System::Globalization::CultureInfo* culture);
    // public System.Void ReorderArgumentArray(ref System.Object[] args, System.Object state)
    // Offset: 0xFFFFFFFF
    void ReorderArgumentArray(::Array<::Il2CppObject*>*& args, ::Il2CppObject* state);
    // protected System.Void .ctor()
    // Offset: 0x1C5AAB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Binder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::Binder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Binder*, creationType>()));
    }
  }; // System.Reflection.Binder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Binder*, "System.Reflection", "Binder");
