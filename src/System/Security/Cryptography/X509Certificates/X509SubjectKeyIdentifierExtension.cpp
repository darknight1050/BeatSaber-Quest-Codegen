// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
#include "System/Security/Cryptography/X509Certificates/X509SubjectKeyIdentifierExtension.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: System.Security.Cryptography.X509Certificates.PublicKey
#include "System/Security/Cryptography/X509Certificates/PublicKey.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
#include "System/Security/Cryptography/X509Certificates/X509SubjectKeyIdentifierHashAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.String oid
::CsString* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_get_oid() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", "oid"));
}
// Autogenerated static field setter
// Set static field: static System.String oid
void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_set_oid(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", "oid", value));
}
// Autogenerated static field getter
// Get static field: static System.String friendlyName
::CsString* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_get_friendlyName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", "friendlyName"));
}
// Autogenerated static field setter
// Set static field: static System.String friendlyName
void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_set_friendlyName(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", "friendlyName", value));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension..ctor
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(System::Security::Cryptography::AsnEncodedData* encodedSubjectKeyIdentifier, bool critical) {
  return (X509SubjectKeyIdentifierExtension*)THROW_UNLESS(il2cpp_utils::New("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", encodedSubjectKeyIdentifier, critical));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension..ctor
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(::Array<uint8_t>* subjectKeyIdentifier, bool critical) {
  return (X509SubjectKeyIdentifierExtension*)THROW_UNLESS(il2cpp_utils::New("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", subjectKeyIdentifier, critical));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension..ctor
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(::CsString* subjectKeyIdentifier, bool critical) {
  return (X509SubjectKeyIdentifierExtension*)THROW_UNLESS(il2cpp_utils::New("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", subjectKeyIdentifier, critical));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension..ctor
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(System::Security::Cryptography::X509Certificates::PublicKey* key, bool critical) {
  return (X509SubjectKeyIdentifierExtension*)THROW_UNLESS(il2cpp_utils::New("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", key, critical));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension..ctor
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(System::Security::Cryptography::X509Certificates::PublicKey* key, System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical) {
  return (X509SubjectKeyIdentifierExtension*)THROW_UNLESS(il2cpp_utils::New("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", key, algorithm, critical));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension.get_SubjectKeyIdentifier
::CsString* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_SubjectKeyIdentifier"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension.FromHexChar
uint8_t System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChar(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", "FromHexChar", c));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension.FromHexChars
uint8_t System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChars(::Il2CppChar c1, ::Il2CppChar c2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", "FromHexChars", c1, c2));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension.FromHex
::Array<uint8_t>* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHex(::CsString* hex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension", "FromHex", hex));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension.Decode
System::Security::Cryptography::AsnDecodeStatus System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Decode(::Array<uint8_t>* extension) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::AsnDecodeStatus>(this, "Decode", extension));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension.Encode
::Array<uint8_t>* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Encode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "Encode"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension..ctor
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor() {
  return (X509SubjectKeyIdentifierExtension*)THROW_UNLESS(il2cpp_utils::New("System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension.CopyFrom
void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyFrom", asnEncodedData));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension.ToString
::CsString* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::ToString(bool multiLine) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString", multiLine));
}
