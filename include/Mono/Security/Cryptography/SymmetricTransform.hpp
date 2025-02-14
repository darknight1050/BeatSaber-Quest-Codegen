// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
// Including type: System.Security.Cryptography.PaddingMode
#include "System/Security/Cryptography/PaddingMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.SymmetricTransform
  class SymmetricTransform : public ::Il2CppObject/*, public System::Security::Cryptography::ICryptoTransform*/ {
    public:
    // protected System.Security.Cryptography.SymmetricAlgorithm algo
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::SymmetricAlgorithm* algo;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::SymmetricAlgorithm*) == 0x8);
    // protected System.Boolean encrypt
    // Size: 0x1
    // Offset: 0x18
    bool encrypt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypt and: BlockSizeByte
    char __padding1[0x3] = {};
    // protected System.Int32 BlockSizeByte
    // Size: 0x4
    // Offset: 0x1C
    int BlockSizeByte;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Byte[] temp
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* temp;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Byte[] temp2
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* temp2;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] workBuff
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* workBuff;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] workout
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* workout;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Security.Cryptography.PaddingMode padmode
    // Size: 0x4
    // Offset: 0x40
    System::Security::Cryptography::PaddingMode padmode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::PaddingMode) == 0x4);
    // protected System.Int32 FeedBackByte
    // Size: 0x4
    // Offset: 0x44
    int FeedBackByte;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x48
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean lastBlock
    // Size: 0x1
    // Offset: 0x49
    bool lastBlock;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lastBlock and: rng
    char __padding10[0x6] = {};
    // private System.Security.Cryptography.RandomNumberGenerator _rng
    // Size: 0x8
    // Offset: 0x50
    System::Security::Cryptography::RandomNumberGenerator* rng;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RandomNumberGenerator*) == 0x8);
    // Creating value type constructor for type: SymmetricTransform
    SymmetricTransform(System::Security::Cryptography::SymmetricAlgorithm* algo_ = {}, bool encrypt_ = {}, int BlockSizeByte_ = {}, ::Array<uint8_t>* temp_ = {}, ::Array<uint8_t>* temp2_ = {}, ::Array<uint8_t>* workBuff_ = {}, ::Array<uint8_t>* workout_ = {}, System::Security::Cryptography::PaddingMode padmode_ = {}, int FeedBackByte_ = {}, bool m_disposed_ = {}, bool lastBlock_ = {}, System::Security::Cryptography::RandomNumberGenerator* rng_ = {}) noexcept : algo{algo_}, encrypt{encrypt_}, BlockSizeByte{BlockSizeByte_}, temp{temp_}, temp2{temp2_}, workBuff{workBuff_}, workout{workout_}, padmode{padmode_}, FeedBackByte{FeedBackByte_}, m_disposed{m_disposed_}, lastBlock{lastBlock_}, rng{rng_} {}
    // Creating interface conversion operator: operator System::Security::Cryptography::ICryptoTransform
    operator System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // public System.Void .ctor(System.Security.Cryptography.SymmetricAlgorithm symmAlgo, System.Boolean encryption, System.Byte[] rgbIV)
    // Offset: 0x1A56F7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SymmetricTransform* New_ctor(System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::Array<uint8_t>* rgbIV) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::SymmetricTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SymmetricTransform*, creationType>(symmAlgo, encryption, rgbIV)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1A572B4
    void System_IDisposable_Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1A57330
    void Dispose(bool disposing);
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x1A57394
    bool get_CanTransformMultipleBlocks();
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x1A5739C
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x1A573A4
    int get_OutputBlockSize();
    // protected System.Void Transform(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A573AC
    void Transform(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0xFFFFFFFF
    void ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void CBC(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A57560
    void CBC(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void CFB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A576D8
    void CFB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void OFB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A578B4
    void OFB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void CTS(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A57920
    void CTS(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // private System.Void CheckInput(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1A5798C
    void CheckInput(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1A57AE4
    int TransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // private System.Boolean get_KeepLastBlock()
    // Offset: 0x1A57CFC
    bool get_KeepLastBlock();
    // private System.Int32 InternalTransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1A57D20
    int InternalTransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // private System.Void Random(System.Byte[] buffer, System.Int32 start, System.Int32 length)
    // Offset: 0x1A57F00
    void Random(::Array<uint8_t>* buffer, int start, int length);
    // private System.Void ThrowBadPaddingException(System.Security.Cryptography.PaddingMode padding, System.Int32 length, System.Int32 position)
    // Offset: 0x1A57FC0
    void ThrowBadPaddingException(System::Security::Cryptography::PaddingMode padding, int length, int position);
    // protected System.Byte[] FinalEncrypt(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1A5812C
    ::Array<uint8_t>* FinalEncrypt(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // protected System.Byte[] FinalDecrypt(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1A583D0
    ::Array<uint8_t>* FinalDecrypt(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1A58684
    ::Array<uint8_t>* TransformFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // protected override System.Void Finalize()
    // Offset: 0x1A57240
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Mono.Security.Cryptography.SymmetricTransform
  #pragma pack(pop)
  static check_size<sizeof(SymmetricTransform), 80 + sizeof(System::Security::Cryptography::RandomNumberGenerator*)> __Mono_Security_Cryptography_SymmetricTransformSizeCheck;
  static_assert(sizeof(SymmetricTransform) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::SymmetricTransform*, "Mono.Security.Cryptography", "SymmetricTransform");
