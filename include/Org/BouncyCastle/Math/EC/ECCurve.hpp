// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECLookupTable
  class ECLookupTable;
}
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: IFiniteField
  class IFiniteField;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
  // Forward declaring type: IPreCompCallback
  class IPreCompCallback;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECCurve
  class ECCurve : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::ECCurve::Config
    class Config;
    // Nested type: Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable
    class DefaultLookupTable;
    // protected readonly Org.BouncyCastle.Math.Field.IFiniteField m_field
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::Field::IFiniteField* m_field;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::Field::IFiniteField*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.ECFieldElement m_a
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::EC::ECFieldElement* m_a;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECFieldElement*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.ECFieldElement m_b
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::EC::ECFieldElement* m_b;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECFieldElement*) == 0x8);
    // protected Org.BouncyCastle.Math.BigInteger m_order
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* m_order;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected Org.BouncyCastle.Math.BigInteger m_cofactor
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Math::BigInteger* m_cofactor;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected System.Int32 m_coord
    // Size: 0x4
    // Offset: 0x38
    int m_coord;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_coord and: m_endomorphism
    char __padding5[0x4] = {};
    // protected Org.BouncyCastle.Math.EC.Endo.ECEndomorphism m_endomorphism
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier m_multiplier
    // Size: 0x8
    // Offset: 0x48
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* m_multiplier;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*) == 0x8);
    // Creating value type constructor for type: ECCurve
    ECCurve(Org::BouncyCastle::Math::Field::IFiniteField* m_field_ = {}, Org::BouncyCastle::Math::EC::ECFieldElement* m_a_ = {}, Org::BouncyCastle::Math::EC::ECFieldElement* m_b_ = {}, Org::BouncyCastle::Math::BigInteger* m_order_ = {}, Org::BouncyCastle::Math::BigInteger* m_cofactor_ = {}, int m_coord_ = {}, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism_ = {}, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* m_multiplier_ = {}) noexcept : m_field{m_field_}, m_a{m_a_}, m_b{m_b_}, m_order{m_order_}, m_cofactor{m_cofactor_}, m_coord{m_coord_}, m_endomorphism{m_endomorphism_}, m_multiplier{m_multiplier_} {}
    // protected System.Void .ctor(Org.BouncyCastle.Math.Field.IFiniteField field)
    // Offset: 0x213217C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECCurve* New_ctor(Org::BouncyCastle::Math::Field::IFiniteField* field) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::ECCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECCurve*, creationType>(field)));
    }
    // public System.Int32 get_FieldSize()
    // Offset: 0xFFFFFFFF
    int get_FieldSize();
    // public Org.BouncyCastle.Math.EC.ECFieldElement FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // public Org.BouncyCastle.Math.EC.ECFieldElement RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r);
    // public Org.BouncyCastle.Math.EC.ECCurve/Config Configure()
    // Offset: 0x21321B0
    Org::BouncyCastle::Math::EC::ECCurve::Config* Configure();
    // public Org.BouncyCastle.Math.EC.ECPoint ValidatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y)
    // Offset: 0x2132284
    Org::BouncyCastle::Math::EC::ECPoint* ValidatePoint(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Math::BigInteger* y);
    // public Org.BouncyCastle.Math.EC.ECPoint CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y)
    // Offset: 0x2132354
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Math::BigInteger* y);
    // public Org.BouncyCastle.Math.EC.ECPoint CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y, System.Boolean withCompression)
    // Offset: 0x2132364
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Math::BigInteger* y, bool withCompression);
    // protected Org.BouncyCastle.Math.EC.ECCurve CloneCurve()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();
    // protected internal Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateDefaultMultiplier()
    // Offset: 0x21323CC
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier();
    // public System.Boolean SupportsCoordinateSystem(System.Int32 coord)
    // Offset: 0x2132478
    bool SupportsCoordinateSystem(int coord);
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.ECPoint point, System.String name, Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback callback)
    // Offset: 0x2132484
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::ECPoint* point, ::Il2CppString* name, Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* callback);
    // public Org.BouncyCastle.Math.EC.ECPoint ImportPoint(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x21327A8
    Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(Org::BouncyCastle::Math::EC::ECPoint* p);
    // public System.Void NormalizeAll(Org.BouncyCastle.Math.EC.ECPoint[] points)
    // Offset: 0x21328A8
    void NormalizeAll(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points);
    // public System.Void NormalizeAll(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len, Org.BouncyCastle.Math.EC.ECFieldElement iso)
    // Offset: 0x21328D4
    void NormalizeAll(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len, Org::BouncyCastle::Math::EC::ECFieldElement* iso);
    // public Org.BouncyCastle.Math.EC.ECPoint get_Infinity()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();
    // public Org.BouncyCastle.Math.Field.IFiniteField get_Field()
    // Offset: 0x2132BBC
    Org::BouncyCastle::Math::Field::IFiniteField* get_Field();
    // public Org.BouncyCastle.Math.EC.ECFieldElement get_A()
    // Offset: 0x2132BC4
    Org::BouncyCastle::Math::EC::ECFieldElement* get_A();
    // public Org.BouncyCastle.Math.EC.ECFieldElement get_B()
    // Offset: 0x2132BCC
    Org::BouncyCastle::Math::EC::ECFieldElement* get_B();
    // public Org.BouncyCastle.Math.BigInteger get_Order()
    // Offset: 0x2132BD4
    Org::BouncyCastle::Math::BigInteger* get_Order();
    // public Org.BouncyCastle.Math.BigInteger get_Cofactor()
    // Offset: 0x2132BDC
    Org::BouncyCastle::Math::BigInteger* get_Cofactor();
    // public System.Int32 get_CoordinateSystem()
    // Offset: 0x2132BE4
    int get_CoordinateSystem();
    // public Org.BouncyCastle.Math.EC.ECLookupTable CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    // Offset: 0x2132BEC
    Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len);
    // protected System.Void CheckPoint(Org.BouncyCastle.Math.EC.ECPoint point)
    // Offset: 0x2132E54
    void CheckPoint(Org::BouncyCastle::Math::EC::ECPoint* point);
    // protected System.Void CheckPoints(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    // Offset: 0x2132F04
    void CheckPoints(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len);
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.ECCurve other)
    // Offset: 0x2133088
    bool Equals(Org::BouncyCastle::Math::EC::ECCurve* other);
    // protected Org.BouncyCastle.Math.EC.ECPoint DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int yTilde, Org::BouncyCastle::Math::BigInteger* X1);
    // public Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier GetMultiplier()
    // Offset: 0x213335C
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* GetMultiplier();
    // public Org.BouncyCastle.Math.EC.ECPoint DecodePoint(System.Byte[] encoded)
    // Offset: 0x21333F4
    Org::BouncyCastle::Math::EC::ECPoint* DecodePoint(::Array<uint8_t>* encoded);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x21331E8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2133284
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.ECCurve
  #pragma pack(pop)
  static check_size<sizeof(ECCurve), 72 + sizeof(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*)> __Org_BouncyCastle_Math_EC_ECCurveSizeCheck;
  static_assert(sizeof(ECCurve) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECCurve*, "Org.BouncyCastle.Math.EC", "ECCurve");
