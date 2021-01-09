// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Oid
  class Oid;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  // Autogenerated type: System.Security.Cryptography.AsnEncodedData
  // [] Offset: FFFFFFFF
  class AsnEncodedData : public ::Il2CppObject {
    public:
    // System.Security.Cryptography.Oid _oid
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::Oid* oid;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::Oid*) == 0x8);
    // System.Byte[] _raw
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* raw;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: AsnEncodedData
    AsnEncodedData(System::Security::Cryptography::Oid* oid_ = {}, ::Array<uint8_t>* raw_ = {}) noexcept : oid{oid_}, raw{raw_} {}
    // public System.Void .ctor(System.String oid, System.Byte[] rawData)
    // Offset: 0x122AE70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsnEncodedData* New_ctor(::Il2CppString* oid, ::Array<uint8_t>* rawData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AsnEncodedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsnEncodedData*, creationType>(oid, rawData)));
    }
    // public System.Void .ctor(System.Security.Cryptography.Oid oid, System.Byte[] rawData)
    // Offset: 0x122AFD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsnEncodedData* New_ctor(System::Security::Cryptography::Oid* oid, ::Array<uint8_t>* rawData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AsnEncodedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsnEncodedData*, creationType>(oid, rawData)));
    }
    // public System.Security.Cryptography.Oid get_Oid()
    // Offset: 0x122B0AC
    System::Security::Cryptography::Oid* get_Oid();
    // public System.Void set_Oid(System.Security.Cryptography.Oid value)
    // Offset: 0x122B020
    void set_Oid(System::Security::Cryptography::Oid* value);
    // public System.Byte[] get_RawData()
    // Offset: 0x122B0B4
    ::Array<uint8_t>* get_RawData();
    // public System.Void set_RawData(System.Byte[] value)
    // Offset: 0x122AF04
    void set_RawData(::Array<uint8_t>* value);
    // public System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x122B0BC
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // public System.String Format(System.Boolean multiLine)
    // Offset: 0x122B190
    ::Il2CppString* Format(bool multiLine);
    // System.String ToString(System.Boolean multiLine)
    // Offset: 0x122B350
    ::Il2CppString* ToString(bool multiLine);
    // System.String Default(System.Boolean multiLine)
    // Offset: 0x122B238
    ::Il2CppString* Default(bool multiLine);
    // System.String BasicConstraintsExtension(System.Boolean multiLine)
    // Offset: 0x122B4EC
    ::Il2CppString* BasicConstraintsExtension(bool multiLine);
    // System.String EnhancedKeyUsageExtension(System.Boolean multiLine)
    // Offset: 0x122B604
    ::Il2CppString* EnhancedKeyUsageExtension(bool multiLine);
    // System.String KeyUsageExtension(System.Boolean multiLine)
    // Offset: 0x122B71C
    ::Il2CppString* KeyUsageExtension(bool multiLine);
    // System.String SubjectKeyIdentifierExtension(System.Boolean multiLine)
    // Offset: 0x122B834
    ::Il2CppString* SubjectKeyIdentifierExtension(bool multiLine);
    // System.String SubjectAltName(System.Boolean multiLine)
    // Offset: 0x122B94C
    ::Il2CppString* SubjectAltName(bool multiLine);
    // System.String NetscapeCertType(System.Boolean multiLine)
    // Offset: 0x122BCC8
    ::Il2CppString* NetscapeCertType(bool multiLine);
    // protected System.Void .ctor()
    // Offset: 0x122AE68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsnEncodedData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AsnEncodedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsnEncodedData*, creationType>()));
    }
  }; // System.Security.Cryptography.AsnEncodedData
  static check_size<sizeof(AsnEncodedData), 24 + sizeof(::Array<uint8_t>*)> __System_Security_Cryptography_AsnEncodedDataSizeCheck;
  static_assert(sizeof(AsnEncodedData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsnEncodedData*, "System.Security.Cryptography", "AsnEncodedData");
#pragma pack(pop)
