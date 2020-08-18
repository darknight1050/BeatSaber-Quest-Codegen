// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.StringComparer
#include "System/StringComparer.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.CultureAwareComparer
  class CultureAwareComparer : public System::StringComparer {
    public:
    // private System.Globalization.CompareInfo _compareInfo
    // Offset: 0x10
    System::Globalization::CompareInfo* compareInfo;
    // private System.Boolean _ignoreCase
    // Offset: 0x18
    bool ignoreCase;
    // private System.Globalization.CompareOptions _options
    // Offset: 0x1C
    System::Globalization::CompareOptions options;
    // System.Void .ctor(System.Globalization.CultureInfo culture, System.Boolean ignoreCase)
    // Offset: 0x102BFE0
    static CultureAwareComparer* New_ctor(System::Globalization::CultureInfo* culture, bool ignoreCase);
    // public override System.Int32 Compare(System.String x, System.String y)
    // Offset: 0x102C094
    // Implemented from: System.StringComparer
    // Base method: System.Int32 StringComparer::Compare(System.String x, System.String y)
    int Compare(::Il2CppString* x, ::Il2CppString* y);
    // public override System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x102C0E4
    // Implemented from: System.StringComparer
    // Base method: System.Boolean StringComparer::Equals(System.String x, System.String y)
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // public override System.Int32 GetHashCode(System.String obj)
    // Offset: 0x102C138
    // Implemented from: System.StringComparer
    // Base method: System.Int32 StringComparer::GetHashCode(System.String obj)
    int GetHashCode(::Il2CppString* obj);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x102C1DC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x102C2A4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.CultureAwareComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::CultureAwareComparer*, "System", "CultureAwareComparer");
#pragma pack(pop)
