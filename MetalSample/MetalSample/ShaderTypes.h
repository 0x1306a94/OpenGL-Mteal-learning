//
//  ShaderTypes.h
//  MetalSample
//
//  Created by king on 2020/10/13.
//

#ifndef ShaderTypes_h
#define ShaderTypes_h

#include <simd/simd.h>

typedef struct {
	vector_float4 position;
	vector_float2 textureCoordinate;
} SSVertex;

typedef struct {
	simd_float4x4 projection;
	simd_float4x4 model;
} SSUniform;

typedef enum SSVertexInputIndex {
	SSVertexInputIndexVertices = 0,
	SSVertexInputIndexUniforms = 1,
} SSVertexInputIndex;

typedef enum SSFragmentTextureIndex {
	SSFragmentTextureIndexOne = 0,
} SSFragmentTextureIndex;

#endif /* ShaderTypes_h */

