// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Camera
  class Camera;
  // Skipping declaration: Vector2 because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Skipping declaration: BlockingObjects because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.GraphicRaycaster
  // [AddComponentMenu] Offset: DC603C
  // [RequireComponent] Offset: DC603C
  class GraphicRaycaster : public UnityEngine::EventSystems::BaseRaycaster {
    public:
    // Nested type: UnityEngine::UI::GraphicRaycaster::BlockingObjects
    struct BlockingObjects;
    // Nested type: UnityEngine::UI::GraphicRaycaster::$$c
    class $$c;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.GraphicRaycaster/BlockingObjects
    struct BlockingObjects/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: BlockingObjects
      constexpr BlockingObjects(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects None
      static UnityEngine::UI::GraphicRaycaster::BlockingObjects _get_None();
      // Set static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects None
      static void _set_None(UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
      // static field const value: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects TwoD
      static constexpr const int TwoD = 1;
      // Get static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects TwoD
      static UnityEngine::UI::GraphicRaycaster::BlockingObjects _get_TwoD();
      // Set static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects TwoD
      static void _set_TwoD(UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
      // static field const value: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects ThreeD
      static constexpr const int ThreeD = 2;
      // Get static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects ThreeD
      static UnityEngine::UI::GraphicRaycaster::BlockingObjects _get_ThreeD();
      // Set static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects ThreeD
      static void _set_ThreeD(UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
      // static field const value: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects All
      static constexpr const int All = 3;
      // Get static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects All
      static UnityEngine::UI::GraphicRaycaster::BlockingObjects _get_All();
      // Set static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects All
      static void _set_All(UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
    }; // UnityEngine.UI.GraphicRaycaster/BlockingObjects
    #pragma pack(pop)
    static check_size<sizeof(GraphicRaycaster::BlockingObjects), 0 + sizeof(int)> __UnityEngine_UI_GraphicRaycaster_BlockingObjectsSizeCheck;
    static_assert(sizeof(GraphicRaycaster::BlockingObjects) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xDC775C
    // private System.Boolean m_IgnoreReversedGraphics
    // Size: 0x1
    // Offset: 0x20
    bool m_IgnoreReversedGraphics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IgnoreReversedGraphics and: m_BlockingObjects
    char __padding0[0x3] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xDC77A8
    // private UnityEngine.UI.GraphicRaycaster/BlockingObjects m_BlockingObjects
    // Size: 0x4
    // Offset: 0x24
    UnityEngine::UI::GraphicRaycaster::BlockingObjects m_BlockingObjects;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::GraphicRaycaster::BlockingObjects) == 0x4);
    // protected UnityEngine.LayerMask m_BlockingMask
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::LayerMask m_BlockingMask;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // Padding between fields: m_BlockingMask and: m_Canvas
    char __padding2[0x4] = {};
    // private UnityEngine.Canvas m_Canvas
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Canvas* m_Canvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UI.Graphic> m_RaycastResults
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* m_RaycastResults;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>*) == 0x8);
    // Creating value type constructor for type: GraphicRaycaster
    GraphicRaycaster(bool m_IgnoreReversedGraphics_ = {}, UnityEngine::UI::GraphicRaycaster::BlockingObjects m_BlockingObjects_ = {}, UnityEngine::LayerMask m_BlockingMask_ = {}, UnityEngine::Canvas* m_Canvas_ = {}, System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* m_RaycastResults_ = {}) noexcept : m_IgnoreReversedGraphics{m_IgnoreReversedGraphics_}, m_BlockingObjects{m_BlockingObjects_}, m_BlockingMask{m_BlockingMask_}, m_Canvas{m_Canvas_}, m_RaycastResults{m_RaycastResults_} {}
    // static field const value: static protected System.Int32 kNoEventMaskSet
    static constexpr const int kNoEventMaskSet = -1;
    // Get static field: static protected System.Int32 kNoEventMaskSet
    static int _get_kNoEventMaskSet();
    // Set static field: static protected System.Int32 kNoEventMaskSet
    static void _set_kNoEventMaskSet(int value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_SortedGraphics
    static System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* _get_s_SortedGraphics();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_SortedGraphics
    static void _set_s_SortedGraphics(System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* value);
    // public System.Boolean get_ignoreReversedGraphics()
    // Offset: 0x18FE97C
    bool get_ignoreReversedGraphics();
    // public System.Void set_ignoreReversedGraphics(System.Boolean value)
    // Offset: 0x18FE984
    void set_ignoreReversedGraphics(bool value);
    // public UnityEngine.UI.GraphicRaycaster/BlockingObjects get_blockingObjects()
    // Offset: 0x18FE990
    UnityEngine::UI::GraphicRaycaster::BlockingObjects get_blockingObjects();
    // public System.Void set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects value)
    // Offset: 0x18FE998
    void set_blockingObjects(UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
    // private UnityEngine.Canvas get_canvas()
    // Offset: 0x18FE880
    UnityEngine::Canvas* get_canvas();
    // static private System.Void Raycast(UnityEngine.Canvas canvas, UnityEngine.Camera eventCamera, UnityEngine.Vector2 pointerPosition, System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> foundGraphics, System.Collections.Generic.List`1<UnityEngine.UI.Graphic> results)
    // Offset: 0x18FF9A0
    static void Raycast(UnityEngine::Canvas* canvas, UnityEngine::Camera* eventCamera, UnityEngine::Vector2 pointerPosition, System::Collections::Generic::IList_1<UnityEngine::UI::Graphic*>* foundGraphics, System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* results);
    // public override System.Int32 get_sortOrderPriority()
    // Offset: 0x18FE828
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Int32 BaseRaycaster::get_sortOrderPriority()
    int get_sortOrderPriority();
    // public override System.Int32 get_renderOrderPriority()
    // Offset: 0x18FE918
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Int32 BaseRaycaster::get_renderOrderPriority()
    int get_renderOrderPriority();
    // protected System.Void .ctor()
    // Offset: 0x18FE9A0
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphicRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::GraphicRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphicRaycaster*, creationType>()));
    }
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x18FEA28
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x18FFE48
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: UnityEngine.Camera BaseRaycaster::get_eventCamera()
    UnityEngine::Camera* get_eventCamera();
    // static private System.Void .cctor()
    // Offset: 0x18FFF90
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.UI.GraphicRaycaster
  #pragma pack(pop)
  static check_size<sizeof(GraphicRaycaster), 56 + sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>*)> __UnityEngine_UI_GraphicRaycasterSizeCheck;
  static_assert(sizeof(GraphicRaycaster) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GraphicRaycaster*, "UnityEngine.UI", "GraphicRaycaster");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GraphicRaycaster::BlockingObjects, "UnityEngine.UI", "GraphicRaycaster/BlockingObjects");
