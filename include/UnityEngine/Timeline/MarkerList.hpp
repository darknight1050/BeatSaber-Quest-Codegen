// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IMarker
  class IMarker;
  // Forward declaring type: TimelineAsset
  class TimelineAsset;
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x12
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Timeline.MarkerList
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CE95A4
  struct MarkerList/*, public System::ValueType, public UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    // [HideInInspector] Offset: 0xCEA834
    // private System.Collections.Generic.List`1<UnityEngine.ScriptableObject> m_Objects
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* m_Objects;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>*) == 0x8);
    // [HideInInspector] Offset: 0xCEA86C
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> m_Cache
    // Size: 0x8
    // Offset: 0x8
    System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>* m_Cache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>*) == 0x8);
    // private System.Boolean m_CacheDirty
    // Size: 0x1
    // Offset: 0x10
    bool m_CacheDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_HasNotifications
    // Size: 0x1
    // Offset: 0x11
    bool m_HasNotifications;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MarkerList
    constexpr MarkerList(System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* m_Objects_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>* m_Cache_ = {}, bool m_CacheDirty_ = {}, bool m_HasNotifications_ = {}) noexcept : m_Objects{m_Objects_}, m_Cache{m_Cache_}, m_CacheDirty{m_CacheDirty_}, m_HasNotifications{m_HasNotifications_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::ISerializationCallbackReceiver
    operator UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // public System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> get_markers()
    // Offset: 0xDF3F30
    System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>* get_markers();
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xDF3F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    MarkerList(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::MarkerList::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(capacity)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, capacity);
    }
    // public System.Void Add(UnityEngine.ScriptableObject item)
    // Offset: 0xDF3F60
    void Add(UnityEngine::ScriptableObject* item);
    // public System.Boolean Remove(UnityEngine.Timeline.IMarker item)
    // Offset: 0xDF3F68
    bool Remove(UnityEngine::Timeline::IMarker* item);
    // public System.Boolean Remove(UnityEngine.ScriptableObject item, UnityEngine.Timeline.TimelineAsset timelineAsset, UnityEngine.Playables.PlayableAsset thingToDirty)
    // Offset: 0xDF3F70
    bool Remove(UnityEngine::ScriptableObject* item, UnityEngine::Timeline::TimelineAsset* timelineAsset, UnityEngine::Playables::PlayableAsset* thingToDirty);
    // public System.Void Clear()
    // Offset: 0xDF3F78
    void Clear();
    // public System.Boolean Contains(UnityEngine.ScriptableObject item)
    // Offset: 0xDF3F80
    bool Contains(UnityEngine::ScriptableObject* item);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.IMarker> GetMarkers()
    // Offset: 0xDF3F88
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::IMarker*>* GetMarkers();
    // public System.Int32 get_Count()
    // Offset: 0xDF3FB0
    int get_Count();
    // public UnityEngine.Timeline.IMarker get_Item(System.Int32 idx)
    // Offset: 0xDF3FB8
    UnityEngine::Timeline::IMarker* get_Item(int idx);
    // public System.Collections.Generic.List`1<UnityEngine.ScriptableObject> GetRawMarkerList()
    // Offset: 0xDF3FC0
    System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* GetRawMarkerList();
    // public UnityEngine.Timeline.IMarker CreateMarker(System.Type type, System.Double time, UnityEngine.Timeline.TrackAsset owner)
    // Offset: 0xDF3FC8
    UnityEngine::Timeline::IMarker* CreateMarker(System::Type* type, double time, UnityEngine::Timeline::TrackAsset* owner);
    // public System.Boolean HasNotifications()
    // Offset: 0xDF3FD0
    bool HasNotifications();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0xDF3FF8
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_NEW();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0xDF3FFC
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_NEW();
    // private System.Void BuildCache()
    // Offset: 0xDF4008
    void BuildCache();
  }; // UnityEngine.Timeline.MarkerList
  #pragma pack(pop)
  static check_size<sizeof(MarkerList), 17 + sizeof(bool)> __UnityEngine_Timeline_MarkerListSizeCheck;
  static_assert(sizeof(MarkerList) == 0x12);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::MarkerList, "UnityEngine.Timeline", "MarkerList");
