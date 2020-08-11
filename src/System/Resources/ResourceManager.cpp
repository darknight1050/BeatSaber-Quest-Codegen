// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
// Including type: System.Resources.ResourceManager/CultureNameResourceSetPair
#include "System/Resources/ResourceManager_CultureNameResourceSetPair.hpp"
// Including type: System.Resources.ResourceManager/ResourceManagerMediator
#include "System/Resources/ResourceManager_ResourceManagerMediator.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Resources.ResourceSet
#include "System/Resources/ResourceSet.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.Reflection.RuntimeAssembly
#include "System/Reflection/RuntimeAssembly.hpp"
// Including type: System.Resources.IResourceGroveler
#include "System/Resources/IResourceGroveler.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
// Including type: System.Reflection.AssemblyName
#include "System/Reflection/AssemblyName.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Int32 MagicNumber
int System::Resources::ResourceManager::_get_MagicNumber() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Resources", "ResourceManager", "MagicNumber"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32 MagicNumber
void System::Resources::ResourceManager::_set_MagicNumber(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Resources", "ResourceManager", "MagicNumber", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.Int32 HeaderVersionNumber
int System::Resources::ResourceManager::_get_HeaderVersionNumber() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Resources", "ResourceManager", "HeaderVersionNumber"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32 HeaderVersionNumber
void System::Resources::ResourceManager::_set_HeaderVersionNumber(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Resources", "ResourceManager", "HeaderVersionNumber", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Type _minResourceSet
System::Type* System::Resources::ResourceManager::_get__minResourceSet() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("System.Resources", "ResourceManager", "_minResourceSet"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Type _minResourceSet
void System::Resources::ResourceManager::_set__minResourceSet(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Resources", "ResourceManager", "_minResourceSet", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.String ResReaderTypeName
::CsString* System::Resources::ResourceManager::_get_ResReaderTypeName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("System.Resources", "ResourceManager", "ResReaderTypeName"));
}
// Autogenerated static field setter
// Set static field: static readonly System.String ResReaderTypeName
void System::Resources::ResourceManager::_set_ResReaderTypeName(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Resources", "ResourceManager", "ResReaderTypeName", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.String ResSetTypeName
::CsString* System::Resources::ResourceManager::_get_ResSetTypeName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("System.Resources", "ResourceManager", "ResSetTypeName"));
}
// Autogenerated static field setter
// Set static field: static readonly System.String ResSetTypeName
void System::Resources::ResourceManager::_set_ResSetTypeName(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Resources", "ResourceManager", "ResSetTypeName", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.String MscorlibName
::CsString* System::Resources::ResourceManager::_get_MscorlibName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("System.Resources", "ResourceManager", "MscorlibName"));
}
// Autogenerated static field setter
// Set static field: static readonly System.String MscorlibName
void System::Resources::ResourceManager::_set_MscorlibName(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Resources", "ResourceManager", "MscorlibName", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.Int32 DEBUG
int System::Resources::ResourceManager::_get_DEBUG() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Resources", "ResourceManager", "DEBUG"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Int32 DEBUG
void System::Resources::ResourceManager::_set_DEBUG(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Resources", "ResourceManager", "DEBUG", value));
}
// Autogenerated method: System.Resources.ResourceManager.Init
void System::Resources::ResourceManager::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: System.Resources.ResourceManager..ctor
System::Resources::ResourceManager* System::Resources::ResourceManager::New_ctor(::CsString* baseName, System::Reflection::Assembly* assembly) {
  return (ResourceManager*)THROW_UNLESS(il2cpp_utils::New("System.Resources", "ResourceManager", baseName, assembly));
}
// Autogenerated method: System.Resources.ResourceManager.OnDeserializing
void System::Resources::ResourceManager::OnDeserializing(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserializing", ctx));
}
// Autogenerated method: System.Resources.ResourceManager.OnDeserialized
void System::Resources::ResourceManager::OnDeserialized(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserialized", ctx));
}
// Autogenerated method: System.Resources.ResourceManager.OnSerializing
void System::Resources::ResourceManager::OnSerializing(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSerializing", ctx));
}
// Autogenerated method: System.Resources.ResourceManager.CommonAssemblyInit
void System::Resources::ResourceManager::CommonAssemblyInit() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CommonAssemblyInit"));
}
// Autogenerated method: System.Resources.ResourceManager.get_BaseName
::CsString* System::Resources::ResourceManager::get_BaseName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_BaseName"));
}
// Autogenerated method: System.Resources.ResourceManager.get_FallbackLocation
System::Resources::UltimateResourceFallbackLocation System::Resources::ResourceManager::get_FallbackLocation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Resources::UltimateResourceFallbackLocation>(this, "get_FallbackLocation"));
}
// Autogenerated method: System.Resources.ResourceManager.GetResourceFileName
::CsString* System::Resources::ResourceManager::GetResourceFileName(System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetResourceFileName", culture));
}
// Autogenerated method: System.Resources.ResourceManager.GetFirstResourceSet
System::Resources::ResourceSet* System::Resources::ResourceManager::GetFirstResourceSet(System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Resources::ResourceSet*>(this, "GetFirstResourceSet", culture));
}
// Autogenerated method: System.Resources.ResourceManager.GetResourceSet
System::Resources::ResourceSet* System::Resources::ResourceManager::GetResourceSet(System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Resources::ResourceSet*>(this, "GetResourceSet", culture, createIfNotExists, tryParents));
}
// Autogenerated method: System.Resources.ResourceManager.InternalGetResourceSet
System::Resources::ResourceSet* System::Resources::ResourceManager::InternalGetResourceSet(System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Resources::ResourceSet*>(this, "InternalGetResourceSet", culture, createIfNotExists, tryParents));
}
// Autogenerated method: System.Resources.ResourceManager.InternalGetResourceSet
System::Resources::ResourceSet* System::Resources::ResourceManager::InternalGetResourceSet(System::Globalization::CultureInfo* requestedCulture, bool createIfNotExists, bool tryParents, System::Threading::StackCrawlMark& stackMark) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Resources::ResourceSet*>(this, "InternalGetResourceSet", requestedCulture, createIfNotExists, tryParents, stackMark));
}
// Autogenerated method: System.Resources.ResourceManager.AddResourceSet
void System::Resources::ResourceManager::AddResourceSet(System::Collections::Generic::Dictionary_2<::CsString*, System::Resources::ResourceSet*>* localResourceSets, ::CsString* cultureName, System::Resources::ResourceSet*& rs) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Resources", "ResourceManager", "AddResourceSet", localResourceSets, cultureName, rs));
}
// Autogenerated method: System.Resources.ResourceManager.GetSatelliteContractVersion
System::Version* System::Resources::ResourceManager::GetSatelliteContractVersion(System::Reflection::Assembly* a) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Version*>("System.Resources", "ResourceManager", "GetSatelliteContractVersion", a));
}
// Autogenerated method: System.Resources.ResourceManager.CompareNames
bool System::Resources::ResourceManager::CompareNames(::CsString* asmTypeName1, ::CsString* typeName2, System::Reflection::AssemblyName* asmName2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Resources", "ResourceManager", "CompareNames", asmTypeName1, typeName2, asmName2));
}
// Autogenerated method: System.Resources.ResourceManager.SetAppXConfiguration
void System::Resources::ResourceManager::SetAppXConfiguration() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetAppXConfiguration"));
}
// Autogenerated method: System.Resources.ResourceManager.GetString
::CsString* System::Resources::ResourceManager::GetString(::CsString* name, System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetString", name, culture));
}
// Autogenerated method: System.Resources.ResourceManager..cctor
void System::Resources::ResourceManager::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Resources", "ResourceManager", ".cctor"));
}
// Autogenerated method: System.Resources.ResourceManager..ctor
System::Resources::ResourceManager* System::Resources::ResourceManager::New_ctor() {
  return (ResourceManager*)THROW_UNLESS(il2cpp_utils::New("System.Resources", "ResourceManager"));
}
