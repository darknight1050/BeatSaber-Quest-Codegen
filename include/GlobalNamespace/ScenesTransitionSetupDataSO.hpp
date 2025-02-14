// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: SceneSetupData
  class SceneSetupData;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE3B6C
    // private SceneInfo[] <scenes>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::SceneInfo*>* scenes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SceneInfo*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3B7C
    // private SceneSetupData[] <sceneSetupDataArray>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::SceneSetupData*>* sceneSetupDataArray;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SceneSetupData*>*) == 0x8);
    // Creating value type constructor for type: ScenesTransitionSetupDataSO
    ScenesTransitionSetupDataSO(::Array<GlobalNamespace::SceneInfo*>* scenes_ = {}, ::Array<GlobalNamespace::SceneSetupData*>* sceneSetupDataArray_ = {}) noexcept : scenes{scenes_}, sceneSetupDataArray{sceneSetupDataArray_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public SceneInfo[] get_scenes()
    // Offset: 0x234FB60
    ::Array<GlobalNamespace::SceneInfo*>* get_scenes();
    // private System.Void set_scenes(SceneInfo[] value)
    // Offset: 0x234FB68
    void set_scenes(::Array<GlobalNamespace::SceneInfo*>* value);
    // public SceneSetupData[] get_sceneSetupDataArray()
    // Offset: 0x234FB70
    ::Array<GlobalNamespace::SceneSetupData*>* get_sceneSetupDataArray();
    // private System.Void set_sceneSetupDataArray(SceneSetupData[] value)
    // Offset: 0x234FB78
    void set_sceneSetupDataArray(::Array<GlobalNamespace::SceneSetupData*>* value);
    // protected System.Void Init(SceneInfo[] scenes, SceneSetupData[] sceneSetupData)
    // Offset: 0x234FB80
    void Init(::Array<GlobalNamespace::SceneInfo*>* scenes, ::Array<GlobalNamespace::SceneSetupData*>* sceneSetupData);
    // public System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x234FB88
    void InstallBindings(Zenject::DiContainer* container);
    // public T Get()
    // Offset: 0xFFFFFFFF
    template<class T>
    T Get() {
      static_assert(std::is_convertible_v<T, GlobalNamespace::SceneSetupData*>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScenesTransitionSetupDataSO::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method);
    }
    // protected System.Void .ctor()
    // Offset: 0x234FCC4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // ScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(ScenesTransitionSetupDataSO), 32 + sizeof(::Array<GlobalNamespace::SceneSetupData*>*)> __GlobalNamespace_ScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(ScenesTransitionSetupDataSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScenesTransitionSetupDataSO*, "", "ScenesTransitionSetupDataSO");
