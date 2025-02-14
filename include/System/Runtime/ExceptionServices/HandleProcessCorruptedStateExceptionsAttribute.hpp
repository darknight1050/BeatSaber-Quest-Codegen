// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.ExceptionServices.HandleProcessCorruptedStateExceptionsAttribute
  // [AttributeUsageAttribute] Offset: D7E89C
  class HandleProcessCorruptedStateExceptionsAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: HandleProcessCorruptedStateExceptionsAttribute
    HandleProcessCorruptedStateExceptionsAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1402B20
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandleProcessCorruptedStateExceptionsAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandleProcessCorruptedStateExceptionsAttribute*, creationType>()));
    }
  }; // System.Runtime.ExceptionServices.HandleProcessCorruptedStateExceptionsAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*, "System.Runtime.ExceptionServices", "HandleProcessCorruptedStateExceptionsAttribute");
