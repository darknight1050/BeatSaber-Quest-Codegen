// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ScrollView
#include "HMUI/ScrollView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  // Autogenerated type: HMUI.ScrollView/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA64B0
  class ScrollView::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly HMUI.ScrollView/<>c <>9
    static HMUI::ScrollView::$$c* _get_$$9();
    // Set static field: static public readonly HMUI.ScrollView/<>c <>9
    static void _set_$$9(HMUI::ScrollView::$$c* value);
    // Get static field: static public System.Func`2<System.Single,System.Single> <>9__25_1
    static System::Func_2<float, float>* _get_$$9__25_1();
    // Set static field: static public System.Func`2<System.Single,System.Single> <>9__25_1
    static void _set_$$9__25_1(System::Func_2<float, float>* value);
    // static private System.Void .cctor()
    // Offset: 0x1080FB0
    static void _cctor();
    // System.Single <Awake>b__25_1(System.Single i)
    // Offset: 0x1081020
    float $Awake$b__25_1(float i);
    // public System.Void .ctor()
    // Offset: 0x1081018
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollView::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScrollView::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollView::$$c*, creationType>()));
    }
  }; // HMUI.ScrollView/<>c
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollView::$$c*, "HMUI", "ScrollView/<>c");
#pragma pack(pop)
