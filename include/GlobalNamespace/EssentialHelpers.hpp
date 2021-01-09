// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: EssentialHelpers
  // [] Offset: FFFFFFFF
  class EssentialHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EssentialHelpers
    EssentialHelpers() noexcept {}
    // static public System.Double get_CurrentTimeStamp()
    // Offset: 0x102ED10
    static double get_CurrentTimeStamp();
    // static public System.Void SafeDestroy(UnityEngine.Object obj)
    // Offset: 0x102C4DC
    static void SafeDestroy(UnityEngine::Object* obj);
    // static public T GetOrAddComponent(UnityEngine.GameObject go)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetOrAddComponent(UnityEngine::GameObject* go) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EssentialHelpers::GetOrAddComponent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "EssentialHelpers", "GetOrAddComponent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(go)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, go);
    }
  }; // EssentialHelpers
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EssentialHelpers*, "", "EssentialHelpers");
#pragma pack(pop)
