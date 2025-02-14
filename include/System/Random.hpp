// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Random
  // [ComVisibleAttribute] Offset: D7AC34
  class Random : public ::Il2CppObject {
    public:
    // private System.Int32 inext
    // Size: 0x4
    // Offset: 0x10
    int inext;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 inextp
    // Size: 0x4
    // Offset: 0x14
    int inextp;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] SeedArray
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* SeedArray;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: Random
    Random(int inext_ = {}, int inextp_ = {}, ::Array<int>* SeedArray_ = {}) noexcept : inext{inext_}, inextp{inextp_}, SeedArray{SeedArray_} {}
    // static field const value: static private System.Int32 MBIG
    static constexpr const int MBIG = 2147483647;
    // Get static field: static private System.Int32 MBIG
    static int _get_MBIG();
    // Set static field: static private System.Int32 MBIG
    static void _set_MBIG(int value);
    // static field const value: static private System.Int32 MSEED
    static constexpr const int MSEED = 161803398;
    // Get static field: static private System.Int32 MSEED
    static int _get_MSEED();
    // Set static field: static private System.Int32 MSEED
    static void _set_MSEED(int value);
    // static field const value: static private System.Int32 MZ
    static constexpr const int MZ = 0;
    // Get static field: static private System.Int32 MZ
    static int _get_MZ();
    // Set static field: static private System.Int32 MZ
    static void _set_MZ(int value);
    // public System.Void .ctor(System.Int32 Seed)
    // Offset: 0x1C5824C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Random* New_ctor(int Seed) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Random::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Random*, creationType>(Seed)));
    }
    // protected System.Double Sample()
    // Offset: 0x1C584A8
    double Sample();
    // private System.Int32 InternalSample()
    // Offset: 0x1C584CC
    int InternalSample();
    // public System.Int32 Next()
    // Offset: 0x1C58568
    int Next();
    // private System.Double GetSampleForLargeRange()
    // Offset: 0x1C5856C
    double GetSampleForLargeRange();
    // public System.Int32 Next(System.Int32 minValue, System.Int32 maxValue)
    // Offset: 0x1C585BC
    int Next(int minValue, int maxValue);
    // public System.Int32 Next(System.Int32 maxValue)
    // Offset: 0x1C58724
    int Next(int maxValue);
    // public System.Double NextDouble()
    // Offset: 0x1C58828
    double NextDouble();
    // public System.Void NextBytes(System.Byte[] buffer)
    // Offset: 0x1C58834
    void NextBytes(::Array<uint8_t>* buffer);
    // public System.Void .ctor()
    // Offset: 0x1C54840
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Random* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Random::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Random*, creationType>()));
    }
  }; // System.Random
  #pragma pack(pop)
  static check_size<sizeof(Random), 24 + sizeof(::Array<int>*)> __System_RandomSizeCheck;
  static_assert(sizeof(Random) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Random*, "System", "Random");
