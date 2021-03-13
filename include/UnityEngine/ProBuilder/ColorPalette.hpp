// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.ProBuilder.IHasDefault
#include "UnityEngine/ProBuilder/IHasDefault.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ColorPalette
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D41194
  class ColorPalette : public UnityEngine::ScriptableObject/*, public UnityEngine::ProBuilder::IHasDefault*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD41C9C
    // private UnityEngine.Color <current>k__BackingField
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color current;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0xD41CAC
    // private System.Collections.Generic.List`1<UnityEngine.Color> m_Colors
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::Color>* m_Colors;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Color>*) == 0x8);
    // Creating value type constructor for type: ColorPalette
    ColorPalette(UnityEngine::Color current_ = {}, System::Collections::Generic::List_1<UnityEngine::Color>* m_Colors_ = {}) noexcept : current{current_}, m_Colors{m_Colors_} {}
    // Creating interface conversion operator: operator UnityEngine::ProBuilder::IHasDefault
    operator UnityEngine::ProBuilder::IHasDefault() noexcept {
      return *reinterpret_cast<UnityEngine::ProBuilder::IHasDefault*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Color get_current()
    // Offset: 0x1D87210
    UnityEngine::Color get_current();
    // public System.Void set_current(UnityEngine.Color value)
    // Offset: 0x1D8721C
    void set_current(UnityEngine::Color value);
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color> get_colors()
    // Offset: 0x1D87228
    System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Color>* get_colors();
    // public System.Void SetColors(System.Collections.Generic.IEnumerable`1<UnityEngine.Color> colors)
    // Offset: 0x1D87298
    void SetColors(System::Collections::Generic::IEnumerable_1<UnityEngine::Color>* colors);
    // public System.Void SetDefaultValues()
    // Offset: 0x1D8733C
    void SetDefaultValues_NEW();
    // public UnityEngine.Color get_Item(System.Int32 i)
    // Offset: 0x1D8779C
    UnityEngine::Color get_Item(int i);
    // public System.Void set_Item(System.Int32 i, UnityEngine.Color value)
    // Offset: 0x1D87818
    void set_Item(int i, UnityEngine::Color value);
    // public System.Int32 get_Count()
    // Offset: 0x1D878B0
    int get_Count();
    // public System.Void .ctor()
    // Offset: 0x1D87900
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorPalette* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ColorPalette::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorPalette*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.ColorPalette
  #pragma pack(pop)
  static check_size<sizeof(ColorPalette), 40 + sizeof(System::Collections::Generic::List_1<UnityEngine::Color>*)> __UnityEngine_ProBuilder_ColorPaletteSizeCheck;
  static_assert(sizeof(ColorPalette) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColorPalette*, "UnityEngine.ProBuilder", "ColorPalette");
