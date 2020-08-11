// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Text.DecoderFallback
#include "System/Text/DecoderFallback.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsString;
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.DecoderReplacementFallback
  class DecoderReplacementFallback : public System::Text::DecoderFallback {
    public:
    // private System.String strDefault
    // Offset: 0x18
    ::CsString* strDefault;
    // public System.Void .ctor(System.String replacement)
    // Offset: 0x12D709C
    static DecoderReplacementFallback* New_ctor(::CsString* replacement);
    // public System.String get_DefaultString()
    // Offset: 0x12D7280
    ::CsString* get_DefaultString();
    // public System.Void .ctor()
    // Offset: 0x12D5F7C
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Void DecoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    static DecoderReplacementFallback* New_ctor();
    // public override System.Text.DecoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x12D7288
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Text.DecoderFallbackBuffer DecoderFallback::CreateFallbackBuffer()
    System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x12D732C
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Int32 DecoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x12D7348
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::CsObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12D73DC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.DecoderReplacementFallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderReplacementFallback*, "System.Text", "DecoderReplacementFallback");
#pragma pack(pop)
