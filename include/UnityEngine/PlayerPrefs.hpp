// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PlayerPrefs
  class PlayerPrefs : public ::CsObject {
    public:
    // static private System.Boolean TrySetInt(System.String key, System.Int32 value)
    // Offset: 0x1404560
    static bool TrySetInt(::CsString* key, int value);
    // static private System.Boolean TrySetSetString(System.String key, System.String value)
    // Offset: 0x14045B0
    static bool TrySetSetString(::CsString* key, ::CsString* value);
    // static public System.Void SetInt(System.String key, System.Int32 value)
    // Offset: 0x1404600
    static void SetInt(::CsString* key, int value);
    // static public System.Int32 GetInt(System.String key, System.Int32 defaultValue)
    // Offset: 0x140472C
    static int GetInt(::CsString* key, int defaultValue);
    // static public System.Int32 GetInt(System.String key)
    // Offset: 0x140477C
    static int GetInt(::CsString* key);
    // static public System.Void SetString(System.String key, System.String value)
    // Offset: 0x14047C0
    static void SetString(::CsString* key, ::CsString* value);
    // static public System.String GetString(System.String key, System.String defaultValue)
    // Offset: 0x1404874
    static ::CsString* GetString(::CsString* key, ::CsString* defaultValue);
    // static public System.Void DeleteAll()
    // Offset: 0x14048C4
    static void DeleteAll();
  }; // UnityEngine.PlayerPrefs
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
#pragma pack(pop)
