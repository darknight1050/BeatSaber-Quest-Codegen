// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.RandomNumberGenerator
  class RandomNumberGenerator : public ::CsObject, public System::IDisposable {
    public:
    // static public System.Security.Cryptography.RandomNumberGenerator Create()
    // Offset: 0xDD4A34
    static System::Security::Cryptography::RandomNumberGenerator* Create();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xDD4A30
    void Dispose(bool disposing);
    // public System.Void GetBytes(System.Byte[] data)
    // Offset: 0xFFFFFFFF
    void GetBytes(::Array<uint8_t>* data);
    // protected System.Void .ctor()
    // Offset: 0xDD46F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RandomNumberGenerator* New_ctor();
    // public System.Void Dispose()
    // Offset: 0xDD4A8C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Security.Cryptography.RandomNumberGenerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RandomNumberGenerator*, "System.Security.Cryptography", "RandomNumberGenerator");
#pragma pack(pop)
