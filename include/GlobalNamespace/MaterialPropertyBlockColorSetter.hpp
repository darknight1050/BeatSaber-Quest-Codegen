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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x45
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter : public UnityEngine::MonoBehaviour {
    public:
    // private System.Boolean _useTestColor
    // Size: 0x1
    // Offset: 0x18
    bool useTestColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTestColor and: testColor
    char __padding0[0x3] = {};
    // [DrawIfAttribute] Offset: 0xDF501C
    // [ColorUsageAttribute] Offset: 0xDF501C
    // private UnityEngine.Color _testColor
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Color testColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: testColor and: property
    char __padding1[0x4] = {};
    // private System.String _property
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* property;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // private System.Int32 _propertyId
    // Size: 0x4
    // Offset: 0x40
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x44
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MaterialPropertyBlockColorSetter
    MaterialPropertyBlockColorSetter(bool useTestColor_ = {}, UnityEngine::Color testColor_ = {}, ::Il2CppString* property_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, int propertyId_ = {}, bool isInitialized_ = {}) noexcept : useTestColor{useTestColor_}, testColor{testColor_}, property{property_}, materialPropertyBlockController{materialPropertyBlockController_}, propertyId{propertyId_}, isInitialized{isInitialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Color get_color()
    // Offset: 0x1D74158
    UnityEngine::Color get_color();
    // public MaterialPropertyBlockController get_materialPropertyBlockController()
    // Offset: 0x1D74190
    GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController();
    // public System.Void set_materialPropertyBlockController(MaterialPropertyBlockController value)
    // Offset: 0x1D74198
    void set_materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController* value);
    // protected System.Void Awake()
    // Offset: 0x1D741A0
    void Awake();
    // private System.Void InitIfNeeded()
    // Offset: 0x1D741E0
    void InitIfNeeded();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x1D74220
    void SetColor(UnityEngine::Color color);
    // protected System.Void OnValidate()
    // Offset: 0x1D742B4
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x1D74304
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockColorSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyBlockColorSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockColorSetter*, creationType>()));
    }
  }; // MaterialPropertyBlockColorSetter
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockColorSetter), 68 + sizeof(bool)> __GlobalNamespace_MaterialPropertyBlockColorSetterSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockColorSetter) == 0x45);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockColorSetter*, "", "MaterialPropertyBlockColorSetter");
