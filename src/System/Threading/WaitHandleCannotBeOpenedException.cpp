// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.WaitHandleCannotBeOpenedException
#include "System/Threading/WaitHandleCannotBeOpenedException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.WaitHandleCannotBeOpenedException..ctor
System::Threading::WaitHandleCannotBeOpenedException* System::Threading::WaitHandleCannotBeOpenedException::New_ctor() {
  return (WaitHandleCannotBeOpenedException*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "WaitHandleCannotBeOpenedException"));
}
// Autogenerated method: System.Threading.WaitHandleCannotBeOpenedException..ctor
System::Threading::WaitHandleCannotBeOpenedException* System::Threading::WaitHandleCannotBeOpenedException::New_ctor(::CsString* message) {
  return (WaitHandleCannotBeOpenedException*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "WaitHandleCannotBeOpenedException", message));
}
// Autogenerated method: System.Threading.WaitHandleCannotBeOpenedException..ctor
System::Threading::WaitHandleCannotBeOpenedException* System::Threading::WaitHandleCannotBeOpenedException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (WaitHandleCannotBeOpenedException*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "WaitHandleCannotBeOpenedException", info, context));
}
