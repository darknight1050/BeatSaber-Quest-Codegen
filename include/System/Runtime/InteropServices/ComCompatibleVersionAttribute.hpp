// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ComCompatibleVersionAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: C97A7C
  // [ComVisibleAttribute] Offset: C97A7C
  class ComCompatibleVersionAttribute : public System::Attribute {
    public:
    // System.Int32 _major
    // Size: 0x4
    // Offset: 0x10
    int major;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _minor
    // Size: 0x4
    // Offset: 0x14
    int minor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _build
    // Size: 0x4
    // Offset: 0x18
    int build;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _revision
    // Size: 0x4
    // Offset: 0x1C
    int revision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ComCompatibleVersionAttribute
    ComCompatibleVersionAttribute(int major_ = {}, int minor_ = {}, int build_ = {}, int revision_ = {}) noexcept : major{major_}, minor{minor_}, build{build_}, revision{revision_} {}
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build, System.Int32 revision)
    // Offset: 0x130030C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComCompatibleVersionAttribute* New_ctor(int major, int minor, int build, int revision) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::ComCompatibleVersionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComCompatibleVersionAttribute*, creationType>(major, minor, build, revision)));
    }
  }; // System.Runtime.InteropServices.ComCompatibleVersionAttribute
  #pragma pack(pop)
  static check_size<sizeof(ComCompatibleVersionAttribute), 28 + sizeof(int)> __System_Runtime_InteropServices_ComCompatibleVersionAttributeSizeCheck;
  static_assert(sizeof(ComCompatibleVersionAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComCompatibleVersionAttribute*, "System.Runtime.InteropServices", "ComCompatibleVersionAttribute");
