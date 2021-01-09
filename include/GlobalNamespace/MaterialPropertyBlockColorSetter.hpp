// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  // Autogenerated type: MaterialPropertyBlockColorSetter
  // [] Offset: FFFFFFFF
  class MaterialPropertyBlockColorSetter : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _property
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* property;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // private System.Int32 _propertyId
    // Size: 0x4
    // Offset: 0x28
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x2C
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MaterialPropertyBlockColorSetter
    MaterialPropertyBlockColorSetter(::Il2CppString* property_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, int propertyId_ = {}, bool isInitialized_ = {}) noexcept : property{property_}, materialPropertyBlockController{materialPropertyBlockController_}, propertyId{propertyId_}, isInitialized{isInitialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Color get_color()
    // Offset: 0x187DD7C
    UnityEngine::Color get_color();
    // public MaterialPropertyBlockController get_materialPropertyBlockController()
    // Offset: 0x187DDB4
    GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController();
    // public System.Void set_materialPropertyBlockController(MaterialPropertyBlockController value)
    // Offset: 0x187DDBC
    void set_materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController* value);
    // protected System.Void Awake()
    // Offset: 0x187DDC4
    void Awake();
    // private System.Void InitIfNeeded()
    // Offset: 0x187DE04
    void InitIfNeeded();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x187DE44
    void SetColor(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x187DED8
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
  static check_size<sizeof(MaterialPropertyBlockColorSetter), 44 + sizeof(bool)> __GlobalNamespace_MaterialPropertyBlockColorSetterSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockColorSetter) == 0x2D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockColorSetter*, "", "MaterialPropertyBlockColorSetter");
#pragma pack(pop)
