// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.InvitePanelResultInfo
  class InvitePanelResultInfo : public ::Il2CppObject {
    public:
    // public readonly System.Boolean InvitesSent
    // Size: 0x1
    // Offset: 0x10
    bool InvitesSent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InvitePanelResultInfo
    InvitePanelResultInfo(bool InvitesSent_ = {}) noexcept : InvitesSent{InvitesSent_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return InvitesSent;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14B498C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvitePanelResultInfo* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::InvitePanelResultInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvitePanelResultInfo*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.InvitePanelResultInfo
  #pragma pack(pop)
  static check_size<sizeof(InvitePanelResultInfo), 16 + sizeof(bool)> __Oculus_Platform_Models_InvitePanelResultInfoSizeCheck;
  static_assert(sizeof(InvitePanelResultInfo) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::InvitePanelResultInfo*, "Oculus.Platform.Models", "InvitePanelResultInfo");
