// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Curve
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP224K1Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractECLookupTable
#include "Org/BouncyCastle/Math/EC/AbstractECLookupTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Curve/SecP224K1LookupTable
  // [] Offset: FFFFFFFF
  class SecP224K1Curve::SecP224K1LookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    // private readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Curve m_outer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve* m_outer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve*) == 0x8);
    // private readonly System.UInt32[] m_table
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* m_table;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private readonly System.Int32 m_size
    // Size: 0x4
    // Offset: 0x20
    int m_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SecP224K1LookupTable
    SecP224K1LookupTable(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve* m_outer_ = {}, ::Array<uint>* m_table_ = {}, int m_size_ = {}) noexcept : m_outer{m_outer_}, m_table{m_table_}, m_size{m_size_} {}
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Curve outer, System.UInt32[] table, System.Int32 size)
    // Offset: 0x1B78B20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP224K1Curve::SecP224K1LookupTable* New_ctor(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve* outer, ::Array<uint>* table, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve::SecP224K1LookupTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP224K1Curve::SecP224K1LookupTable*, creationType>(outer, table, size)));
    }
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1B78F14
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Array<uint>* x, ::Array<uint>* y);
    // public override System.Int32 get_Size()
    // Offset: 0x1B78DE0
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size_NEW()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x1B78DE8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup_NEW(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x1B78FF8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar_NEW(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Curve/SecP224K1LookupTable
  #pragma pack(pop)
  static check_size<sizeof(SecP224K1Curve::SecP224K1LookupTable), 32 + sizeof(int)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecP224K1Curve_SecP224K1LookupTableSizeCheck;
  static_assert(sizeof(SecP224K1Curve::SecP224K1LookupTable) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve::SecP224K1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224K1Curve/SecP224K1LookupTable");
