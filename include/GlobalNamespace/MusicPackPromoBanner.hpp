// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: DlcPromoExperimentDataSO
#include "GlobalNamespace/DlcPromoExperimentDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MusicPackPromoBanner
  class MusicPackPromoBanner : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _promoText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* promoText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _backgroundImage
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* backgroundImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _coverImage
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Image* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private TMPro.TextMeshProUGUI _promoButtonText
    // Size: 0x8
    // Offset: 0x30
    TMPro::TextMeshProUGUI* promoButtonText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private IBeatmapLevelPack _currentPromoMusicPack
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IBeatmapLevelPack* currentPromoMusicPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPack*) == 0x8);
    // Creating value type constructor for type: MusicPackPromoBanner
    MusicPackPromoBanner(TMPro::TextMeshProUGUI* promoText_ = {}, UnityEngine::UI::Image* backgroundImage_ = {}, UnityEngine::UI::Image* coverImage_ = {}, TMPro::TextMeshProUGUI* promoButtonText_ = {}, GlobalNamespace::IBeatmapLevelPack* currentPromoMusicPack_ = {}) noexcept : promoText{promoText_}, backgroundImage{backgroundImage_}, coverImage{coverImage_}, promoButtonText{promoButtonText_}, currentPromoMusicPack{currentPromoMusicPack_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [LocalizationKeyAttribute] Offset: 0xE27778
    // static field const value: static private System.String kPlayNow
    static constexpr const char* kPlayNow = "PROMO_BANNER_PLAY_NOW_LABEL";
    // Get static field: static private System.String kPlayNow
    static ::Il2CppString* _get_kPlayNow();
    // Set static field: static private System.String kPlayNow
    static void _set_kPlayNow(::Il2CppString* value);
    // [LocalizationKeyAttribute] Offset: 0xE27788
    // static field const value: static private System.String kGetNow
    static constexpr const char* kGetNow = "PROMO_GET_NOW_LABEL";
    // Get static field: static private System.String kGetNow
    static ::Il2CppString* _get_kGetNow();
    // Set static field: static private System.String kGetNow
    static void _set_kGetNow(::Il2CppString* value);
    // public IBeatmapLevelPack get_currentPromoMusicPack()
    // Offset: 0x23EA2BC
    GlobalNamespace::IBeatmapLevelPack* get_currentPromoMusicPack();
    // public System.String get_promoButtonText()
    // Offset: 0x23EA2C4
    ::Il2CppString* get_promoButtonText();
    // public System.Void Setup(DlcPromoExperimentDataSO/MusicPackPromoInfo musicPackPromoData, System.Boolean probablyOwned)
    // Offset: 0x23EA2E0
    void Setup(GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo* musicPackPromoData, bool probablyOwned);
    // public System.Void .ctor()
    // Offset: 0x23EA4A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MusicPackPromoBanner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MusicPackPromoBanner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MusicPackPromoBanner*, creationType>()));
    }
  }; // MusicPackPromoBanner
  #pragma pack(pop)
  static check_size<sizeof(MusicPackPromoBanner), 56 + sizeof(GlobalNamespace::IBeatmapLevelPack*)> __GlobalNamespace_MusicPackPromoBannerSizeCheck;
  static_assert(sizeof(MusicPackPromoBanner) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MusicPackPromoBanner*, "", "MusicPackPromoBanner");
