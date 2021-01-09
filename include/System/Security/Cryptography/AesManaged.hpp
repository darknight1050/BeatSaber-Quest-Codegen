// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.Aes
#include "System/Security/Cryptography/Aes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RijndaelManaged
  class RijndaelManaged;
  // Skipping declaration: CipherMode because it is already included!
  // Skipping declaration: PaddingMode because it is already included!
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x50
  // Autogenerated type: System.Security.Cryptography.AesManaged
  // [] Offset: FFFFFFFF
  class AesManaged : public System::Security::Cryptography::Aes {
    public:
    // Writing base type padding for base size: 0x44 to desired offset: 0x48
    char ___base_padding[0x4] = {};
    // private System.Security.Cryptography.RijndaelManaged m_rijndael
    // Size: 0x8
    // Offset: 0x48
    System::Security::Cryptography::RijndaelManaged* m_rijndael;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RijndaelManaged*) == 0x8);
    // Creating value type constructor for type: AesManaged
    AesManaged(System::Security::Cryptography::RijndaelManaged* m_rijndael_ = {}) noexcept : m_rijndael{m_rijndael_} {}
    // Creating conversion operator: operator System::Security::Cryptography::RijndaelManaged*
    constexpr operator System::Security::Cryptography::RijndaelManaged*() const noexcept {
      return m_rijndael;
    }
    // public System.Void .ctor()
    // Offset: 0x19B3954
    // Implemented from: System.Security.Cryptography.Aes
    // Base method: System.Void Aes::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AesManaged* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AesManaged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AesManaged*, creationType>()));
    }
    // public override System.Int32 get_FeedbackSize()
    // Offset: 0x19B3AA4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Int32 SymmetricAlgorithm::get_FeedbackSize()
    int get_FeedbackSize();
    // public override System.Byte[] get_IV()
    // Offset: 0x19B3AC4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_IV()
    ::Array<uint8_t>* get_IV();
    // public override System.Void set_IV(System.Byte[] value)
    // Offset: 0x19B3AE4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_IV(System.Byte[] value)
    void set_IV(::Array<uint8_t>* value);
    // public override System.Byte[] get_Key()
    // Offset: 0x19B3B04
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key()
    ::Array<uint8_t>* get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x19B3B24
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::Array<uint8_t>* value);
    // public override System.Int32 get_KeySize()
    // Offset: 0x19B3B44
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Int32 SymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // public override System.Void set_KeySize(System.Int32 value)
    // Offset: 0x19B3B68
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_KeySize(System.Int32 value)
    void set_KeySize(int value);
    // public override System.Security.Cryptography.CipherMode get_Mode()
    // Offset: 0x19B3B8C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.CipherMode SymmetricAlgorithm::get_Mode()
    System::Security::Cryptography::CipherMode get_Mode();
    // public override System.Void set_Mode(System.Security.Cryptography.CipherMode value)
    // Offset: 0x19B3BB0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode value)
    void set_Mode(System::Security::Cryptography::CipherMode value);
    // public override System.Security.Cryptography.PaddingMode get_Padding()
    // Offset: 0x19B3C64
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.PaddingMode SymmetricAlgorithm::get_Padding()
    System::Security::Cryptography::PaddingMode get_Padding();
    // public override System.Void set_Padding(System.Security.Cryptography.PaddingMode value)
    // Offset: 0x19B3C88
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode value)
    void set_Padding(System::Security::Cryptography::PaddingMode value);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor()
    // Offset: 0x19B3CAC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor()
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor();
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] key, System.Byte[] iv)
    // Offset: 0x19B3CD0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] key, System.Byte[] iv)
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Array<uint8_t>* key, ::Array<uint8_t>* iv);
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor()
    // Offset: 0x19B3E24
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor()
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor();
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] key, System.Byte[] iv)
    // Offset: 0x19B3E48
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] key, System.Byte[] iv)
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Array<uint8_t>* key, ::Array<uint8_t>* iv);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x19B3F9C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void GenerateIV()
    // Offset: 0x19B40B4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
    // public override System.Void GenerateKey()
    // Offset: 0x19B40D8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
  }; // System.Security.Cryptography.AesManaged
  static check_size<sizeof(AesManaged), 72 + sizeof(System::Security::Cryptography::RijndaelManaged*)> __System_Security_Cryptography_AesManagedSizeCheck;
  static_assert(sizeof(AesManaged) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AesManaged*, "System.Security.Cryptography", "AesManaged");
#pragma pack(pop)
