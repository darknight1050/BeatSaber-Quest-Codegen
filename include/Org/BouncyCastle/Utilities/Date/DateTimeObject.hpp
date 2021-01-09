// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities.Date
namespace Org::BouncyCastle::Utilities::Date {
  // Size: 0x18
  // Autogenerated type: Org.BouncyCastle.Utilities.Date.DateTimeObject
  // [] Offset: FFFFFFFF
  class DateTimeObject : public ::Il2CppObject {
    public:
    // private readonly System.DateTime dt
    // Size: 0x8
    // Offset: 0x10
    System::DateTime dt;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: DateTimeObject
    DateTimeObject(System::DateTime dt_ = {}) noexcept : dt{dt_} {}
    // Creating conversion operator: operator System::DateTime
    constexpr operator System::DateTime() const noexcept {
      return dt;
    }
    // public System.Void .ctor(System.DateTime dt)
    // Offset: 0x18BD8B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeObject* New_ctor(System::DateTime dt) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::Date::DateTimeObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeObject*, creationType>(dt)));
    }
    // public override System.String ToString()
    // Offset: 0x18BD8E4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Utilities.Date.DateTimeObject
  static check_size<sizeof(DateTimeObject), 16 + sizeof(System::DateTime)> __Org_BouncyCastle_Utilities_Date_DateTimeObjectSizeCheck;
  static_assert(sizeof(DateTimeObject) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Date::DateTimeObject*, "Org.BouncyCastle.Utilities.Date", "DateTimeObject");
#pragma pack(pop)
