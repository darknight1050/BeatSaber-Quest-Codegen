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
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ThreadStaticAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: C9363C
  // [ComVisibleAttribute] Offset: C9363C
  class ThreadStaticAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ThreadStaticAttribute
    ThreadStaticAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x16F52C0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadStaticAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ThreadStaticAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadStaticAttribute*, creationType>()));
    }
  }; // System.ThreadStaticAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::ThreadStaticAttribute*, "System", "ThreadStaticAttribute");
