// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: ScoreFormatter
  // [] Offset: FFFFFFFF
  class ScoreFormatter : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ScoreFormatter
    ScoreFormatter() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDC2D64
    // Get static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
    static System::Globalization::NumberFormatInfo* _get__numberFormatInfo();
    // Set static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
    static void _set__numberFormatInfo(System::Globalization::NumberFormatInfo* value);
    // static private System.Void .cctor()
    // Offset: 0xFC80F0
    static void _cctor();
    // static public System.String Format(System.Int32 score)
    // Offset: 0xFC81E0
    static ::Il2CppString* Format(int score);
    // public System.Void .ctor()
    // Offset: 0xFC8264
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreFormatter*, creationType>()));
    }
  }; // ScoreFormatter
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreFormatter*, "", "ScoreFormatter");
#pragma pack(pop)
