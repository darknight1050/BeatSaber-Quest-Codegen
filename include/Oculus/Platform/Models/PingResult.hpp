// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.PingResult
  // [] Offset: FFFFFFFF
  class PingResult : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD0C488
    // private System.UInt64 <ID>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    uint64_t ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Nullable`1<System.UInt64> pingTimeUsec
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    System::Nullable_1<uint64_t> pingTimeUsec;
    // Creating value type constructor for type: PingResult
    PingResult(uint64_t ID_ = {}, System::Nullable_1<uint64_t> pingTimeUsec_ = {}) noexcept : ID{ID_}, pingTimeUsec{pingTimeUsec_} {}
    // public System.Void .ctor(System.UInt64 id, System.Nullable`1<System.UInt64> pingTimeUsec)
    // Offset: 0x1389CD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PingResult* New_ctor(uint64_t id, System::Nullable_1<uint64_t> pingTimeUsec) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::PingResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PingResult*, creationType>(id, pingTimeUsec)));
    }
    // public System.UInt64 get_ID()
    // Offset: 0x138D2A0
    uint64_t get_ID();
    // private System.Void set_ID(System.UInt64 value)
    // Offset: 0x138D2A8
    void set_ID(uint64_t value);
    // public System.UInt64 get_PingTimeUsec()
    // Offset: 0x138D2B0
    uint64_t get_PingTimeUsec();
    // public System.Boolean get_IsTimeout()
    // Offset: 0x138D318
    bool get_IsTimeout();
  }; // Oculus.Platform.Models.PingResult
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PingResult*, "Oculus.Platform.Models", "PingResult");
