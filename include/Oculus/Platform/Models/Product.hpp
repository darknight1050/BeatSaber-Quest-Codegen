// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Product
  // [] Offset: FFFFFFFF
  class Product : public ::Il2CppObject {
    public:
    // public readonly System.String Description
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Description;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String FormattedPrice
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* FormattedPrice;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Sku
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* Sku;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Product
    Product(::Il2CppString* Description_ = {}, ::Il2CppString* FormattedPrice_ = {}, ::Il2CppString* Name_ = {}, ::Il2CppString* Sku_ = {}) noexcept : Description{Description_}, FormattedPrice{FormattedPrice_}, Name{Name_}, Sku{Sku_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x138D364
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Product* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::Product::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Product*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Product
  #pragma pack(pop)
  static check_size<sizeof(Product), 40 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_ProductSizeCheck;
  static_assert(sizeof(Product) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Product*, "Oculus.Platform.Models", "Product");
