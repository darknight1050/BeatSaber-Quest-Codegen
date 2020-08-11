// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Playables.INotificationReceiver
#include "UnityEngine/Playables/INotificationReceiver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: SignalAsset
  class SignalAsset;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: INotification
  class INotification;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.SignalReceiver
  class SignalReceiver : public UnityEngine::MonoBehaviour, public UnityEngine::Playables::INotificationReceiver {
    public:
    // Nested type: UnityEngine::Timeline::SignalReceiver::EventKeyValue
    class EventKeyValue;
    // private UnityEngine.Timeline.SignalReceiver/EventKeyValue m_Events
    // Offset: 0x18
    UnityEngine::Timeline::SignalReceiver::EventKeyValue* m_Events;
    // public System.Void AddReaction(UnityEngine.Timeline.SignalAsset asset, UnityEngine.Events.UnityEvent reaction)
    // Offset: 0x10899EC
    void AddReaction(UnityEngine::Timeline::SignalAsset* asset, UnityEngine::Events::UnityEvent* reaction);
    // public System.Int32 AddEmptyReaction(UnityEngine.Events.UnityEvent reaction)
    // Offset: 0x1089B9C
    int AddEmptyReaction(UnityEngine::Events::UnityEvent* reaction);
    // public System.Void Remove(UnityEngine.Timeline.SignalAsset asset)
    // Offset: 0x1089C18
    void Remove(UnityEngine::Timeline::SignalAsset* asset);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.SignalAsset> GetRegisteredSignals()
    // Offset: 0x1089D94
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::SignalAsset*>* GetRegisteredSignals();
    // public UnityEngine.Events.UnityEvent GetReaction(UnityEngine.Timeline.SignalAsset key)
    // Offset: 0x1089DB0
    UnityEngine::Events::UnityEvent* GetReaction(UnityEngine::Timeline::SignalAsset* key);
    // public System.Int32 Count()
    // Offset: 0x1089DEC
    int Count();
    // public System.Void ChangeSignalAtIndex(System.Int32 idx, UnityEngine.Timeline.SignalAsset newKey)
    // Offset: 0x1089E44
    void ChangeSignalAtIndex(int idx, UnityEngine::Timeline::SignalAsset* newKey);
    // public System.Void RemoveAtIndex(System.Int32 idx)
    // Offset: 0x108A06C
    void RemoveAtIndex(int idx);
    // public System.Void ChangeReactionAtIndex(System.Int32 idx, UnityEngine.Events.UnityEvent reaction)
    // Offset: 0x108A1B0
    void ChangeReactionAtIndex(int idx, UnityEngine::Events::UnityEvent* reaction);
    // public UnityEngine.Events.UnityEvent GetReactionAtIndex(System.Int32 idx)
    // Offset: 0x108A26C
    UnityEngine::Events::UnityEvent* GetReactionAtIndex(int idx);
    // public UnityEngine.Timeline.SignalAsset GetSignalAssetAtIndex(System.Int32 idx)
    // Offset: 0x108A32C
    UnityEngine::Timeline::SignalAsset* GetSignalAssetAtIndex(int idx);
    // private System.Void OnEnable()
    // Offset: 0x108A3EC
    void OnEnable();
    // public System.Void OnNotify(UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0x10897FC
    // Implemented from: UnityEngine.Playables.INotificationReceiver
    // Base method: System.Void INotificationReceiver::OnNotify(UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    void OnNotify(UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification* notification, ::CsObject* context);
    // public System.Void .ctor()
    // Offset: 0x108A3F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SignalReceiver* New_ctor();
  }; // UnityEngine.Timeline.SignalReceiver
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalReceiver*, "UnityEngine.Timeline", "SignalReceiver");
#pragma pack(pop)
