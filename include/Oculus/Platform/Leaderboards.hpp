// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: LeaderboardFilterType
  struct LeaderboardFilterType;
  // Forward declaring type: LeaderboardStartAt
  struct LeaderboardStartAt;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntryList
  class LeaderboardEntryList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Leaderboards
  class Leaderboards : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> GetNextEntries(Oculus.Platform.Models.LeaderboardEntryList list)
    // Offset: 0xDF54D8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* GetNextEntries(Oculus::Platform::Models::LeaderboardEntryList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> GetPreviousEntries(Oculus.Platform.Models.LeaderboardEntryList list)
    // Offset: 0xDF5608
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* GetPreviousEntries(Oculus::Platform::Models::LeaderboardEntryList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> GetEntries(System.String leaderboardName, System.Int32 limit, Oculus.Platform.LeaderboardFilterType filter, Oculus.Platform.LeaderboardStartAt startAt)
    // Offset: 0xDF5738
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* GetEntries(::Il2CppString* leaderboardName, int limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> GetEntriesAfterRank(System.String leaderboardName, System.Int32 limit, System.UInt64 afterRank)
    // Offset: 0xDF5874
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* GetEntriesAfterRank(::Il2CppString* leaderboardName, int limit, uint64_t afterRank);
    // static public Oculus.Platform.Request`1<System.Boolean> WriteEntry(System.String leaderboardName, System.Int64 score, System.Byte[] extraData, System.Boolean forceUpdate)
    // Offset: 0xDF59A8
    static Oculus::Platform::Request_1<bool>* WriteEntry(::Il2CppString* leaderboardName, int64_t score, ::Array<uint8_t>* extraData, bool forceUpdate);
  }; // Oculus.Platform.Leaderboards
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Leaderboards*, "Oculus.Platform", "Leaderboards");
#pragma pack(pop)
