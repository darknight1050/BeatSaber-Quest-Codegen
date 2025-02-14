// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Activation.IActivator
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionReturnMessage
  class IConstructionReturnMessage;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.ContextLevelActivator
  class ContextLevelActivator : public ::Il2CppObject/*, public System::Runtime::Remoting::Activation::IActivator*/ {
    public:
    // private System.Runtime.Remoting.Activation.IActivator m_NextActivator
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::Activation::IActivator* m_NextActivator;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Activation::IActivator*) == 0x8);
    // Creating value type constructor for type: ContextLevelActivator
    ContextLevelActivator(System::Runtime::Remoting::Activation::IActivator* m_NextActivator_ = {}) noexcept : m_NextActivator{m_NextActivator_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Activation::IActivator
    operator System::Runtime::Remoting::Activation::IActivator() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Activation::IActivator*>(this);
    }
    // Creating conversion operator: operator System::Runtime::Remoting::Activation::IActivator*
    constexpr operator System::Runtime::Remoting::Activation::IActivator*() const noexcept {
      return m_NextActivator;
    }
    // public System.Void .ctor(System.Runtime.Remoting.Activation.IActivator next)
    // Offset: 0x1405FB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextLevelActivator* New_ctor(System::Runtime::Remoting::Activation::IActivator* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Activation::ContextLevelActivator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextLevelActivator*, creationType>(next)));
    }
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0x1406D00
    System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    // Offset: 0x1406D08
    System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
  }; // System.Runtime.Remoting.Activation.ContextLevelActivator
  #pragma pack(pop)
  static check_size<sizeof(ContextLevelActivator), 16 + sizeof(System::Runtime::Remoting::Activation::IActivator*)> __System_Runtime_Remoting_Activation_ContextLevelActivatorSizeCheck;
  static_assert(sizeof(ContextLevelActivator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::ContextLevelActivator*, "System.Runtime.Remoting.Activation", "ContextLevelActivator");
