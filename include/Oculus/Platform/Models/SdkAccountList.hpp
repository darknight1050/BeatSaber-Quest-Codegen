// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: SdkAccount
  class SdkAccount;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.SdkAccountList
  class SdkAccountList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::SdkAccount*> {
    public:
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0xE91E68
    static SdkAccountList* New_ctor(System::IntPtr a);
  }; // Oculus.Platform.Models.SdkAccountList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SdkAccountList*, "Oculus.Platform.Models", "SdkAccountList");
#pragma pack(pop)
