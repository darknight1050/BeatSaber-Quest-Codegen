// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: KawaseBlurRendererSO
#include "GlobalNamespace/KawaseBlurRendererSO.hpp"
// Including type: KawaseBlurRendererSO/KernelSize
#include "GlobalNamespace/KawaseBlurRendererSO_KernelSize.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: KawaseBlurRendererSO/BloomKernel
  class KawaseBlurRendererSO::BloomKernel : public ::Il2CppObject {
    public:
    // public KawaseBlurRendererSO/KernelSize kernelSize
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize;
    // Field size check
    static_assert(sizeof(GlobalNamespace::KawaseBlurRendererSO::KernelSize) == 0x4);
    // public System.Int32 sharedPartWithNext
    // Size: 0x4
    // Offset: 0x14
    int sharedPartWithNext;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BloomKernel
    BloomKernel(GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize_ = {}, int sharedPartWithNext_ = {}) noexcept : kernelSize{kernelSize_}, sharedPartWithNext{sharedPartWithNext_} {}
    // public System.Void .ctor()
    // Offset: 0x1D6F800
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KawaseBlurRendererSO::BloomKernel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::KawaseBlurRendererSO::BloomKernel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KawaseBlurRendererSO::BloomKernel*, creationType>()));
    }
  }; // KawaseBlurRendererSO/BloomKernel
  #pragma pack(pop)
  static check_size<sizeof(KawaseBlurRendererSO::BloomKernel), 20 + sizeof(int)> __GlobalNamespace_KawaseBlurRendererSO_BloomKernelSizeCheck;
  static_assert(sizeof(KawaseBlurRendererSO::BloomKernel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBlurRendererSO::BloomKernel*, "", "KawaseBlurRendererSO/BloomKernel");
