// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.ResultStateException
  // [] Offset: FFFFFFFF
  class ResultStateException : public System::Exception {
    public:
    // Creating value type constructor for type: ResultStateException
    ResultStateException() noexcept {}
    // public NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ResultState* get_ResultState_NEW();
    // public System.Void .ctor(System.String message)
    // Offset: 0x209DE80
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultStateException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::ResultStateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultStateException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x209DEF8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultStateException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::ResultStateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultStateException*, creationType>(info, context)));
    }
  }; // NUnit.Framework.ResultStateException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::ResultStateException*, "NUnit.Framework", "ResultStateException");
