// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IConvertible
  class IConvertible;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.InternalUtility
  class InternalUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // static public T[] GetComponents(System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> gameObjects)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* GetComponents(System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* gameObjects) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>("UnityEngine.ProBuilder", "InternalUtility", "GetComponents", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, gameObjects)));
    }
    // static public T[] GetComponents(UnityEngine.GameObject go)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* GetComponents(UnityEngine::GameObject* go) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>("UnityEngine.ProBuilder", "InternalUtility", "GetComponents", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, go)));
    }
    // static public T[] GetComponents(System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> transforms)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* GetComponents(System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>* transforms) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>("UnityEngine.ProBuilder", "InternalUtility", "GetComponents", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, transforms)));
    }
    // static public UnityEngine.GameObject EmptyGameObjectWithTransform(UnityEngine.Transform t)
    // Offset: 0xEFA460
    static UnityEngine::GameObject* EmptyGameObjectWithTransform(UnityEngine::Transform* t);
    // static public T NextEnumValue(T current)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T NextEnumValue(T current) {
      static_assert(std::is_base_of_v<System::IConvertible, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("UnityEngine.ProBuilder", "InternalUtility", "NextEnumValue", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, current)));
    }
    // static public System.String ControlKeyString(System.Char character)
    // Offset: 0xEFA558
    static ::Il2CppString* ControlKeyString(::Il2CppChar character);
    // static public System.Boolean TryParseColor(System.String value, UnityEngine.Color col)
    // Offset: 0xEFA630
    static bool TryParseColor(::Il2CppString* value, UnityEngine::Color& col);
    // static public UnityEngine.Vector3[] StringToVector3Array(System.String str)
    // Offset: 0xEFA8BC
    static ::Array<UnityEngine::Vector3>* StringToVector3Array(::Il2CppString* str);
  }; // UnityEngine.ProBuilder.InternalUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::InternalUtility*, "UnityEngine.ProBuilder", "InternalUtility");
#pragma pack(pop)
