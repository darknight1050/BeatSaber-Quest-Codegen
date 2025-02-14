// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PrimitiveType
  struct PrimitiveType;
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: SendMessageOptions
  struct SendMessageOptions;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GameObject
  // [ExcludeFromPresetAttribute] Offset: D9033C
  // [NativeHeaderAttribute] Offset: D9033C
  // [UsedByNativeCodeAttribute] Offset: D9033C
  class GameObject : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: GameObject
    GameObject() noexcept {}
    // static public UnityEngine.GameObject CreatePrimitive(UnityEngine.PrimitiveType type)
    // Offset: 0x1B7D87C
    static UnityEngine::GameObject* CreatePrimitive(UnityEngine::PrimitiveType type);
    // public T GetComponent()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponent() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method);
    }
    // public UnityEngine.Component GetComponent(System.Type type)
    // Offset: 0x1B75960
    UnityEngine::Component* GetComponent(System::Type* type);
    // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
    // Offset: 0x1B7D8BC
    void GetComponentFastPath(System::Type* type, System::IntPtr oneFurtherThanResultValue);
    // UnityEngine.Component GetComponentByName(System.String type)
    // Offset: 0x1B7D914
    UnityEngine::Component* GetComponentByName(::Il2CppString* type);
    // public UnityEngine.Component GetComponent(System.String type)
    // Offset: 0x1B7D964
    UnityEngine::Component* GetComponent(::Il2CppString* type);
    // public UnityEngine.Component GetComponentInChildren(System.Type type, System.Boolean includeInactive)
    // Offset: 0x1B75A94
    UnityEngine::Component* GetComponentInChildren(System::Type* type, bool includeInactive);
    // public UnityEngine.Component GetComponentInChildren(System.Type type)
    // Offset: 0x1B7D9B4
    UnityEngine::Component* GetComponentInChildren(System::Type* type);
    // public T GetComponentInChildren()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponentInChildren() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method);
    }
    // public T GetComponentInChildren(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponentInChildren(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method, includeInactive);
    }
    // public UnityEngine.Component GetComponentInParent(System.Type type)
    // Offset: 0x1B75C90
    UnityEngine::Component* GetComponentInParent(System::Type* type);
    // public T GetComponentInParent()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponentInParent() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method);
    }
    // private System.Array GetComponentsInternal(System.Type type, System.Boolean useSearchTypeAsArrayReturnType, System.Boolean recursive, System.Boolean includeInactive, System.Boolean reverse, System.Object resultList)
    // Offset: 0x1B7DA08
    System::Array* GetComponentsInternal(System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, ::Il2CppObject* resultList);
    // public UnityEngine.Component[] GetComponents(System.Type type)
    // Offset: 0x1B75E5C
    ::Array<UnityEngine::Component*>* GetComponents(System::Type* type);
    // public T[] GetComponents()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponents() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method);
    }
    // public System.Void GetComponents(System.Type type, System.Collections.Generic.List`1<UnityEngine.Component> results)
    // Offset: 0x1B7DA90
    void GetComponents(System::Type* type, System::Collections::Generic::List_1<UnityEngine::Component*>* results);
    // public System.Void GetComponents(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponents(System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(results)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, results);
    }
    // public UnityEngine.Component[] GetComponentsInChildren(System.Type type)
    // Offset: 0x1B7DAF8
    ::Array<UnityEngine::Component*>* GetComponentsInChildren(System::Type* type);
    // public UnityEngine.Component[] GetComponentsInChildren(System.Type type, System.Boolean includeInactive)
    // Offset: 0x1B75B50
    ::Array<UnityEngine::Component*>* GetComponentsInChildren(System::Type* type, bool includeInactive);
    // public T[] GetComponentsInChildren(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInChildren(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, includeInactive);
    }
    // public System.Void GetComponentsInChildren(System.Boolean includeInactive, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInChildren(bool includeInactive, System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive), ::il2cpp_utils::ExtractType(results)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, includeInactive, results);
    }
    // public T[] GetComponentsInChildren()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInChildren() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method);
    }
    // public System.Void GetComponentsInChildren(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInChildren(System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(results)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, results);
    }
    // public UnityEngine.Component[] GetComponentsInParent(System.Type type)
    // Offset: 0x1B7DB00
    ::Array<UnityEngine::Component*>* GetComponentsInParent(System::Type* type);
    // public UnityEngine.Component[] GetComponentsInParent(System.Type type, System.Boolean includeInactive)
    // Offset: 0x1B75D44
    ::Array<UnityEngine::Component*>* GetComponentsInParent(System::Type* type, bool includeInactive);
    // public System.Void GetComponentsInParent(System.Boolean includeInactive, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInParent(bool includeInactive, System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentsInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive), ::il2cpp_utils::ExtractType(results)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, includeInactive, results);
    }
    // public T[] GetComponentsInParent(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInParent(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentsInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, includeInactive);
    }
    // public T[] GetComponentsInParent()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInParent() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::GetComponentsInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method);
    }
    // public System.Boolean TryGetComponent(out T component)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool TryGetComponent(T& component) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::TryGetComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, component);
    }
    // public System.Boolean TryGetComponent(System.Type type, out UnityEngine.Component component)
    // Offset: 0x1B7DB08
    bool TryGetComponent(System::Type* type, UnityEngine::Component*& component);
    // UnityEngine.Component TryGetComponentInternal(System.Type type)
    // Offset: 0x1B7DBB8
    UnityEngine::Component* TryGetComponentInternal(System::Type* type);
    // System.Void TryGetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
    // Offset: 0x1B7DC08
    void TryGetComponentFastPath(System::Type* type, System::IntPtr oneFurtherThanResultValue);
    // static public UnityEngine.GameObject FindWithTag(System.String tag)
    // Offset: 0x1B7DC60
    static UnityEngine::GameObject* FindWithTag(::Il2CppString* tag);
    // public System.Void SendMessageUpwards(System.String methodName, UnityEngine.SendMessageOptions options)
    // Offset: 0x1B7DCE0
    void SendMessageUpwards(::Il2CppString* methodName, UnityEngine::SendMessageOptions options);
    // public System.Void SendMessage(System.String methodName, UnityEngine.SendMessageOptions options)
    // Offset: 0x1B7DDA4
    void SendMessage(::Il2CppString* methodName, UnityEngine::SendMessageOptions options);
    // public System.Void BroadcastMessage(System.String methodName, UnityEngine.SendMessageOptions options)
    // Offset: 0x1B7DE68
    void BroadcastMessage(::Il2CppString* methodName, UnityEngine::SendMessageOptions options);
    // UnityEngine.Component AddComponentInternal(System.String className)
    // Offset: 0x1B7DF2C
    UnityEngine::Component* AddComponentInternal(::Il2CppString* className);
    // private UnityEngine.Component Internal_AddComponentWithType(System.Type componentType)
    // Offset: 0x1B7DF7C
    UnityEngine::Component* Internal_AddComponentWithType(System::Type* componentType);
    // public UnityEngine.Component AddComponent(System.Type componentType)
    // Offset: 0x1B7DFCC
    UnityEngine::Component* AddComponent(System::Type* componentType);
    // public T AddComponent()
    // Offset: 0xFFFFFFFF
    template<class T>
    T AddComponent() {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::AddComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method);
    }
    // public UnityEngine.Transform get_transform()
    // Offset: 0x1B7E01C
    UnityEngine::Transform* get_transform();
    // public System.Int32 get_layer()
    // Offset: 0x1B7E05C
    int get_layer();
    // public System.Void set_layer(System.Int32 value)
    // Offset: 0x1B7E09C
    void set_layer(int value);
    // public System.Boolean get_active()
    // Offset: 0x1B7E0EC
    bool get_active();
    // public System.Void set_active(System.Boolean value)
    // Offset: 0x1B7E12C
    void set_active(bool value);
    // public System.Void SetActive(System.Boolean value)
    // Offset: 0x1B7E17C
    void SetActive(bool value);
    // public System.Boolean get_activeSelf()
    // Offset: 0x1B7E1CC
    bool get_activeSelf();
    // public System.Boolean get_activeInHierarchy()
    // Offset: 0x1B7E20C
    bool get_activeInHierarchy();
    // public System.Void SetActiveRecursively(System.Boolean state)
    // Offset: 0x1B7E24C
    void SetActiveRecursively(bool state);
    // public System.Boolean get_isStatic()
    // Offset: 0x1B7E29C
    bool get_isStatic();
    // public System.Void set_isStatic(System.Boolean value)
    // Offset: 0x1B7E2DC
    void set_isStatic(bool value);
    // System.Boolean get_isStaticBatchable()
    // Offset: 0x1B7E32C
    bool get_isStaticBatchable();
    // public System.String get_tag()
    // Offset: 0x1B76038
    ::Il2CppString* get_tag();
    // public System.Void set_tag(System.String value)
    // Offset: 0x1B760FC
    void set_tag(::Il2CppString* value);
    // public System.Boolean CompareTag(System.String tag)
    // Offset: 0x1B761D0
    bool CompareTag(::Il2CppString* tag);
    // static public UnityEngine.GameObject FindGameObjectWithTag(System.String tag)
    // Offset: 0x1B7DCA0
    static UnityEngine::GameObject* FindGameObjectWithTag(::Il2CppString* tag);
    // static public UnityEngine.GameObject[] FindGameObjectsWithTag(System.String tag)
    // Offset: 0x1B7E36C
    static ::Array<UnityEngine::GameObject*>* FindGameObjectsWithTag(::Il2CppString* tag);
    // public System.Void SendMessageUpwards(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
    // Offset: 0x1B7DD3C
    void SendMessageUpwards(::Il2CppString* methodName, ::Il2CppObject* value, UnityEngine::SendMessageOptions options);
    // public System.Void SendMessageUpwards(System.String methodName, System.Object value)
    // Offset: 0x1B7E3AC
    void SendMessageUpwards(::Il2CppString* methodName, ::Il2CppObject* value);
    // public System.Void SendMessageUpwards(System.String methodName)
    // Offset: 0x1B7E408
    void SendMessageUpwards(::Il2CppString* methodName);
    // public System.Void SendMessage(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
    // Offset: 0x1B7DE00
    void SendMessage(::Il2CppString* methodName, ::Il2CppObject* value, UnityEngine::SendMessageOptions options);
    // public System.Void SendMessage(System.String methodName, System.Object value)
    // Offset: 0x1B7E460
    void SendMessage(::Il2CppString* methodName, ::Il2CppObject* value);
    // public System.Void SendMessage(System.String methodName)
    // Offset: 0x1B7E4BC
    void SendMessage(::Il2CppString* methodName);
    // public System.Void BroadcastMessage(System.String methodName, System.Object parameter, UnityEngine.SendMessageOptions options)
    // Offset: 0x1B7DEC4
    void BroadcastMessage(::Il2CppString* methodName, ::Il2CppObject* parameter, UnityEngine::SendMessageOptions options);
    // public System.Void BroadcastMessage(System.String methodName, System.Object parameter)
    // Offset: 0x1B7E514
    void BroadcastMessage(::Il2CppString* methodName, ::Il2CppObject* parameter);
    // public System.Void BroadcastMessage(System.String methodName)
    // Offset: 0x1B7E570
    void BroadcastMessage(::Il2CppString* methodName);
    // public System.Void .ctor(System.String name)
    // Offset: 0x1B7E5C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameObject* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameObject*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, params System.Type[] components)
    // Offset: 0x1B7E74C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameObject* New_ctor(::Il2CppString* name, ::Array<System::Type*>* components) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameObject*, creationType>(name, components)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.String name, params System.Type[] components)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameObject* New_ctor(::Il2CppString* name, std::initializer_list<System::Type*> components) {
      return New_ctor<creationType>(name, ::Array<System::Type*>::New(components));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.String name, params System.Type[] components)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static GameObject* New_ctor(::Il2CppString* name, TParams&&... components) {
      return New_ctor<creationType>(name, {components...});
    }
    // static private System.Void Internal_CreateGameObject(UnityEngine.GameObject self, System.String name)
    // Offset: 0x1B7E668
    static void Internal_CreateGameObject(UnityEngine::GameObject* self, ::Il2CppString* name);
    // static public UnityEngine.GameObject Find(System.String name)
    // Offset: 0x1B7E87C
    static UnityEngine::GameObject* Find(::Il2CppString* name);
    // public UnityEngine.SceneManagement.Scene get_scene()
    // Offset: 0x1B7E8BC
    UnityEngine::SceneManagement::Scene get_scene();
    // public System.UInt64 get_sceneCullingMask()
    // Offset: 0x1B7E964
    uint64_t get_sceneCullingMask();
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0x1B7E9A4
    UnityEngine::GameObject* get_gameObject();
    // private System.Void get_scene_Injected(out UnityEngine.SceneManagement.Scene ret)
    // Offset: 0x1B7E914
    void get_scene_Injected(UnityEngine::SceneManagement::Scene& ret);
    // public System.Void .ctor()
    // Offset: 0x1B7E6B8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GameObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameObject*, creationType>()));
    }
  }; // UnityEngine.GameObject
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GameObject*, "UnityEngine", "GameObject");
