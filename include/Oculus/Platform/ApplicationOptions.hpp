// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  // Autogenerated type: Oculus.Platform.ApplicationOptions
  // [] Offset: FFFFFFFF
  class ApplicationOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: ApplicationOptions
    ApplicationOptions(System::IntPtr Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetDeeplinkMessage(System.String value)
    // Offset: 0x189E624
    void SetDeeplinkMessage(::Il2CppString* value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.ApplicationOptions options)
    // Offset: 0x189E2E4
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x189E53C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ApplicationOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::ApplicationOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ApplicationOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x189E748
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.ApplicationOptions
  static check_size<sizeof(ApplicationOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_ApplicationOptionsSizeCheck;
  static_assert(sizeof(ApplicationOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ApplicationOptions*, "Oculus.Platform", "ApplicationOptions");
#pragma pack(pop)
