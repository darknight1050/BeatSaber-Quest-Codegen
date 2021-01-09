// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: FilterMode
  struct FilterMode;
  // Forward declaring type: RenderTextureMemoryless
  struct RenderTextureMemoryless;
  // Forward declaring type: RenderTextureFormat
  struct RenderTextureFormat;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderTargetIdentifier
  struct RenderTargetIdentifier;
  // Forward declaring type: CommandBufferExecutionFlags
  struct CommandBufferExecutionFlags;
  // Forward declaring type: RenderTextureSubElement
  struct RenderTextureSubElement;
  // Forward declaring type: ShadowSamplingMode
  struct ShadowSamplingMode;
  // Forward declaring type: RenderBufferLoadAction
  struct RenderBufferLoadAction;
  // Forward declaring type: RenderBufferStoreAction
  struct RenderBufferStoreAction;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x18
  // Autogenerated type: UnityEngine.Rendering.CommandBuffer
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4EF50
  // [NativeTypeAttribute] Offset: D4EF50
  // [NativeHeaderAttribute] Offset: D4EF50
  // [NativeHeaderAttribute] Offset: D4EF50
  // [UsedByNativeCodeAttribute] Offset: D4EF50
  class CommandBuffer : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: CommandBuffer
    CommandBuffer(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // static private System.IntPtr InitBuffer()
    // Offset: 0x16BA678
    static System::IntPtr InitBuffer();
    // private System.Void ReleaseBuffer()
    // Offset: 0x16BA6AC
    void ReleaseBuffer();
    // public System.Void set_name(System.String value)
    // Offset: 0x16BA6EC
    void set_name(::Il2CppString* value);
    // public System.Void Clear()
    // Offset: 0x16BA73C
    void Clear();
    // private System.Void Internal_DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x16BA77C
    void Internal_DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material, int submeshIndex, int shaderPass, UnityEngine::MaterialPropertyBlock* properties);
    // private System.Void Internal_DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
    // Offset: 0x16BA88C
    void Internal_DrawRenderer(UnityEngine::Renderer* renderer, UnityEngine::Material* material, int submeshIndex, int shaderPass);
    // private System.Void CopyTexture_Internal(ref UnityEngine.Rendering.RenderTargetIdentifier src, System.Int32 srcElement, System.Int32 srcMip, System.Int32 srcX, System.Int32 srcY, System.Int32 srcWidth, System.Int32 srcHeight, ref UnityEngine.Rendering.RenderTargetIdentifier dst, System.Int32 dstElement, System.Int32 dstMip, System.Int32 dstX, System.Int32 dstY, System.Int32 mode)
    // Offset: 0x16BA8FC
    void CopyTexture_Internal(UnityEngine::Rendering::RenderTargetIdentifier& src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, UnityEngine::Rendering::RenderTargetIdentifier& dst, int dstElement, int dstMip, int dstX, int dstY, int mode);
    // private System.Void Blit_Texture(UnityEngine.Texture source, ref UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
    // Offset: 0x16BA9C0
    void Blit_Texture(UnityEngine::Texture* source, UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine::Material* mat, int pass, UnityEngine::Vector2 scale, UnityEngine::Vector2 offset, int sourceDepthSlice, int destDepthSlice);
    // private System.Void Blit_Identifier(ref UnityEngine.Rendering.RenderTargetIdentifier source, ref UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
    // Offset: 0x16BAB04
    void Blit_Identifier(UnityEngine::Rendering::RenderTargetIdentifier& source, UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine::Material* mat, int pass, UnityEngine::Vector2 scale, UnityEngine::Vector2 offset, int sourceDepthSlice, int destDepthSlice);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode, System.Boolean useDynamicScale)
    // Offset: 0x16BAC48
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format, int antiAliasing, bool enableRandomWrite, UnityEngine::RenderTextureMemoryless memorylessMode, bool useDynamicScale);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode)
    // Offset: 0x16BAD0C
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format, int antiAliasing, bool enableRandomWrite, UnityEngine::RenderTextureMemoryless memorylessMode);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing)
    // Offset: 0x16BADC4
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format, int antiAliasing);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format)
    // Offset: 0x16BAE74
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format);
    // public System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format)
    // Offset: 0x16BAF18
    void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, UnityEngine::FilterMode filter, UnityEngine::RenderTextureFormat format);
    // public System.Void ReleaseTemporaryRT(System.Int32 nameID)
    // Offset: 0x16BAFCC
    void ReleaseTemporaryRT(int nameID);
    // public System.Void SetGlobalFloat(System.Int32 nameID, System.Single value)
    // Offset: 0x16BB01C
    void SetGlobalFloat(int nameID, float value);
    // public System.Void SetGlobalVector(System.Int32 nameID, UnityEngine.Vector4 value)
    // Offset: 0x16BB07C
    void SetGlobalVector(int nameID, UnityEngine::Vector4 value);
    // public System.Void SetViewProjectionMatrices(UnityEngine.Matrix4x4 view, UnityEngine.Matrix4x4 proj)
    // Offset: 0x16BB13C
    void SetViewProjectionMatrices(UnityEngine::Matrix4x4 view, UnityEngine::Matrix4x4 proj);
    // private System.Boolean ValidateAgainstExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags requiredFlags, UnityEngine.Rendering.CommandBufferExecutionFlags invalidFlags)
    // Offset: 0x16BB1EC
    bool ValidateAgainstExecutionFlags(UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags);
    // private System.Void SetGlobalTexture_Impl(System.Int32 nameID, ref UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderTextureSubElement element)
    // Offset: 0x16BB244
    void SetGlobalTexture_Impl(int nameID, UnityEngine::Rendering::RenderTargetIdentifier& rt, UnityEngine::Rendering::RenderTextureSubElement element);
    // private System.Void SetShadowSamplingMode_Impl(ref UnityEngine.Rendering.RenderTargetIdentifier shadowmap, UnityEngine.Rendering.ShadowSamplingMode mode)
    // Offset: 0x16BB2AC
    void SetShadowSamplingMode_Impl(UnityEngine::Rendering::RenderTargetIdentifier& shadowmap, UnityEngine::Rendering::ShadowSamplingMode mode);
    // public System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier rt)
    // Offset: 0x16BB304
    void SetRenderTarget(UnityEngine::Rendering::RenderTargetIdentifier rt);
    // private System.Void SetRenderTargetSingle_Internal(UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
    // Offset: 0x16BB3B0
    void SetRenderTargetSingle_Internal(UnityEngine::Rendering::RenderTargetIdentifier rt, UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x16BB51C
    void Dispose(bool disposing);
    // public System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x16BB648
    void DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material, int submeshIndex, int shaderPass, UnityEngine::MaterialPropertyBlock* properties);
    // public System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
    // Offset: 0x16BB8E0
    void DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material, int submeshIndex, int shaderPass);
    // public System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex)
    // Offset: 0x16BB914
    void DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material, int submeshIndex);
    // public System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material)
    // Offset: 0x16BB94C
    void DrawMesh(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material* material);
    // public System.Void DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
    // Offset: 0x16BB988
    void DrawRenderer(UnityEngine::Renderer* renderer, UnityEngine::Material* material, int submeshIndex, int shaderPass);
    // public System.Void CopyTexture(UnityEngine.Rendering.RenderTargetIdentifier src, UnityEngine.Rendering.RenderTargetIdentifier dst)
    // Offset: 0x16BBBB4
    void CopyTexture(UnityEngine::Rendering::RenderTargetIdentifier src, UnityEngine::Rendering::RenderTargetIdentifier dst);
    // public System.Void Blit(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass)
    // Offset: 0x16BBC4C
    void Blit(UnityEngine::Texture* source, UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine::Material* mat, int pass);
    // public System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest)
    // Offset: 0x16BBD44
    void Blit(UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine::Rendering::RenderTargetIdentifier dest);
    // public System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass)
    // Offset: 0x16BBDF0
    void Blit(UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine::Material* mat, int pass);
    // public System.Void SetGlobalVector(System.String name, UnityEngine.Vector4 value)
    // Offset: 0x16BBEAC
    void SetGlobalVector(::Il2CppString* name, UnityEngine::Vector4 value);
    // public System.Void SetGlobalTexture(System.String name, UnityEngine.Rendering.RenderTargetIdentifier value)
    // Offset: 0x16BBF74
    void SetGlobalTexture(::Il2CppString* name, UnityEngine::Rendering::RenderTargetIdentifier value);
    // public System.Void SetGlobalTexture(System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier value, UnityEngine.Rendering.RenderTextureSubElement element)
    // Offset: 0x16BC018
    void SetGlobalTexture(int nameID, UnityEngine::Rendering::RenderTargetIdentifier value, UnityEngine::Rendering::RenderTextureSubElement element);
    // public System.Void SetShadowSamplingMode(UnityEngine.Rendering.RenderTargetIdentifier shadowmap, UnityEngine.Rendering.ShadowSamplingMode mode)
    // Offset: 0x16BC080
    void SetShadowSamplingMode(UnityEngine::Rendering::RenderTargetIdentifier shadowmap, UnityEngine::Rendering::ShadowSamplingMode mode);
    // private System.Void Internal_DrawMesh_Injected(UnityEngine.Mesh mesh, ref UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x16BA804
    void Internal_DrawMesh_Injected(UnityEngine::Mesh* mesh, UnityEngine::Matrix4x4& matrix, UnityEngine::Material* material, int submeshIndex, int shaderPass, UnityEngine::MaterialPropertyBlock* properties);
    // private System.Void Blit_Texture_Injected(UnityEngine.Texture source, ref UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, ref UnityEngine.Vector2 scale, ref UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
    // Offset: 0x16BAA64
    void Blit_Texture_Injected(UnityEngine::Texture* source, UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine::Material* mat, int pass, UnityEngine::Vector2& scale, UnityEngine::Vector2& offset, int sourceDepthSlice, int destDepthSlice);
    // private System.Void Blit_Identifier_Injected(ref UnityEngine.Rendering.RenderTargetIdentifier source, ref UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, ref UnityEngine.Vector2 scale, ref UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
    // Offset: 0x16BABA8
    void Blit_Identifier_Injected(UnityEngine::Rendering::RenderTargetIdentifier& source, UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine::Material* mat, int pass, UnityEngine::Vector2& scale, UnityEngine::Vector2& offset, int sourceDepthSlice, int destDepthSlice);
    // private System.Void SetGlobalVector_Injected(System.Int32 nameID, ref UnityEngine.Vector4 value)
    // Offset: 0x16BB0E4
    void SetGlobalVector_Injected(int nameID, UnityEngine::Vector4& value);
    // private System.Void SetViewProjectionMatrices_Injected(ref UnityEngine.Matrix4x4 view, ref UnityEngine.Matrix4x4 proj)
    // Offset: 0x16BB194
    void SetViewProjectionMatrices_Injected(UnityEngine::Matrix4x4& view, UnityEngine::Matrix4x4& proj);
    // private System.Void SetRenderTargetSingle_Internal_Injected(ref UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
    // Offset: 0x16BB430
    void SetRenderTargetSingle_Internal_Injected(UnityEngine::Rendering::RenderTargetIdentifier& rt, UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);
    // protected override System.Void Finalize()
    // Offset: 0x16BB4B0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x16BB588
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0x16BB5FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommandBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Rendering::CommandBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommandBuffer*, creationType>()));
    }
  }; // UnityEngine.Rendering.CommandBuffer
  static check_size<sizeof(CommandBuffer), 16 + sizeof(System::IntPtr)> __UnityEngine_Rendering_CommandBufferSizeCheck;
  static_assert(sizeof(CommandBuffer) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
#pragma pack(pop)
