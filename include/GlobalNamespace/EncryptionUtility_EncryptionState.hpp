// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Including type: EncryptionUtility/IEncryptionState
#include "GlobalNamespace/EncryptionUtility_IEncryptionState.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentQueue`1<T>
  template<typename T>
  class ConcurrentQueue_1;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Forward declaring type: HMac
  class HMac;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: EncryptionUtility/EncryptionState
  class EncryptionUtility::EncryptionState : public ::Il2CppObject/*, public GlobalNamespace::EncryptionUtility::IEncryptionState*/ {
    public:
    // private System.Boolean _isValid
    // Size: 0x1
    // Offset: 0x10
    bool isValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isValid and: lastSentSequenceNum
    char __padding0[0x3] = {};
    // private System.Int32 _lastSentSequenceNum
    // Size: 0x4
    // Offset: 0x14
    int lastSentSequenceNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _hasReceivedSequenceNum
    // Size: 0x1
    // Offset: 0x18
    bool hasReceivedSequenceNum;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasReceivedSequenceNum and: lastReceivedSequenceNum
    char __padding2[0x3] = {};
    // private System.UInt32 _lastReceivedSequenceNum
    // Size: 0x4
    // Offset: 0x1C
    uint lastReceivedSequenceNum;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private readonly System.Boolean[] _receivedSequenceNumBuffer
    // Size: 0x8
    // Offset: 0x20
    ::Array<bool>* receivedSequenceNumBuffer;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // public readonly System.Byte[] sendKey
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* sendKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public readonly System.Byte[] receiveKey
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* receiveKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] _sendMacKey
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* sendMacKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] _receiveMacKey
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* receiveMacKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Collections.Concurrent.ConcurrentQueue`1<Org.BouncyCastle.Crypto.Macs.HMac> _sendMacQueue
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac*>* sendMacQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac*>*) == 0x8);
    // private readonly System.Collections.Concurrent.ConcurrentQueue`1<Org.BouncyCastle.Crypto.Macs.HMac> _receiveMacQueue
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac*>* receiveMacQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac*>*) == 0x8);
    // Creating value type constructor for type: EncryptionState
    EncryptionState(bool isValid_ = {}, int lastSentSequenceNum_ = {}, bool hasReceivedSequenceNum_ = {}, uint lastReceivedSequenceNum_ = {}, ::Array<bool>* receivedSequenceNumBuffer_ = {}, ::Array<uint8_t>* sendKey_ = {}, ::Array<uint8_t>* receiveKey_ = {}, ::Array<uint8_t>* sendMacKey_ = {}, ::Array<uint8_t>* receiveMacKey_ = {}, System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac*>* sendMacQueue_ = {}, System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac*>* receiveMacQueue_ = {}) noexcept : isValid{isValid_}, lastSentSequenceNum{lastSentSequenceNum_}, hasReceivedSequenceNum{hasReceivedSequenceNum_}, lastReceivedSequenceNum{lastReceivedSequenceNum_}, receivedSequenceNumBuffer{receivedSequenceNumBuffer_}, sendKey{sendKey_}, receiveKey{receiveKey_}, sendMacKey{sendMacKey_}, receiveMacKey{receiveMacKey_}, sendMacQueue{sendMacQueue_}, receiveMacQueue{receiveMacQueue_} {}
    // Creating interface conversion operator: operator GlobalNamespace::EncryptionUtility::IEncryptionState
    operator GlobalNamespace::EncryptionUtility::IEncryptionState() noexcept {
      return *reinterpret_cast<GlobalNamespace::EncryptionUtility::IEncryptionState*>(this);
    }
    // static field const value: static private System.Int32 kReceivedSequencNumBufferLength
    static constexpr const int kReceivedSequencNumBufferLength = 64;
    // Get static field: static private System.Int32 kReceivedSequencNumBufferLength
    static int _get_kReceivedSequencNumBufferLength();
    // Set static field: static private System.Int32 kReceivedSequencNumBufferLength
    static void _set_kReceivedSequencNumBufferLength(int value);
    // public System.Boolean get_isValid()
    // Offset: 0x1310C50
    bool get_isValid();
    // public System.Void EncryptData(System.Byte[] data, ref System.Int32 offset, ref System.Int32 length, System.Int32 extraPrefixBytes)
    // Offset: 0x1310C74
    void EncryptData(::Array<uint8_t>* data, int& offset, int& length, int extraPrefixBytes);
    // public System.Boolean TryDecryptData(System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x1310D08
    bool TryDecryptData(::Array<uint8_t>* data, int& offset, int& length);
    // public System.Byte[] ComputeSendMac(System.Byte[] data, System.Int32 offset, System.Int32 count)
    // Offset: 0x130F6F0
    ::Array<uint8_t>* ComputeSendMac(::Array<uint8_t>* data, int offset, int count);
    // public System.Byte[] ComputeReceiveMac(System.Byte[] data, System.Int32 offset, System.Int32 count)
    // Offset: 0x1310090
    ::Array<uint8_t>* ComputeReceiveMac(::Array<uint8_t>* data, int offset, int count);
    // public System.Boolean IsValidSequenceNum(System.UInt32 sequenceNum)
    // Offset: 0x130FF90
    bool IsValidSequenceNum(uint sequenceNum);
    // public System.Boolean PutSequenceNum(System.UInt32 sequenceNum)
    // Offset: 0x131029C
    bool PutSequenceNum(uint sequenceNum);
    // public System.UInt32 GetNextSentSequenceNum()
    // Offset: 0x130F6E4
    uint GetNextSentSequenceNum();
    // public System.Void .ctor(System.Byte[] preMasterSecret, System.Byte[] serverSeed, System.Byte[] clientSeed, System.Boolean isClient)
    // Offset: 0x130ED34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncryptionUtility::EncryptionState* New_ctor(::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* serverSeed, ::Array<uint8_t>* clientSeed, bool isClient) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EncryptionUtility::EncryptionState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncryptionUtility::EncryptionState*, creationType>(preMasterSecret, serverSeed, clientSeed, isClient)));
    }
    // static private System.Byte[] MakeSeed(System.Byte[] baseSeed, System.Byte[] serverSeed, System.Byte[] clientSeed)
    // Offset: 0x1310D94
    static ::Array<uint8_t>* MakeSeed(::Array<uint8_t>* baseSeed, ::Array<uint8_t>* serverSeed, ::Array<uint8_t>* clientSeed);
    // static private System.Byte[] PRF(System.Byte[] key, System.Byte[] seed, System.Int32 length)
    // Offset: 0x1310E7C
    static ::Array<uint8_t>* PRF(::Array<uint8_t>* key, ::Array<uint8_t>* seed, int length);
    // static private System.Void PRF_Hash(System.Byte[] key, System.Byte[] seed, ref System.Int32 length)
    // Offset: 0x1310F6C
    static void PRF_Hash(::Array<uint8_t>* key, ::Array<uint8_t>* seed, int& length);
    // public System.Void Dispose()
    // Offset: 0x1311124
    void Dispose();
  }; // EncryptionUtility/EncryptionState
  #pragma pack(pop)
  static check_size<sizeof(EncryptionUtility::EncryptionState), 80 + sizeof(System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac*>*)> __GlobalNamespace_EncryptionUtility_EncryptionStateSizeCheck;
  static_assert(sizeof(EncryptionUtility::EncryptionState) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EncryptionUtility::EncryptionState*, "", "EncryptionUtility/EncryptionState");
