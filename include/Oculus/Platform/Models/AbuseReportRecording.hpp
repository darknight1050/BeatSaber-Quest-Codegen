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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AbuseReportRecording
  class AbuseReportRecording : public ::Il2CppObject {
    public:
    // public readonly System.String RecordingUuid
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* RecordingUuid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AbuseReportRecording
    AbuseReportRecording(::Il2CppString* RecordingUuid_ = {}) noexcept : RecordingUuid{RecordingUuid_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return RecordingUuid;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14B1018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbuseReportRecording* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::AbuseReportRecording::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbuseReportRecording*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AbuseReportRecording
  #pragma pack(pop)
  static check_size<sizeof(AbuseReportRecording), 16 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_AbuseReportRecordingSizeCheck;
  static_assert(sizeof(AbuseReportRecording) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AbuseReportRecording*, "Oculus.Platform.Models", "AbuseReportRecording");
