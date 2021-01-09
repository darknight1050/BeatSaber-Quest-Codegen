// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF1
  // Autogenerated type: SteamVR_LoadLevel
  // [] Offset: FFFFFFFF
  class SteamVR_LoadLevel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45
    class $LoadLevel$d__45;
    // public System.String levelName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String internalProcessPath
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* internalProcessPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String internalProcessArgs
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* internalProcessArgs;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean loadAdditive
    // Size: 0x1
    // Offset: 0x30
    bool loadAdditive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean loadAsync
    // Size: 0x1
    // Offset: 0x31
    bool loadAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loadAsync and: loadingScreen
    char __padding4[0x6] = {};
    // public UnityEngine.Texture loadingScreen
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Texture* loadingScreen;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture progressBarEmpty
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Texture* progressBarEmpty;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture progressBarFull
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Texture* progressBarFull;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public System.Single loadingScreenWidthInMeters
    // Size: 0x4
    // Offset: 0x50
    float loadingScreenWidthInMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single progressBarWidthInMeters
    // Size: 0x4
    // Offset: 0x54
    float progressBarWidthInMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loadingScreenDistance
    // Size: 0x4
    // Offset: 0x58
    float loadingScreenDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: loadingScreenDistance and: loadingScreenTransform
    char __padding10[0x4] = {};
    // public UnityEngine.Transform loadingScreenTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* loadingScreenTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform progressBarTransform
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* progressBarTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Texture front
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Texture* front;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture back
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Texture* back;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture left
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Texture* left;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture right
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::Texture* right;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture top
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Texture* top;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture bottom
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::Texture* bottom;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Color backgroundColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color backgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Boolean showGrid
    // Size: 0x1
    // Offset: 0xB0
    bool showGrid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showGrid and: fadeOutTime
    char __padding20[0x3] = {};
    // public System.Single fadeOutTime
    // Size: 0x4
    // Offset: 0xB4
    float fadeOutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fadeInTime
    // Size: 0x4
    // Offset: 0xB8
    float fadeInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single postLoadSettleTime
    // Size: 0x4
    // Offset: 0xBC
    float postLoadSettleTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loadingScreenFadeInTime
    // Size: 0x4
    // Offset: 0xC0
    float loadingScreenFadeInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loadingScreenFadeOutTime
    // Size: 0x4
    // Offset: 0xC4
    float loadingScreenFadeOutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single fadeRate
    // Size: 0x4
    // Offset: 0xC8
    float fadeRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single alpha
    // Size: 0x4
    // Offset: 0xCC
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AsyncOperation async
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::AsyncOperation* async;
    // Field size check
    static_assert(sizeof(UnityEngine::AsyncOperation*) == 0x8);
    // private UnityEngine.RenderTexture renderTexture
    // Size: 0x8
    // Offset: 0xD8
    UnityEngine::RenderTexture* renderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private System.UInt64 loadingScreenOverlayHandle
    // Size: 0x8
    // Offset: 0xE0
    uint64_t loadingScreenOverlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 progressBarOverlayHandle
    // Size: 0x8
    // Offset: 0xE8
    uint64_t progressBarOverlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Boolean autoTriggerOnEnable
    // Size: 0x1
    // Offset: 0xF0
    bool autoTriggerOnEnable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SteamVR_LoadLevel
    SteamVR_LoadLevel(::Il2CppString* levelName_ = {}, ::Il2CppString* internalProcessPath_ = {}, ::Il2CppString* internalProcessArgs_ = {}, bool loadAdditive_ = {}, bool loadAsync_ = {}, UnityEngine::Texture* loadingScreen_ = {}, UnityEngine::Texture* progressBarEmpty_ = {}, UnityEngine::Texture* progressBarFull_ = {}, float loadingScreenWidthInMeters_ = {}, float progressBarWidthInMeters_ = {}, float loadingScreenDistance_ = {}, UnityEngine::Transform* loadingScreenTransform_ = {}, UnityEngine::Transform* progressBarTransform_ = {}, UnityEngine::Texture* front_ = {}, UnityEngine::Texture* back_ = {}, UnityEngine::Texture* left_ = {}, UnityEngine::Texture* right_ = {}, UnityEngine::Texture* top_ = {}, UnityEngine::Texture* bottom_ = {}, UnityEngine::Color backgroundColor_ = {}, bool showGrid_ = {}, float fadeOutTime_ = {}, float fadeInTime_ = {}, float postLoadSettleTime_ = {}, float loadingScreenFadeInTime_ = {}, float loadingScreenFadeOutTime_ = {}, float fadeRate_ = {}, float alpha_ = {}, UnityEngine::AsyncOperation* async_ = {}, UnityEngine::RenderTexture* renderTexture_ = {}, uint64_t loadingScreenOverlayHandle_ = {}, uint64_t progressBarOverlayHandle_ = {}, bool autoTriggerOnEnable_ = {}) noexcept : levelName{levelName_}, internalProcessPath{internalProcessPath_}, internalProcessArgs{internalProcessArgs_}, loadAdditive{loadAdditive_}, loadAsync{loadAsync_}, loadingScreen{loadingScreen_}, progressBarEmpty{progressBarEmpty_}, progressBarFull{progressBarFull_}, loadingScreenWidthInMeters{loadingScreenWidthInMeters_}, progressBarWidthInMeters{progressBarWidthInMeters_}, loadingScreenDistance{loadingScreenDistance_}, loadingScreenTransform{loadingScreenTransform_}, progressBarTransform{progressBarTransform_}, front{front_}, back{back_}, left{left_}, right{right_}, top{top_}, bottom{bottom_}, backgroundColor{backgroundColor_}, showGrid{showGrid_}, fadeOutTime{fadeOutTime_}, fadeInTime{fadeInTime_}, postLoadSettleTime{postLoadSettleTime_}, loadingScreenFadeInTime{loadingScreenFadeInTime_}, loadingScreenFadeOutTime{loadingScreenFadeOutTime_}, fadeRate{fadeRate_}, alpha{alpha_}, async{async_}, renderTexture{renderTexture_}, loadingScreenOverlayHandle{loadingScreenOverlayHandle_}, progressBarOverlayHandle{progressBarOverlayHandle_}, autoTriggerOnEnable{autoTriggerOnEnable_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private SteamVR_LoadLevel _active
    static GlobalNamespace::SteamVR_LoadLevel* _get__active();
    // Set static field: static private SteamVR_LoadLevel _active
    static void _set__active(GlobalNamespace::SteamVR_LoadLevel* value);
    // static public System.Boolean get_loading()
    // Offset: 0x110AD80
    static bool get_loading();
    // static public System.Single get_progress()
    // Offset: 0x110AE18
    static float get_progress();
    // static public UnityEngine.Texture get_progressTexture()
    // Offset: 0x110AF2C
    static UnityEngine::Texture* get_progressTexture();
    // private System.Void OnEnable()
    // Offset: 0x110B004
    void OnEnable();
    // public System.Void Trigger()
    // Offset: 0x110B014
    void Trigger();
    // static public System.Void Begin(System.String levelName, System.Boolean showGrid, System.Single fadeOutTime, System.Single r, System.Single g, System.Single b, System.Single a)
    // Offset: 0x110B128
    static void Begin(::Il2CppString* levelName, bool showGrid, float fadeOutTime, float r, float g, float b, float a);
    // private System.Void OnGUI()
    // Offset: 0x110B23C
    void OnGUI();
    // private System.Void Update()
    // Offset: 0x110BA34
    void Update();
    // private System.Collections.IEnumerator LoadLevel()
    // Offset: 0x110B0AC
    System::Collections::IEnumerator* LoadLevel();
    // private System.UInt64 GetOverlayHandle(System.String overlayName, UnityEngine.Transform transform, System.Single widthInMeters)
    // Offset: 0x110B698
    uint64_t GetOverlayHandle(::Il2CppString* overlayName, UnityEngine::Transform* transform, float widthInMeters);
    // public System.Void .ctor()
    // Offset: 0x110BCB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_LoadLevel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_LoadLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_LoadLevel*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x110BD14
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_LoadLevel
  static check_size<sizeof(SteamVR_LoadLevel), 240 + sizeof(bool)> __GlobalNamespace_SteamVR_LoadLevelSizeCheck;
  static_assert(sizeof(SteamVR_LoadLevel) == 0xF1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_LoadLevel*, "", "SteamVR_LoadLevel");
#pragma pack(pop)
