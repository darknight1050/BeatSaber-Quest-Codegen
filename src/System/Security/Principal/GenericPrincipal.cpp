// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Principal.GenericPrincipal
#include "System/Security/Principal/GenericPrincipal.hpp"
// Including type: System.Security.Principal.IIdentity
#include "System/Security/Principal/IIdentity.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Principal.GenericPrincipal..ctor
System::Security::Principal::GenericPrincipal* System::Security::Principal::GenericPrincipal::New_ctor(System::Security::Principal::IIdentity* identity, ::Array<::CsString*>* roles) {
  return (GenericPrincipal*)THROW_UNLESS(il2cpp_utils::New("System.Security.Principal", "GenericPrincipal", identity, roles));
}
