// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.DecoderFallback
#include "System/Text/DecoderFallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.DecoderExceptionFallback
  class DecoderExceptionFallback : public System::Text::DecoderFallback {
    public:
    // Creating value type constructor for type: DecoderExceptionFallback
    DecoderExceptionFallback() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B45F84
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Void DecoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderExceptionFallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderExceptionFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderExceptionFallback*, creationType>()));
    }
    // public override System.Text.DecoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x1B45F94
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Text.DecoderFallbackBuffer DecoderFallback::CreateFallbackBuffer()
    System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x1B45FF8
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Int32 DecoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1B46000
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B46064
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.DecoderExceptionFallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderExceptionFallback*, "System.Text", "DecoderExceptionFallback");
