// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/RawTouch
#include "GlobalNamespace/OVRInput_RawTouch.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerBase/VirtualTouchMap
  class OVRInput::OVRControllerBase::VirtualTouchMap : public ::Il2CppObject {
    public:
    // public OVRInput/RawTouch None
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::OVRInput::RawTouch None;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch One
    // Size: 0x4
    // Offset: 0x14
    GlobalNamespace::OVRInput::RawTouch One;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch Two
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawTouch Two;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch Three
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::OVRInput::RawTouch Three;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch Four
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::OVRInput::RawTouch Four;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch PrimaryIndexTrigger
    // Size: 0x4
    // Offset: 0x24
    GlobalNamespace::OVRInput::RawTouch PrimaryIndexTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch PrimaryThumbstick
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::OVRInput::RawTouch PrimaryThumbstick;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch PrimaryThumbRest
    // Size: 0x4
    // Offset: 0x2C
    GlobalNamespace::OVRInput::RawTouch PrimaryThumbRest;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch PrimaryTouchpad
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::OVRInput::RawTouch PrimaryTouchpad;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch SecondaryIndexTrigger
    // Size: 0x4
    // Offset: 0x34
    GlobalNamespace::OVRInput::RawTouch SecondaryIndexTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch SecondaryThumbstick
    // Size: 0x4
    // Offset: 0x38
    GlobalNamespace::OVRInput::RawTouch SecondaryThumbstick;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch SecondaryThumbRest
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::OVRInput::RawTouch SecondaryThumbRest;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // public OVRInput/RawTouch SecondaryTouchpad
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::OVRInput::RawTouch SecondaryTouchpad;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawTouch) == 0x4);
    // Creating value type constructor for type: VirtualTouchMap
    VirtualTouchMap(GlobalNamespace::OVRInput::RawTouch None_ = {}, GlobalNamespace::OVRInput::RawTouch One_ = {}, GlobalNamespace::OVRInput::RawTouch Two_ = {}, GlobalNamespace::OVRInput::RawTouch Three_ = {}, GlobalNamespace::OVRInput::RawTouch Four_ = {}, GlobalNamespace::OVRInput::RawTouch PrimaryIndexTrigger_ = {}, GlobalNamespace::OVRInput::RawTouch PrimaryThumbstick_ = {}, GlobalNamespace::OVRInput::RawTouch PrimaryThumbRest_ = {}, GlobalNamespace::OVRInput::RawTouch PrimaryTouchpad_ = {}, GlobalNamespace::OVRInput::RawTouch SecondaryIndexTrigger_ = {}, GlobalNamespace::OVRInput::RawTouch SecondaryThumbstick_ = {}, GlobalNamespace::OVRInput::RawTouch SecondaryThumbRest_ = {}, GlobalNamespace::OVRInput::RawTouch SecondaryTouchpad_ = {}) noexcept : None{None_}, One{One_}, Two{Two_}, Three{Three_}, Four{Four_}, PrimaryIndexTrigger{PrimaryIndexTrigger_}, PrimaryThumbstick{PrimaryThumbstick_}, PrimaryThumbRest{PrimaryThumbRest_}, PrimaryTouchpad{PrimaryTouchpad_}, SecondaryIndexTrigger{SecondaryIndexTrigger_}, SecondaryThumbstick{SecondaryThumbstick_}, SecondaryThumbRest{SecondaryThumbRest_}, SecondaryTouchpad{SecondaryTouchpad_} {}
    // public OVRInput/RawTouch ToRawMask(OVRInput/Touch virtualMask)
    // Offset: 0x14FF65C
    GlobalNamespace::OVRInput::RawTouch ToRawMask(GlobalNamespace::OVRInput::Touch virtualMask);
    // public System.Void .ctor()
    // Offset: 0x14FE98C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerBase::VirtualTouchMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerBase::VirtualTouchMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerBase::VirtualTouchMap*, creationType>()));
    }
  }; // OVRInput/OVRControllerBase/VirtualTouchMap
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::OVRControllerBase::VirtualTouchMap), 64 + sizeof(GlobalNamespace::OVRInput::RawTouch)> __GlobalNamespace_OVRInput_OVRControllerBase_VirtualTouchMapSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerBase::VirtualTouchMap) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerBase::VirtualTouchMap*, "", "OVRInput/OVRControllerBase/VirtualTouchMap");
