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
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassLight
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: CFF71C
  class BloomPrePassLight : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BloomPrePassLight::LightsDataItem
    class LightsDataItem;
    // private BloomPrePassLightTypeSO _lightType
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomPrePassLightTypeSO* lightType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassLightTypeSO*) == 0x8);
    // private BloomPrePassLightTypeSO _registeredWithLightType
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BloomPrePassLightTypeSO* registeredWithLightType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassLightTypeSO*) == 0x8);
    // private System.Boolean _isRegistered
    // Size: 0x1
    // Offset: 0x28
    bool isRegistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isBeingDestroyed
    // Size: 0x1
    // Offset: 0x29
    bool isBeingDestroyed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BloomPrePassLight
    BloomPrePassLight(GlobalNamespace::BloomPrePassLightTypeSO* lightType_ = {}, GlobalNamespace::BloomPrePassLightTypeSO* registeredWithLightType_ = {}, bool isRegistered_ = {}, bool isBeingDestroyed_ = {}) noexcept : lightType{lightType_}, registeredWithLightType{registeredWithLightType_}, isRegistered{isRegistered_}, isBeingDestroyed{isBeingDestroyed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,System.Collections.Generic.HashSet`1<BloomPrePassLight>> _bloomLightsDict
    static System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>*>* _get__bloomLightsDict();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,System.Collections.Generic.HashSet`1<BloomPrePassLight>> _bloomLightsDict
    static void _set__bloomLightsDict(System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>*>* value);
    // Get static field: static private readonly System.Collections.Generic.List`1<BloomPrePassLight/LightsDataItem> _lightsDataItems
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* _get__lightsDataItems();
    // Set static field: static private readonly System.Collections.Generic.List`1<BloomPrePassLight/LightsDataItem> _lightsDataItems
    static void _set__lightsDataItems(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* value);
    // static public System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,System.Collections.Generic.HashSet`1<BloomPrePassLight>> get_bloomLightsDict()
    // Offset: 0x1CDA42C
    static System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>*>* get_bloomLightsDict();
    // static public System.Collections.Generic.List`1<BloomPrePassLight/LightsDataItem> get_lightsDataItems()
    // Offset: 0x1CDA494
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* get_lightsDataItems();
    // public System.Boolean get_isDirty()
    // Offset: 0xFFFFFFFF
    bool get_isDirty_NEW();
    // protected System.Void OnEnable()
    // Offset: 0x1CDA4FC
    void OnEnable_NEW();
    // protected System.Void OnDisable()
    // Offset: 0x1CDA77C
    void OnDisable_NEW();
    // protected System.Void OnDestroy()
    // Offset: 0x1CDA844
    void OnDestroy();
    // private System.Void RegisterLight()
    // Offset: 0x1CDA500
    void RegisterLight();
    // private System.Void UnregisterLight()
    // Offset: 0x1CDA780
    void UnregisterLight();
    // protected System.Void DidRegisterLight()
    // Offset: 0xFFFFFFFF
    void DidRegisterLight_NEW();
    // public System.Void FillMeshData(System.Int32 lightNum, UnityEngine.Vector3[] vertices, UnityEngine.Color[] colors, UnityEngine.Vector4[] viewPos, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    // Offset: 0xFFFFFFFF
    void FillMeshData_NEW(int lightNum, ::Array<UnityEngine::Vector3>* vertices, ::Array<UnityEngine::Color>* colors, ::Array<UnityEngine::Vector4>* viewPos, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float lineWidth);
    // public System.Void Refresh()
    // Offset: 0xFFFFFFFF
    void Refresh_NEW();
    // protected System.Void .ctor()
    // Offset: 0x1CDA888
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassLight*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CDA890
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassLight
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassLight), 41 + sizeof(bool)> __GlobalNamespace_BloomPrePassLightSizeCheck;
  static_assert(sizeof(BloomPrePassLight) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLight*, "", "BloomPrePassLight");
