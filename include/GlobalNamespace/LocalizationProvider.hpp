// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: Localization
  class Localization;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LocalizationProvider
  class LocalizationProvider : public UnityEngine::ScriptableObject {
    public:
    // private Polyglot.Localization _localization
    // Size: 0x8
    // Offset: 0x18
    Polyglot::Localization* localization;
    // Field size check
    static_assert(sizeof(Polyglot::Localization*) == 0x8);
    // Creating value type constructor for type: LocalizationProvider
    LocalizationProvider(Polyglot::Localization* localization_ = {}) noexcept : localization{localization_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private LocalizationProvider _instance
    static GlobalNamespace::LocalizationProvider* _get__instance();
    // Set static field: static private LocalizationProvider _instance
    static void _set__instance(GlobalNamespace::LocalizationProvider* value);
    // public Polyglot.Localization get_localization()
    // Offset: 0x2332B08
    Polyglot::Localization* get_localization();
    // static public LocalizationProvider get_Instance()
    // Offset: 0x2332B10
    static GlobalNamespace::LocalizationProvider* get_Instance();
    // static public System.Void set_Instance(LocalizationProvider value)
    // Offset: 0x2332C80
    static void set_Instance(GlobalNamespace::LocalizationProvider* value);
    // static public System.Boolean get_HasInstance()
    // Offset: 0x2332B9C
    static bool get_HasInstance();
    // public System.Void .ctor()
    // Offset: 0x2332CD4
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalizationProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationProvider*, creationType>()));
    }
  }; // LocalizationProvider
  #pragma pack(pop)
  static check_size<sizeof(LocalizationProvider), 24 + sizeof(Polyglot::Localization*)> __GlobalNamespace_LocalizationProviderSizeCheck;
  static_assert(sizeof(LocalizationProvider) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizationProvider*, "", "LocalizationProvider");
