// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x18
  // Autogenerated type: UnityEngine.UI.Dropdown/OptionDataList
  // [] Offset: FFFFFFFF
  class Dropdown::OptionDataList : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> m_Options
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>* m_Options;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>*) == 0x8);
    // Creating value type constructor for type: OptionDataList
    OptionDataList(System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>* m_Options_ = {}) noexcept : m_Options{m_Options_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>*
    constexpr operator System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>*() const noexcept {
      return m_Options;
    }
    // public System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> get_options()
    // Offset: 0x14C66E4
    System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>* get_options();
    // public System.Void set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> value)
    // Offset: 0x14C66EC
    void set_options(System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>* value);
    // public System.Void .ctor()
    // Offset: 0x14C66F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionDataList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::OptionDataList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionDataList*, creationType>()));
    }
  }; // UnityEngine.UI.Dropdown/OptionDataList
  static check_size<sizeof(Dropdown::OptionDataList), 16 + sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>*)> __UnityEngine_UI_Dropdown_OptionDataListSizeCheck;
  static_assert(sizeof(Dropdown::OptionDataList) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown::OptionDataList*, "UnityEngine.UI", "Dropdown/OptionDataList");
#pragma pack(pop)
