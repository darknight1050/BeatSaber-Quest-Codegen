// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.Field.IPolynomialExtensionField
#include "Org/BouncyCastle/Math/Field/IPolynomialExtensionField.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Skipping declaration: IFiniteField because it is already included!
  // Forward declaring type: IPolynomial
  class IPolynomial;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
  // [] Offset: FFFFFFFF
  class GenericPolynomialExtensionField : public ::Il2CppObject/*, public Org::BouncyCastle::Math::Field::IPolynomialExtensionField*/ {
    public:
    // protected readonly Org.BouncyCastle.Math.Field.IFiniteField subfield
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::Field::IFiniteField* subfield;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::Field::IFiniteField*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.Field.IPolynomial minimalPolynomial
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::Field::IPolynomial* minimalPolynomial;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::Field::IPolynomial*) == 0x8);
    // Creating value type constructor for type: GenericPolynomialExtensionField
    GenericPolynomialExtensionField(Org::BouncyCastle::Math::Field::IFiniteField* subfield_ = {}, Org::BouncyCastle::Math::Field::IPolynomial* minimalPolynomial_ = {}) noexcept : subfield{subfield_}, minimalPolynomial{minimalPolynomial_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::Field::IPolynomialExtensionField
    operator Org::BouncyCastle::Math::Field::IPolynomialExtensionField() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::Field::IPolynomialExtensionField*>(this);
    }
    // System.Void .ctor(Org.BouncyCastle.Math.Field.IFiniteField subfield, Org.BouncyCastle.Math.Field.IPolynomial polynomial)
    // Offset: 0x1B3D494
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericPolynomialExtensionField* New_ctor(Org::BouncyCastle::Math::Field::IFiniteField* subfield, Org::BouncyCastle::Math::Field::IPolynomial* polynomial) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericPolynomialExtensionField*, creationType>(subfield, polynomial)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_Characteristic()
    // Offset: 0x1B3D954
    Org::BouncyCastle::Math::BigInteger* get_Characteristic_NEW();
    // public System.Int32 get_Dimension()
    // Offset: 0x1B3DA04
    int get_Dimension_NEW();
    // public Org.BouncyCastle.Math.Field.IPolynomial get_MinimalPolynomial()
    // Offset: 0x1B3DB34
    Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial_NEW();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1B3DB3C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals_NEW(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B3DC20
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode_NEW()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
  #pragma pack(pop)
  static check_size<sizeof(GenericPolynomialExtensionField), 24 + sizeof(Org::BouncyCastle::Math::Field::IPolynomial*)> __Org_BouncyCastle_Math_Field_GenericPolynomialExtensionFieldSizeCheck;
  static_assert(sizeof(GenericPolynomialExtensionField) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*, "Org.BouncyCastle.Math.Field", "GenericPolynomialExtensionField");
