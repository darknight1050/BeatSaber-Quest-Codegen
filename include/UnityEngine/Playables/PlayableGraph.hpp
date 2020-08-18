// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: IPlayable
  class IPlayable;
  // Forward declaring type: PlayableHandle
  struct PlayableHandle;
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableGraph
  struct PlayableGraph : public System::ValueType {
    public:
    // System.IntPtr m_Handle
    // Offset: 0x0
    System::IntPtr m_Handle;
    // System.UInt32 m_Version
    // Offset: 0x8
    uint m_Version;
    // Creating value type constructor for type: PlayableGraph
    PlayableGraph(System::IntPtr m_Handle_ = {}, uint m_Version_ = {}) : m_Handle{m_Handle_}, m_Version{m_Version_} {}
    // public UnityEngine.Playables.Playable GetRootPlayable(System.Int32 index)
    // Offset: 0x9AE4C0
    UnityEngine::Playables::Playable GetRootPlayable(int index);
    // public System.Boolean Connect(U source, System.Int32 sourceOutputPort, V destination, System.Int32 destinationInputPort)
    // Offset: 0xFFFFFFFF
    template<class U, class V>
    bool Connect(U source, int sourceOutputPort, V destination, int destinationInputPort) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<V>> && is_value_type_v<V>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(*this, "Connect", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()}, source, sourceOutputPort, destination, destinationInputPort)));
    }
    // public System.Boolean IsValid()
    // Offset: 0x9AE4C8
    bool IsValid();
    // public System.Boolean IsPlaying()
    // Offset: 0x9AE508
    bool IsPlaying();
    // public UnityEngine.IExposedPropertyTable GetResolver()
    // Offset: 0x9AE548
    UnityEngine::IExposedPropertyTable* GetResolver();
    // public System.Int32 GetPlayableCount()
    // Offset: 0x9AE588
    int GetPlayableCount();
    // public System.Int32 GetRootPlayableCount()
    // Offset: 0x9AE5C8
    int GetRootPlayableCount();
    // UnityEngine.Playables.PlayableHandle CreatePlayableHandle()
    // Offset: 0x9AE608
    UnityEngine::Playables::PlayableHandle CreatePlayableHandle();
    // System.Boolean CreateScriptOutputInternal(System.String name, UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x9AE610
    bool CreateScriptOutputInternal(::Il2CppString* name, UnityEngine::Playables::PlayableOutputHandle& handle);
    // UnityEngine.Playables.PlayableHandle GetRootPlayableInternal(System.Int32 index)
    // Offset: 0x9AE668
    UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(int index);
    // private System.Boolean ConnectInternal(UnityEngine.Playables.PlayableHandle source, System.Int32 sourceOutputPort, UnityEngine.Playables.PlayableHandle destination, System.Int32 destinationInputPort)
    // Offset: 0x9AE670
    bool ConnectInternal(UnityEngine::Playables::PlayableHandle source, int sourceOutputPort, UnityEngine::Playables::PlayableHandle destination, int destinationInputPort);
    // static private System.Boolean IsValid_Injected(UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1373F58
    static bool IsValid_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Boolean IsPlaying_Injected(UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1373FD8
    static bool IsPlaying_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private UnityEngine.IExposedPropertyTable GetResolver_Injected(UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1374058
    static UnityEngine::IExposedPropertyTable* GetResolver_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Int32 GetPlayableCount_Injected(UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x13740D8
    static int GetPlayableCount_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Int32 GetRootPlayableCount_Injected(UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1374158
    static int GetRootPlayableCount_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Void CreatePlayableHandle_Injected(UnityEngine.Playables.PlayableGraph _unity_self, UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x1374198
    static void CreatePlayableHandle_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, UnityEngine::Playables::PlayableHandle& ret);
    // static private System.Boolean CreateScriptOutputInternal_Injected(UnityEngine.Playables.PlayableGraph _unity_self, System.String name, UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x1374240
    static bool CreateScriptOutputInternal_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, ::Il2CppString* name, UnityEngine::Playables::PlayableOutputHandle& handle);
    // static private System.Void GetRootPlayableInternal_Injected(UnityEngine.Playables.PlayableGraph _unity_self, System.Int32 index, UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x1374298
    static void GetRootPlayableInternal_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, int index, UnityEngine::Playables::PlayableHandle& ret);
    // static private System.Boolean ConnectInternal_Injected(UnityEngine.Playables.PlayableGraph _unity_self, UnityEngine.Playables.PlayableHandle source, System.Int32 sourceOutputPort, UnityEngine.Playables.PlayableHandle destination, System.Int32 destinationInputPort)
    // Offset: 0x1374368
    static bool ConnectInternal_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, UnityEngine::Playables::PlayableHandle& source, int sourceOutputPort, UnityEngine::Playables::PlayableHandle& destination, int destinationInputPort);
  }; // UnityEngine.Playables.PlayableGraph
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");
#pragma pack(pop)
