// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Security.Principal.WindowsPrincipal
#include "System/Security/Principal/WindowsPrincipal.hpp"
// Including type: System.Security.Principal.WindowsIdentity
#include "System/Security/Principal/WindowsIdentity.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Principal.WindowsPrincipal..ctor
System::Security::Principal::WindowsPrincipal* System::Security::Principal::WindowsPrincipal::New_ctor(System::Security::Principal::WindowsIdentity* ntIdentity) {
  return (WindowsPrincipal*)THROW_UNLESS(il2cpp_utils::New("System.Security.Principal", "WindowsPrincipal", ntIdentity));
}
