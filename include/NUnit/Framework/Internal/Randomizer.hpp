// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Random
#include "System/Random.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Randomizer
  // [] Offset: FFFFFFFF
  class Randomizer : public System::Random {
    public:
    // Creating value type constructor for type: Randomizer
    Randomizer() noexcept {}
    // Get static field: static private System.Random _seedGenerator
    static System::Random* _get__seedGenerator();
    // Set static field: static private System.Random _seedGenerator
    static void _set__seedGenerator(System::Random* value);
    // Get static field: static private System.Int32 _initialSeed
    static int _get__initialSeed();
    // Set static field: static private System.Int32 _initialSeed
    static void _set__initialSeed(int value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,NUnit.Framework.Internal.Randomizer> Randomizers
    static System::Collections::Generic::Dictionary_2<System::Reflection::MemberInfo*, NUnit::Framework::Internal::Randomizer*>* _get_Randomizers();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,NUnit.Framework.Internal.Randomizer> Randomizers
    static void _set_Randomizers(System::Collections::Generic::Dictionary_2<System::Reflection::MemberInfo*, NUnit::Framework::Internal::Randomizer*>* value);
    // static field const value: static public System.String DefaultStringChars
    static constexpr const char* DefaultStringChars = "abcdefghijkmnopqrstuvwxyzABCDEFGHJKLMNOPQRSTUVWXYZ0123456789_";
    // Get static field: static public System.String DefaultStringChars
    static ::Il2CppString* _get_DefaultStringChars();
    // Set static field: static public System.String DefaultStringChars
    static void _set_DefaultStringChars(::Il2CppString* value);
    // static field const value: static private System.Int32 DefaultStringLength
    static constexpr const int DefaultStringLength = 25;
    // Get static field: static private System.Int32 DefaultStringLength
    static int _get_DefaultStringLength();
    // Set static field: static private System.Int32 DefaultStringLength
    static void _set_DefaultStringLength(int value);
    // static private System.Void .cctor()
    // Offset: 0x2093074
    static void _cctor();
    // static public System.Void set_InitialSeed(System.Int32 value)
    // Offset: 0x2093120
    static void set_InitialSeed(int value);
    // static public NUnit.Framework.Internal.Randomizer CreateRandomizer()
    // Offset: 0x20931C8
    static NUnit::Framework::Internal::Randomizer* CreateRandomizer();
    // public System.Void .ctor(System.Int32 seed)
    // Offset: 0x2093268
    // Implemented from: System.Random
    // Base method: System.Void Random::.ctor(System.Int32 seed)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Randomizer* New_ctor(int seed) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Randomizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Randomizer*, creationType>(seed)));
    }
  }; // NUnit.Framework.Internal.Randomizer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Randomizer*, "NUnit.Framework.Internal", "Randomizer");
