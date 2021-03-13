// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelMissionParser
#include "GlobalNamespace/LevelMissionParser.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LevelMissionParser/ParserFunction
  // [] Offset: FFFFFFFF
  class LevelMissionParser::ParserFunction : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ParserFunction
    ParserFunction() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1098148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelMissionParser::ParserFunction* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelMissionParser::ParserFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelMissionParser::ParserFunction*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Single[] functionParams, System.Int32 paramCount)
    // Offset: 0x1097D30
    bool Invoke_NEW(::Array<float>* functionParams, int paramCount);
    // public System.IAsyncResult BeginInvoke(System.Single[] functionParams, System.Int32 paramCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1098158
    System::IAsyncResult* BeginInvoke_NEW(::Array<float>* functionParams, int paramCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x10981F4
    bool EndInvoke_NEW(System::IAsyncResult* result);
  }; // LevelMissionParser/ParserFunction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelMissionParser::ParserFunction*, "", "LevelMissionParser/ParserFunction");
