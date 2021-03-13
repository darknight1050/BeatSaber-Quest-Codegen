// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexCharClass
#include "System/Text/RegularExpressions/RegexCharClass.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexCharClass/SingleRange
  // [] Offset: FFFFFFFF
  class RegexCharClass::SingleRange : public ::Il2CppObject {
    public:
    // System.Char _first
    // Size: 0x2
    // Offset: 0x10
    ::Il2CppChar first;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // System.Char _last
    // Size: 0x2
    // Offset: 0x12
    ::Il2CppChar last;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Creating value type constructor for type: SingleRange
    SingleRange(::Il2CppChar first_ = {}, ::Il2CppChar last_ = {}) noexcept : first{first_}, last{last_} {}
    // System.Void .ctor(System.Char first, System.Char last)
    // Offset: 0x17F723C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexCharClass::SingleRange* New_ctor(::Il2CppChar first, ::Il2CppChar last) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexCharClass::SingleRange::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexCharClass::SingleRange*, creationType>(first, last)));
    }
  }; // System.Text.RegularExpressions.RegexCharClass/SingleRange
  #pragma pack(pop)
  static check_size<sizeof(RegexCharClass::SingleRange), 18 + sizeof(::Il2CppChar)> __System_Text_RegularExpressions_RegexCharClass_SingleRangeSizeCheck;
  static_assert(sizeof(RegexCharClass::SingleRange) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexCharClass::SingleRange*, "System.Text.RegularExpressions", "RegexCharClass/SingleRange");
