// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.JsonUtility
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CEB8D4
  class JsonUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: JsonUtility
    JsonUtility() noexcept {}
    // static private System.String ToJsonInternal(System.Object obj, System.Boolean prettyPrint)
    // Offset: 0x218B8FC
    static ::Il2CppString* ToJsonInternal(::Il2CppObject* obj, bool prettyPrint);
    // static private System.Object FromJsonInternal(System.String json, System.Object objectToOverwrite, System.Type type)
    // Offset: 0x218B94C
    static ::Il2CppObject* FromJsonInternal(::Il2CppString* json, ::Il2CppObject* objectToOverwrite, System::Type* type);
    // static public System.String ToJson(System.Object obj)
    // Offset: 0x218B9A4
    static ::Il2CppString* ToJson(::Il2CppObject* obj);
    // static public System.String ToJson(System.Object obj, System.Boolean prettyPrint)
    // Offset: 0x218B9AC
    static ::Il2CppString* ToJson(::Il2CppObject* obj, bool prettyPrint);
    // static public T FromJson(System.String json)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T FromJson(::Il2CppString* json) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::JsonUtility::FromJson");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "JsonUtility", "FromJson", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(json)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, json);
    }
    // static public System.Object FromJson(System.String json, System.Type type)
    // Offset: 0x218BB00
    static ::Il2CppObject* FromJson(::Il2CppString* json, System::Type* type);
  }; // UnityEngine.JsonUtility
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::JsonUtility*, "UnityEngine", "JsonUtility");
