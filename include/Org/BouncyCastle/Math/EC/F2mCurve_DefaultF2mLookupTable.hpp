// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.F2mCurve
#include "Org/BouncyCastle/Math/EC/F2mCurve.hpp"
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
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.F2mCurve/DefaultF2mLookupTable
  class F2mCurve::DefaultF2mLookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    // private readonly Org.BouncyCastle.Math.EC.F2mCurve m_outer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::F2mCurve* m_outer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::F2mCurve*) == 0x8);
    // private readonly System.Int64[] m_table
    // Size: 0x8
    // Offset: 0x18
    ::Array<int64_t>* m_table;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private readonly System.Int32 m_size
    // Size: 0x4
    // Offset: 0x20
    int m_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DefaultF2mLookupTable
    DefaultF2mLookupTable(Org::BouncyCastle::Math::EC::F2mCurve* m_outer_ = {}, ::Array<int64_t>* m_table_ = {}, int m_size_ = {}) noexcept : m_outer{m_outer_}, m_table{m_table_}, m_size{m_size_} {}
    // System.Void .ctor(Org.BouncyCastle.Math.EC.F2mCurve outer, System.Int64[] table, System.Int32 size)
    // Offset: 0x2136F40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static F2mCurve::DefaultF2mLookupTable* New_ctor(Org::BouncyCastle::Math::EC::F2mCurve* outer, ::Array<int64_t>* table, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<F2mCurve::DefaultF2mLookupTable*, creationType>(outer, table, size)));
    }
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.Int64[] x, System.Int64[] y)
    // Offset: 0x2137120
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Array<int64_t>* x, ::Array<int64_t>* y);
    // public override System.Int32 get_Size()
    // Offset: 0x2136F80
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x2136F88
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x21372E0
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.F2mCurve/DefaultF2mLookupTable
  #pragma pack(pop)
  static check_size<sizeof(F2mCurve::DefaultF2mLookupTable), 32 + sizeof(int)> __Org_BouncyCastle_Math_EC_F2mCurve_DefaultF2mLookupTableSizeCheck;
  static_assert(sizeof(F2mCurve::DefaultF2mLookupTable) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable*, "Org.BouncyCastle.Math.EC", "F2mCurve/DefaultF2mLookupTable");
