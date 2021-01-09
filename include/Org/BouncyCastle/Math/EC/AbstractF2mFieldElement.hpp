// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x10
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
  // [] Offset: FFFFFFFF
  class AbstractF2mFieldElement : public Org::BouncyCastle::Math::EC::ECFieldElement {
    public:
    // Creating value type constructor for type: AbstractF2mFieldElement
    AbstractF2mFieldElement() noexcept {}
    // public Org.BouncyCastle.Math.EC.ECFieldElement HalfTrace()
    // Offset: 0x176CB4C
    Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace();
    // public System.Boolean get_HasFastTrace()
    // Offset: 0x176CCA4
    bool get_HasFastTrace();
    // public System.Int32 Trace()
    // Offset: 0x176CCAC
    int Trace();
    // protected System.Void .ctor()
    // Offset: 0x176CE18
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Void ECFieldElement::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractF2mFieldElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractF2mFieldElement*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*, "Org.BouncyCastle.Math.EC", "AbstractF2mFieldElement");
#pragma pack(pop)
