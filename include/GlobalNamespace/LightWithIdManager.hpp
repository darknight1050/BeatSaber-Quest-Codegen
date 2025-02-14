// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILightWithId
  class ILightWithId;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: LightWithIdManager
  class LightWithIdManager : public UnityEngine::MonoBehaviour {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDF4980
    // private System.Action didChangeSomeColorsThisFrameEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action* didChangeSomeColorsThisFrameEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF4990
    // private System.Action`2<System.Int32,UnityEngine.Color> didSetColorForIdEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_2<int, UnityEngine::Color>* didSetColorForIdEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<int, UnityEngine::Color>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ILightWithId>[] _lights
    // Size: 0x8
    // Offset: 0x28
    ::Array<System::Collections::Generic::List_1<GlobalNamespace::ILightWithId*>*>* lights;
    // Field size check
    static_assert(sizeof(::Array<System::Collections::Generic::List_1<GlobalNamespace::ILightWithId*>*>*) == 0x8);
    // private readonly System.Nullable`1<UnityEngine.Color>[] _colors
    // Size: 0x8
    // Offset: 0x30
    ::Array<System::Nullable_1<UnityEngine::Color>>* colors;
    // Field size check
    static_assert(sizeof(::Array<System::Nullable_1<UnityEngine::Color>>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ILightWithId> _lightsToUnregister
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::ILightWithId*>* lightsToUnregister;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::ILightWithId*>*) == 0x8);
    // private System.Boolean _didChangeSomeColorsThisFrame
    // Size: 0x1
    // Offset: 0x40
    bool didChangeSomeColorsThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LightWithIdManager
    LightWithIdManager(System::Action* didChangeSomeColorsThisFrameEvent_ = {}, System::Action_2<int, UnityEngine::Color>* didSetColorForIdEvent_ = {}, ::Array<System::Collections::Generic::List_1<GlobalNamespace::ILightWithId*>*>* lights_ = {}, ::Array<System::Nullable_1<UnityEngine::Color>>* colors_ = {}, System::Collections::Generic::List_1<GlobalNamespace::ILightWithId*>* lightsToUnregister_ = {}, bool didChangeSomeColorsThisFrame_ = {}) noexcept : didChangeSomeColorsThisFrameEvent{didChangeSomeColorsThisFrameEvent_}, didSetColorForIdEvent{didSetColorForIdEvent_}, lights{lights_}, colors{colors_}, lightsToUnregister{lightsToUnregister_}, didChangeSomeColorsThisFrame{didChangeSomeColorsThisFrame_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxLightId
    static constexpr const int kMaxLightId = 20;
    // Get static field: static private System.Int32 kMaxLightId
    static int _get_kMaxLightId();
    // Set static field: static private System.Int32 kMaxLightId
    static void _set_kMaxLightId(int value);
    // public System.Void add_didChangeSomeColorsThisFrameEvent(System.Action value)
    // Offset: 0x1D71818
    void add_didChangeSomeColorsThisFrameEvent(System::Action* value);
    // public System.Void remove_didChangeSomeColorsThisFrameEvent(System.Action value)
    // Offset: 0x1D718BC
    void remove_didChangeSomeColorsThisFrameEvent(System::Action* value);
    // public System.Void add_didSetColorForIdEvent(System.Action`2<System.Int32,UnityEngine.Color> value)
    // Offset: 0x1D71960
    void add_didSetColorForIdEvent(System::Action_2<int, UnityEngine::Color>* value);
    // public System.Void remove_didSetColorForIdEvent(System.Action`2<System.Int32,UnityEngine.Color> value)
    // Offset: 0x1D71A04
    void remove_didSetColorForIdEvent(System::Action_2<int, UnityEngine::Color>* value);
    // public System.Nullable`1<UnityEngine.Color>[] get_colors()
    // Offset: 0x1D71AA8
    ::Array<System::Nullable_1<UnityEngine::Color>>* get_colors();
    // protected System.Void LateUpdate()
    // Offset: 0x1D71AB0
    void LateUpdate();
    // public System.Void RegisterLight(ILightWithId lightWithId)
    // Offset: 0x1D71CA0
    void RegisterLight(GlobalNamespace::ILightWithId* lightWithId);
    // public System.Void UnregisterLight(ILightWithId lightWithId)
    // Offset: 0x1D72010
    void UnregisterLight(GlobalNamespace::ILightWithId* lightWithId);
    // public System.Void SetColorForId(System.Int32 lightId, UnityEngine.Color color)
    // Offset: 0x1D721F4
    void SetColorForId(int lightId, UnityEngine::Color color);
    // public UnityEngine.Color GetColorForId(System.Int32 lightId)
    // Offset: 0x1D72458
    UnityEngine::Color GetColorForId(int lightId);
    // public System.Void .ctor()
    // Offset: 0x1D72508
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightWithIdManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightWithIdManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightWithIdManager*, creationType>()));
    }
  }; // LightWithIdManager
  #pragma pack(pop)
  static check_size<sizeof(LightWithIdManager), 64 + sizeof(bool)> __GlobalNamespace_LightWithIdManagerSizeCheck;
  static_assert(sizeof(LightWithIdManager) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightWithIdManager*, "", "LightWithIdManager");
