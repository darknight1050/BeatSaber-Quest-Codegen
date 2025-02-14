// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADMethodRef
  class CADMethodRef : public ::Il2CppObject {
    public:
    // private System.Boolean ctor
    // Size: 0x1
    // Offset: 0x10
    bool ctor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ctor and: typeName
    char __padding0[0x7] = {};
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String methodName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* methodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] param_names
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* param_names;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String[] generic_arg_names
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* generic_arg_names;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: CADMethodRef
    CADMethodRef(bool ctor_ = {}, ::Il2CppString* typeName_ = {}, ::Il2CppString* methodName_ = {}, ::Array<::Il2CppString*>* param_names_ = {}, ::Array<::Il2CppString*>* generic_arg_names_ = {}) noexcept : ctor{ctor_}, typeName{typeName_}, methodName{methodName_}, param_names{param_names_}, generic_arg_names{generic_arg_names_} {}
    // private System.Type[] GetTypes(System.String[] typeArray)
    // Offset: 0x1A1FD58
    ::Array<System::Type*>* GetTypes(::Array<::Il2CppString*>* typeArray);
    // public System.Reflection.MethodBase Resolve()
    // Offset: 0x1A1DA78
    System::Reflection::MethodBase* Resolve();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage msg)
    // Offset: 0x1A1D708
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CADMethodRef* New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::CADMethodRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CADMethodRef*, creationType>(msg)));
    }
  }; // System.Runtime.Remoting.Messaging.CADMethodRef
  #pragma pack(pop)
  static check_size<sizeof(CADMethodRef), 48 + sizeof(::Array<::Il2CppString*>*)> __System_Runtime_Remoting_Messaging_CADMethodRefSizeCheck;
  static_assert(sizeof(CADMethodRef) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADMethodRef*, "System.Runtime.Remoting.Messaging", "CADMethodRef");
