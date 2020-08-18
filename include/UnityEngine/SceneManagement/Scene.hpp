// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Autogenerated type: UnityEngine.SceneManagement.Scene
  struct Scene : public System::ValueType {
    public:
    // private System.Int32 m_Handle
    // Offset: 0x0
    int m_Handle;
    // Creating value type constructor for type: Scene
    Scene(int m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // static private System.Boolean IsValidInternal(System.Int32 sceneHandle)
    // Offset: 0x12E9260
    static bool IsValidInternal(int sceneHandle);
    // static private System.String GetNameInternal(System.Int32 sceneHandle)
    // Offset: 0x12E92A0
    static ::Il2CppString* GetNameInternal(int sceneHandle);
    // static private System.Boolean GetIsLoadedInternal(System.Int32 sceneHandle)
    // Offset: 0x12E92E0
    static bool GetIsLoadedInternal(int sceneHandle);
    // static private System.Int32 GetRootCountInternal(System.Int32 sceneHandle)
    // Offset: 0x12E9320
    static int GetRootCountInternal(int sceneHandle);
    // static private System.Void GetRootGameObjectsInternal(System.Int32 sceneHandle, System.Object resultRootList)
    // Offset: 0x12E9360
    static void GetRootGameObjectsInternal(int sceneHandle, ::Il2CppObject* resultRootList);
    // public System.Int32 get_handle()
    // Offset: 0x9ACD08
    int get_handle();
    // public System.Boolean IsValid()
    // Offset: 0x9ACD10
    bool IsValid();
    // public System.String get_name()
    // Offset: 0x9ACD50
    ::Il2CppString* get_name();
    // public System.Boolean get_isLoaded()
    // Offset: 0x9ACD90
    bool get_isLoaded();
    // public System.Int32 get_rootCount()
    // Offset: 0x9ACDD0
    int get_rootCount();
    // public UnityEngine.GameObject[] GetRootGameObjects()
    // Offset: 0x9ACE10
    ::Array<UnityEngine::GameObject*>* GetRootGameObjects();
    // public System.Void GetRootGameObjects(System.Collections.Generic.List`1<UnityEngine.GameObject> rootGameObjects)
    // Offset: 0x9ACE18
    void GetRootGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject*>* rootGameObjects);
    // public override System.Int32 GetHashCode()
    // Offset: 0x9ACE20
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x9ACE28
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.SceneManagement.Scene
  // static public System.Boolean op_Equality(UnityEngine.SceneManagement.Scene lhs, UnityEngine.SceneManagement.Scene rhs)
  // Offset: 0x12E97AC
  bool operator ==(const UnityEngine::SceneManagement::Scene& lhs, const UnityEngine::SceneManagement::Scene& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
#pragma pack(pop)
