// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  // Autogenerated type: System.Security.Cryptography.RandomNumberGenerator
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A4BC
  class RandomNumberGenerator : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: RandomNumberGenerator
    RandomNumberGenerator() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // static public System.Security.Cryptography.RandomNumberGenerator Create()
    // Offset: 0x169FF48
    static System::Security::Cryptography::RandomNumberGenerator* Create();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x169DBE4
    void Dispose(bool disposing);
    // public System.Void GetBytes(System.Byte[] data)
    // Offset: 0xFFFFFFFF
    void GetBytes(::Array<uint8_t>* data);
    // protected System.Void .ctor()
    // Offset: 0x169D8A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomNumberGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RandomNumberGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomNumberGenerator*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x169FFA0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Security.Cryptography.RandomNumberGenerator
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RandomNumberGenerator*, "System.Security.Cryptography", "RandomNumberGenerator");
#pragma pack(pop)
