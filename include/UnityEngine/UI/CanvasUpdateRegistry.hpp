// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::Collections
namespace UnityEngine::UI::Collections {
  // Forward declaring type: IndexedSet`1<T>
  template<typename T>
  class IndexedSet_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ICanvasElement
  class ICanvasElement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x30
  // Autogenerated type: UnityEngine.UI.CanvasUpdateRegistry
  // [] Offset: FFFFFFFF
  class CanvasUpdateRegistry : public ::Il2CppObject {
    public:
    // private System.Boolean m_PerformingLayoutUpdate
    // Size: 0x1
    // Offset: 0x10
    bool m_PerformingLayoutUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_PerformingGraphicUpdate
    // Size: 0x1
    // Offset: 0x11
    bool m_PerformingGraphicUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_PerformingGraphicUpdate and: m_CanvasUpdateProfilerStrings
    char __padding1[0x6] = {};
    // private System.String[] m_CanvasUpdateProfilerStrings
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* m_CanvasUpdateProfilerStrings;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private readonly UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> m_LayoutRebuildQueue
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>*) == 0x8);
    // private readonly UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> m_GraphicRebuildQueue
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>*) == 0x8);
    // Creating value type constructor for type: CanvasUpdateRegistry
    CanvasUpdateRegistry(bool m_PerformingLayoutUpdate_ = {}, bool m_PerformingGraphicUpdate_ = {}, ::Array<::Il2CppString*>* m_CanvasUpdateProfilerStrings_ = {}, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue_ = {}, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue_ = {}) noexcept : m_PerformingLayoutUpdate{m_PerformingLayoutUpdate_}, m_PerformingGraphicUpdate{m_PerformingGraphicUpdate_}, m_CanvasUpdateProfilerStrings{m_CanvasUpdateProfilerStrings_}, m_LayoutRebuildQueue{m_LayoutRebuildQueue_}, m_GraphicRebuildQueue{m_GraphicRebuildQueue_} {}
    // Get static field: static private UnityEngine.UI.CanvasUpdateRegistry s_Instance
    static UnityEngine::UI::CanvasUpdateRegistry* _get_s_Instance();
    // Set static field: static private UnityEngine.UI.CanvasUpdateRegistry s_Instance
    static void _set_s_Instance(UnityEngine::UI::CanvasUpdateRegistry* value);
    // static field const value: static private System.String m_CullingUpdateProfilerString
    static constexpr const char* m_CullingUpdateProfilerString = "ClipperRegistry.Cull";
    // Get static field: static private System.String m_CullingUpdateProfilerString
    static ::Il2CppString* _get_m_CullingUpdateProfilerString();
    // Set static field: static private System.String m_CullingUpdateProfilerString
    static void _set_m_CullingUpdateProfilerString(::Il2CppString* value);
    // Get static field: static private readonly System.Comparison`1<UnityEngine.UI.ICanvasElement> s_SortLayoutFunction
    static System::Comparison_1<UnityEngine::UI::ICanvasElement*>* _get_s_SortLayoutFunction();
    // Set static field: static private readonly System.Comparison`1<UnityEngine.UI.ICanvasElement> s_SortLayoutFunction
    static void _set_s_SortLayoutFunction(System::Comparison_1<UnityEngine::UI::ICanvasElement*>* value);
    // static public UnityEngine.UI.CanvasUpdateRegistry get_instance()
    // Offset: 0x115765C
    static UnityEngine::UI::CanvasUpdateRegistry* get_instance();
    // private System.Boolean ObjectValidForUpdate(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1157724
    bool ObjectValidForUpdate(UnityEngine::UI::ICanvasElement* element);
    // private System.Void CleanInvalidItems()
    // Offset: 0x1157804
    void CleanInvalidItems();
    // private System.Void PerformUpdate()
    // Offset: 0x1157B00
    void PerformUpdate();
    // static private System.Int32 ParentCount(UnityEngine.Transform child)
    // Offset: 0x11583E8
    static int ParentCount(UnityEngine::Transform* child);
    // static private System.Int32 SortLayoutList(UnityEngine.UI.ICanvasElement x, UnityEngine.UI.ICanvasElement y)
    // Offset: 0x11584C8
    static int SortLayoutList(UnityEngine::UI::ICanvasElement* x, UnityEngine::UI::ICanvasElement* y);
    // static public System.Void RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1158634
    static void RegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Boolean TryRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1158740
    static bool TryRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x11586A4
    bool InternalRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Void RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x11587B0
    static void RegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Boolean TryRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x11588F0
    static bool TryRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1158820
    bool InternalRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Void UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1158960
    static void UnRegisterCanvasElementForRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x11589E0
    void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1158B40
    void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Boolean IsRebuildingLayout()
    // Offset: 0x1158CA0
    static bool IsRebuildingLayout();
    // static public System.Boolean IsRebuildingGraphics()
    // Offset: 0x1158D0C
    static bool IsRebuildingGraphics();
    // static private System.Void .cctor()
    // Offset: 0x1158D78
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x11573E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CanvasUpdateRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CanvasUpdateRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CanvasUpdateRegistry*, creationType>()));
    }
  }; // UnityEngine.UI.CanvasUpdateRegistry
  static check_size<sizeof(CanvasUpdateRegistry), 40 + sizeof(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>*)> __UnityEngine_UI_CanvasUpdateRegistrySizeCheck;
  static_assert(sizeof(CanvasUpdateRegistry) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasUpdateRegistry*, "UnityEngine.UI", "CanvasUpdateRegistry");
#pragma pack(pop)
