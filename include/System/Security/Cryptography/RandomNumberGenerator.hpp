// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.RandomNumberGenerator
  class RandomNumberGenerator : public System::IDisposable, public ::Il2CppObject {
    public:
    // static public System.Security.Cryptography.RandomNumberGenerator Create()
    // Offset: 0xD4773C
    static System::Security::Cryptography::RandomNumberGenerator* Create();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xD47738
    void Dispose(bool disposing);
    // public System.Void GetBytes(System.Byte[] data)
    // Offset: 0xFFFFFFFF
    void GetBytes(::Array<uint8_t>* data);
    // protected System.Void .ctor()
    // Offset: 0xD473FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RandomNumberGenerator* New_ctor();
    // public System.Void Dispose()
    // Offset: 0xD47794
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Security.Cryptography.RandomNumberGenerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RandomNumberGenerator*, "System.Security.Cryptography", "RandomNumberGenerator");
#pragma pack(pop)
