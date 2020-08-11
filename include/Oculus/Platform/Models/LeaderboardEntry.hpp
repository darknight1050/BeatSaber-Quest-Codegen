// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.LeaderboardEntry
  class LeaderboardEntry : public ::CsObject {
    public:
    // public readonly System.Byte[] ExtraData
    // Offset: 0x10
    ::Array<uint8_t>* ExtraData;
    // public readonly System.Int32 Rank
    // Offset: 0x18
    int Rank;
    // public readonly System.Int64 Score
    // Offset: 0x20
    int64_t Score;
    // public readonly System.DateTime Timestamp
    // Offset: 0x28
    System::DateTime Timestamp;
    // public readonly Oculus.Platform.Models.User User
    // Offset: 0x30
    Oculus::Platform::Models::User* User;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE93758
    static LeaderboardEntry* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LeaderboardEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LeaderboardEntry*, "Oculus.Platform.Models", "LeaderboardEntry");
#pragma pack(pop)
