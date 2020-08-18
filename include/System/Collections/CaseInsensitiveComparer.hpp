// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
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
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.CaseInsensitiveComparer
  class CaseInsensitiveComparer : public System::Collections::IComparer, public ::Il2CppObject {
    public:
    // private System.Globalization.CompareInfo m_compareInfo
    // Offset: 0x10
    System::Globalization::CompareInfo* m_compareInfo;
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x1293230
    static CaseInsensitiveComparer* New_ctor(System::Globalization::CultureInfo* culture);
    // static public System.Collections.CaseInsensitiveComparer get_Default()
    // Offset: 0x12932E4
    static System::Collections::CaseInsensitiveComparer* get_Default();
    // public System.Void .ctor()
    // Offset: 0x129319C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CaseInsensitiveComparer* New_ctor();
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x1293370
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object a, System.Object b)
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* a, ::Il2CppObject* b);
  }; // System.Collections.CaseInsensitiveComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::CaseInsensitiveComparer*, "System.Collections", "CaseInsensitiveComparer");
#pragma pack(pop)
