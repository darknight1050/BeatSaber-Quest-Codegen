// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ConcurrentSetItem`2
#include "System/Diagnostics/Tracing/ConcurrentSetItem_2.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.NameInfo
  class NameInfo : public System::Diagnostics::Tracing::ConcurrentSetItem_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Diagnostics::Tracing::EventTags>, System::Diagnostics::Tracing::NameInfo*> {
    public:
    // readonly System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // readonly System.Diagnostics.Tracing.EventTags tags
    // Offset: 0x18
    System::Diagnostics::Tracing::EventTags tags;
    // readonly System.Int32 identity
    // Offset: 0x1C
    int identity;
    // readonly System.Byte[] nameMetadata
    // Offset: 0x20
    ::Array<uint8_t>* nameMetadata;
    // Get static field: static private System.Int32 lastIdentity
    static int _get_lastIdentity();
    // Set static field: static private System.Int32 lastIdentity
    static void _set_lastIdentity(int value);
    // static System.Void ReserveEventIDsBelow(System.Int32 eventId)
    // Offset: 0xCF966C
    static void ReserveEventIDsBelow(int eventId);
    // public System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, System.Int32 typeMetadataSize)
    // Offset: 0xCF9744
    static NameInfo* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, int typeMetadataSize);
    // public System.Int32 Compare(System.Diagnostics.Tracing.NameInfo other)
    // Offset: 0xCF99D8
    int Compare(System::Diagnostics::Tracing::NameInfo* other);
    // public System.Int32 Compare(System.Collections.Generic.KeyValuePair`2<System.String,System.Diagnostics.Tracing.EventTags> key)
    // Offset: 0xCF9AEC
    int Compare(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Diagnostics::Tracing::EventTags> key);
    // private System.Int32 Compare(System.String otherName, System.Diagnostics.Tracing.EventTags otherTags)
    // Offset: 0xCF99F8
    int Compare(::Il2CppString* otherName, System::Diagnostics::Tracing::EventTags otherTags);
    // static private System.Void .cctor()
    // Offset: 0xCF9B48
    static void _cctor();
  }; // System.Diagnostics.Tracing.NameInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::NameInfo*, "System.Diagnostics.Tracing", "NameInfo");
#pragma pack(pop)
