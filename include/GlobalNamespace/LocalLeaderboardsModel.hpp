// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: LeaderboardType because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: LocalLeaderboardsModel
  class LocalLeaderboardsModel : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::LocalLeaderboardsModel::LeaderboardType
    struct LeaderboardType;
    // Nested type: GlobalNamespace::LocalLeaderboardsModel::ScoreData
    class ScoreData;
    // Nested type: GlobalNamespace::LocalLeaderboardsModel::LeaderboardData
    class LeaderboardData;
    // Nested type: GlobalNamespace::LocalLeaderboardsModel::SavedLeaderboardsData
    class SavedLeaderboardsData;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LocalLeaderboardsModel/LeaderboardType
    struct LeaderboardType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LeaderboardType
      constexpr LeaderboardType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LocalLeaderboardsModel/LeaderboardType AllTime
      static constexpr const int AllTime = 0;
      // Get static field: static public LocalLeaderboardsModel/LeaderboardType AllTime
      static GlobalNamespace::LocalLeaderboardsModel::LeaderboardType _get_AllTime();
      // Set static field: static public LocalLeaderboardsModel/LeaderboardType AllTime
      static void _set_AllTime(GlobalNamespace::LocalLeaderboardsModel::LeaderboardType value);
      // static field const value: static public LocalLeaderboardsModel/LeaderboardType Daily
      static constexpr const int Daily = 1;
      // Get static field: static public LocalLeaderboardsModel/LeaderboardType Daily
      static GlobalNamespace::LocalLeaderboardsModel::LeaderboardType _get_Daily();
      // Set static field: static public LocalLeaderboardsModel/LeaderboardType Daily
      static void _set_Daily(GlobalNamespace::LocalLeaderboardsModel::LeaderboardType value);
    }; // LocalLeaderboardsModel/LeaderboardType
    #pragma pack(pop)
    static check_size<sizeof(LocalLeaderboardsModel::LeaderboardType), 0 + sizeof(int)> __GlobalNamespace_LocalLeaderboardsModel_LeaderboardTypeSizeCheck;
    static_assert(sizeof(LocalLeaderboardsModel::LeaderboardType) == 0x4);
    // private System.Int32 _maxNumberOfScoresInLeaderboard
    // Size: 0x4
    // Offset: 0x18
    int maxNumberOfScoresInLeaderboard;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxNumberOfScoresInLeaderboard and: newScoreWasAddedToLeaderboardEvent
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE1659C
    // private System.Action`2<System.String,LocalLeaderboardsModel/LeaderboardType> newScoreWasAddedToLeaderboardEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_2<::Il2CppString*, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType>* newScoreWasAddedToLeaderboardEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<::Il2CppString*, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<LocalLeaderboardsModel/LeaderboardType,System.Int32> _lastScorePositions
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<GlobalNamespace::LocalLeaderboardsModel::LeaderboardType, int>* lastScorePositions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::LocalLeaderboardsModel::LeaderboardType, int>*) == 0x8);
    // private System.String _lastScoreLeaderboardId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* lastScoreLeaderboardId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<LocalLeaderboardsModel/LeaderboardData> _leaderboardsData
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>* leaderboardsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>*) == 0x8);
    // private System.Collections.Generic.List`1<LocalLeaderboardsModel/LeaderboardData> _dailyLeaderboardsData
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>* dailyLeaderboardsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>*) == 0x8);
    // Creating value type constructor for type: LocalLeaderboardsModel
    LocalLeaderboardsModel(int maxNumberOfScoresInLeaderboard_ = {}, System::Action_2<::Il2CppString*, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType>* newScoreWasAddedToLeaderboardEvent_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::LocalLeaderboardsModel::LeaderboardType, int>* lastScorePositions_ = {}, ::Il2CppString* lastScoreLeaderboardId_ = {}, System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>* leaderboardsData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>* dailyLeaderboardsData_ = {}) noexcept : maxNumberOfScoresInLeaderboard{maxNumberOfScoresInLeaderboard_}, newScoreWasAddedToLeaderboardEvent{newScoreWasAddedToLeaderboardEvent_}, lastScorePositions{lastScorePositions_}, lastScoreLeaderboardId{lastScoreLeaderboardId_}, leaderboardsData{leaderboardsData_}, dailyLeaderboardsData{dailyLeaderboardsData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kLocalLeaderboardsFileName
    static constexpr const char* kLocalLeaderboardsFileName = "LocalLeaderboards.dat";
    // Get static field: static private System.String kLocalLeaderboardsFileName
    static ::Il2CppString* _get_kLocalLeaderboardsFileName();
    // Set static field: static private System.String kLocalLeaderboardsFileName
    static void _set_kLocalLeaderboardsFileName(::Il2CppString* value);
    // static field const value: static private System.String kLocalDailyLeaderboardsFileName
    static constexpr const char* kLocalDailyLeaderboardsFileName = "LocalDailyLeaderboards.dat";
    // Get static field: static private System.String kLocalDailyLeaderboardsFileName
    static ::Il2CppString* _get_kLocalDailyLeaderboardsFileName();
    // Set static field: static private System.String kLocalDailyLeaderboardsFileName
    static void _set_kLocalDailyLeaderboardsFileName(::Il2CppString* value);
    // public System.Void add_newScoreWasAddedToLeaderboardEvent(System.Action`2<System.String,LocalLeaderboardsModel/LeaderboardType> value)
    // Offset: 0x10CC198
    void add_newScoreWasAddedToLeaderboardEvent(System::Action_2<::Il2CppString*, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType>* value);
    // public System.Void remove_newScoreWasAddedToLeaderboardEvent(System.Action`2<System.String,LocalLeaderboardsModel/LeaderboardType> value)
    // Offset: 0x10CC4B0
    void remove_newScoreWasAddedToLeaderboardEvent(System::Action_2<::Il2CppString*, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType>* value);
    // protected System.Void OnDisable()
    // Offset: 0x10CCAC4
    void OnDisable();
    // static private System.Void LoadLeaderboardsData(System.String filename, out System.Collections.Generic.List`1<LocalLeaderboardsModel/LeaderboardData> leaderboardsData)
    // Offset: 0x10CCB2C
    static void LoadLeaderboardsData(::Il2CppString* filename, System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>*& leaderboardsData);
    // static private System.Void SaveLeaderboardsData(System.String filename, System.Collections.Generic.List`1<LocalLeaderboardsModel/LeaderboardData> leaderboardsData)
    // Offset: 0x10CCC20
    static void SaveLeaderboardsData(::Il2CppString* filename, System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>* leaderboardsData);
    // public System.Void Load()
    // Offset: 0x10CCA00
    void Load();
    // public System.Void Save()
    // Offset: 0x10CCAC8
    void Save();
    // private System.Collections.Generic.List`1<LocalLeaderboardsModel/LeaderboardData> GetLeaderboardsData(LocalLeaderboardsModel/LeaderboardType leaderboardType)
    // Offset: 0x10CCDE0
    System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>* GetLeaderboardsData(GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType);
    // private LocalLeaderboardsModel/LeaderboardData GetLeaderboardData(System.String leaderboardId, LocalLeaderboardsModel/LeaderboardType leaderboardType)
    // Offset: 0x10CCE08
    GlobalNamespace::LocalLeaderboardsModel::LeaderboardData* GetLeaderboardData(::Il2CppString* leaderboardId, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType);
    // private System.Int64 GetCurrentTimestamp()
    // Offset: 0x10CCED8
    int64_t GetCurrentTimestamp();
    // protected System.Void UpdateDailyLeaderboard(System.String leaderboardId)
    // Offset: 0x10CCCE8
    void UpdateDailyLeaderboard(::Il2CppString* leaderboardId);
    // private System.Void AddScore(System.String leaderboardId, LocalLeaderboardsModel/LeaderboardType leaderboardType, System.String playerName, System.Int32 score, System.Boolean fullCombo)
    // Offset: 0x10CCFA0
    void AddScore(::Il2CppString* leaderboardId, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType, ::Il2CppString* playerName, int score, bool fullCombo);
    // private System.Boolean WillScoreGoIntoLeaderboard(System.String leaderboardId, LocalLeaderboardsModel/LeaderboardType leaderboardType, System.Int32 score)
    // Offset: 0x10CD224
    bool WillScoreGoIntoLeaderboard(::Il2CppString* leaderboardId, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType, int score);
    // public System.Collections.Generic.List`1<LocalLeaderboardsModel/ScoreData> GetScores(System.String leaderboardId, LocalLeaderboardsModel/LeaderboardType leaderboardType)
    // Offset: 0x10CC7F8
    System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>* GetScores(::Il2CppString* leaderboardId, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType);
    // public System.Int32 GetHighScore(System.String leaderboardId, LocalLeaderboardsModel/LeaderboardType leaderboardType)
    // Offset: 0x10CD2F8
    int GetHighScore(::Il2CppString* leaderboardId, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType);
    // public System.Int32 GetPositionInLeaderboard(System.String leaderboardId, LocalLeaderboardsModel/LeaderboardType leaderboardType, System.Int32 score)
    // Offset: 0x10CD38C
    int GetPositionInLeaderboard(::Il2CppString* leaderboardId, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType, int score);
    // public System.Int32 GetLastScorePosition(System.String leaderboardId, LocalLeaderboardsModel/LeaderboardType leaderboardType)
    // Offset: 0x10CC814
    int GetLastScorePosition(::Il2CppString* leaderboardId, GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType);
    // public System.Void ClearLastScorePosition()
    // Offset: 0x10CC720
    void ClearLastScorePosition();
    // public System.Void AddScore(System.String leaderboardId, System.String playerName, System.Int32 score, System.Boolean fullCombo)
    // Offset: 0x10CD468
    void AddScore(::Il2CppString* leaderboardId, ::Il2CppString* playerName, int score, bool fullCombo);
    // public System.Boolean WillScoreGoIntoLeaderboard(System.String leaderboardId, System.Int32 score)
    // Offset: 0x10CD4D0
    bool WillScoreGoIntoLeaderboard(::Il2CppString* leaderboardId, int score);
    // public System.Void ClearLeaderboard(System.String leaderboardId)
    // Offset: 0x10CD530
    void ClearLeaderboard(::Il2CppString* leaderboardId);
    // public System.Void ClearAllLeaderboards(System.Boolean deleteLeaderboardFile)
    // Offset: 0x10CC650
    void ClearAllLeaderboards(bool deleteLeaderboardFile);
    // protected override System.Void OnEnable()
    // Offset: 0x10CC9D8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x10CD668
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalLeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalLeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalLeaderboardsModel*, creationType>()));
    }
  }; // LocalLeaderboardsModel
  #pragma pack(pop)
  static check_size<sizeof(LocalLeaderboardsModel), 64 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>*)> __GlobalNamespace_LocalLeaderboardsModelSizeCheck;
  static_assert(sizeof(LocalLeaderboardsModel) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardsModel*, "", "LocalLeaderboardsModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardsModel::LeaderboardType, "", "LocalLeaderboardsModel/LeaderboardType");
