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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_UpdateManager
  class TMP_UpdateManager : public ::CsObject {
    public:
    // Get static field: static private TMPro.TMP_UpdateManager s_Instance
    static TMPro::TMP_UpdateManager* _get_s_Instance();
    // Set static field: static private TMPro.TMP_UpdateManager s_Instance
    static void _set_s_Instance(TMPro::TMP_UpdateManager* value);
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_LayoutRebuildQueue
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_LayoutRebuildQueue;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_LayoutQueueLookup
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, int>* m_LayoutQueueLookup;
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_GraphicRebuildQueue
    // Offset: 0x20
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_GraphicRebuildQueue;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_GraphicQueueLookup
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<int, int>* m_GraphicQueueLookup;
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_InternalUpdateQueue
    // Offset: 0x30
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_InternalUpdateQueue;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_InternalUpdateLookup
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<int, int>* m_InternalUpdateLookup;
    // static public TMPro.TMP_UpdateManager get_instance()
    // Offset: 0xDAFBC0
    static TMPro::TMP_UpdateManager* get_instance();
    // static System.Void RegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0xDAFE7C
    static void RegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // private System.Void InternalRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0xDAFEA8
    void InternalRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // static public System.Void RegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0xDAFF78
    static void RegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // private System.Boolean InternalRegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0xDAFFA4
    bool InternalRegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // static public System.Void RegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0xDB0074
    static void RegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Boolean InternalRegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0xDB00A0
    bool InternalRegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Void OnBeginFrameRendering(UnityEngine.Rendering.ScriptableRenderContext renderContext, UnityEngine.Camera[] cameras)
    // Offset: 0xDB0170
    void OnBeginFrameRendering(UnityEngine::Rendering::ScriptableRenderContext renderContext, ::Array<UnityEngine::Camera*>* cameras);
    // private System.Void OnCameraPreCull(UnityEngine.Camera cam)
    // Offset: 0xDB0344
    void OnCameraPreCull(UnityEngine::Camera* cam);
    // private System.Void DoRebuilds()
    // Offset: 0xDB0174
    void DoRebuilds();
    // static System.Void UnRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0xDB0348
    static void UnRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // static public System.Void UnRegisterTextElementForRebuild(TMPro.TMP_Text element)
    // Offset: 0xDB0414
    static void UnRegisterTextElementForRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0xDB0460
    void InternalUnRegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0xDB0500
    void InternalUnRegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0xDB0374
    void InternalUnRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // protected System.Void .ctor()
    // Offset: 0xDAFC44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_UpdateManager* New_ctor();
  }; // TMPro.TMP_UpdateManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_UpdateManager*, "TMPro", "TMP_UpdateManager");
#pragma pack(pop)
