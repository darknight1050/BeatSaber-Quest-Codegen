// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Team
  class Team;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.TeamList
  class TeamList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Team*> {
    public:
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0xE05EDC
    static TeamList* New_ctor(System::IntPtr a);
  }; // Oculus.Platform.Models.TeamList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::TeamList*, "Oculus.Platform.Models", "TeamList");
#pragma pack(pop)
