/****************************************************************************
 Copyright (c) 2013-2014 Chukong Technologies Inc.

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef _CC_QUADCOMMAND_H_
#define _CC_QUADCOMMAND_H_

#include "renderer/CCRenderCommand.h"
#include "renderer/CCGLProgramState.h"
#include "renderer/CCRenderCommandPool.h"

NS_CC_BEGIN

/** Command used to render one or more Quads */
class QuadCommand : public RenderCommand
{
public:
    static const int MATERIAL_ID_DO_NOT_BATCH = 0;

    QuadCommand();
    ~QuadCommand();
    
    /** Initializes the command.
     @param globalOrder GlobalZOrder of the command.
     @param textureID The openGL handle of the used texture.
     @param shader The specified glProgram and its uniform.
     @param blendType Blend function for the command.
     @param quads Rendered quads for the command.
     @param quadCount The number of quads when rendering.
     @param mv ModelView matrix for the command.
     @param flags to indicate that the command is using 3D rendering or not.
     */
    void init(float globalOrder, GLuint textureID, GLProgramState* shader, const BlendFunc& blendType, V3F_C4B_T2F_Quad* quads, ssize_t quadCount,
              const Mat4& mv, uint32_t flags);

    /**Deprecated function, the params is similar as the upper init function, with flags equals 0.*/
    CC_DEPRECATED_ATTRIBUTE void init(float globalOrder, GLuint textureID, GLProgramState* shader, const BlendFunc& blendType, V3F_C4B_T2F_Quad* quads, ssize_t quadCount,
              const Mat4& mv);

    void useMaterial() const;

    inline uint32_t getMaterialID() const { return _materialID; }
    inline GLuint getTextureID() const { return _textureID; }
    inline V3F_C4B_T2F_Quad* getQuads() const { return _quads; }
    inline ssize_t getQuadCount() const { return _quadsCount; }
    inline GLProgramState* getGLProgramState() const { return _glProgramState; }
    inline BlendFunc getBlendType() const { return _blendType; }
    inline const Mat4& getModelView() const { return _mv; }

protected:
    void generateMaterialID();

    uint32_t _materialID;
    GLuint _textureID;
    GLProgramState* _glProgramState;
    BlendFunc _blendType;
    V3F_C4B_T2F_Quad* _quads;
    ssize_t _quadsCount;
    Mat4 _mv;
};

NS_CC_END

#endif //_CC_QUADCOMMAND_H_