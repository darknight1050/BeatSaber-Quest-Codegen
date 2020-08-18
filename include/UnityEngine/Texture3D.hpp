// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
  // Forward declaring type: TextureCreationFlags
  struct TextureCreationFlags;
  // Forward declaring type: DefaultFormat
  struct DefaultFormat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color32
  struct Color32;
  // Forward declaring type: TextureFormat
  struct TextureFormat;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Texture3D
  class Texture3D : public UnityEngine::Texture {
    public:
    // static private System.Boolean Internal_CreateImpl(UnityEngine.Texture3D mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x12EF6A0
    static bool Internal_CreateImpl(UnityEngine::Texture3D* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // static private System.Void Internal_Create(UnityEngine.Texture3D mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x12EF728
    static void Internal_Create(UnityEngine::Texture3D* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // private System.Void ApplyImpl(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)
    // Offset: 0x12EF814
    void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);
    // public System.Void SetPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel)
    // Offset: 0x12EF86C
    void SetPixels32(::Array<UnityEngine::Color32>* colors, int miplevel);
    // public System.Void SetPixels32(UnityEngine.Color32[] colors)
    // Offset: 0x12EF8C4
    void SetPixels32(::Array<UnityEngine::Color32>* colors);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.DefaultFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x12EF918
    static Texture3D* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x12EF9A0
    static Texture3D* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.Int32 mipCount)
    // Offset: 0x12EFA50
    static Texture3D* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount)
    // Offset: 0x12EFB30
    static Texture3D* New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, int mipCount);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
    // Offset: 0x12EFC38
    static Texture3D* New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, bool mipChain);
    // public System.Void Apply(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)
    // Offset: 0x12EFC58
    void Apply(bool updateMipmaps, bool makeNoLongerReadable);
    // public System.Void Apply()
    // Offset: 0x12EFD00
    void Apply();
    // public override System.Boolean get_isReadable()
    // Offset: 0x12EF660
    // Implemented from: UnityEngine.Texture
    // Base method: System.Boolean Texture::get_isReadable()
    bool get_isReadable();
  }; // UnityEngine.Texture3D
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture3D*, "UnityEngine", "Texture3D");
#pragma pack(pop)
