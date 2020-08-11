// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.MatchmakingAdminSnapshotCandidate
  class MatchmakingAdminSnapshotCandidate : public ::CsObject {
    public:
    // public readonly System.Boolean CanMatch
    // Offset: 0x10
    bool CanMatch;
    // public readonly System.Double MyTotalScore
    // Offset: 0x18
    double MyTotalScore;
    // public readonly System.Double TheirCurrentThreshold
    // Offset: 0x20
    double TheirCurrentThreshold;
    // public readonly System.Double TheirTotalScore
    // Offset: 0x28
    double TheirTotalScore;
    // public readonly System.String TraceId
    // Offset: 0x30
    ::CsString* TraceId;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE93AEC
    static MatchmakingAdminSnapshotCandidate* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.MatchmakingAdminSnapshotCandidate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate*, "Oculus.Platform.Models", "MatchmakingAdminSnapshotCandidate");
#pragma pack(pop)
