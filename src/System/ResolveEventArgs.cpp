// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ResolveEventArgs
#include "System/ResolveEventArgs.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.ResolveEventArgs..ctor
System::ResolveEventArgs* System::ResolveEventArgs::New_ctor(::CsString* name) {
  return (ResolveEventArgs*)THROW_UNLESS(il2cpp_utils::New("System", "ResolveEventArgs", name));
}
// Autogenerated method: System.ResolveEventArgs..ctor
System::ResolveEventArgs* System::ResolveEventArgs::New_ctor(::CsString* name, System::Reflection::Assembly* requestingAssembly) {
  return (ResolveEventArgs*)THROW_UNLESS(il2cpp_utils::New("System", "ResolveEventArgs", name, requestingAssembly));
}
