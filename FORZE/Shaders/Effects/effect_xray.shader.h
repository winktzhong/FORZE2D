// DO NOT MODIFY THE HEADERS IF FORZE IS ALREADY COMPILED AS A STATIC LIBRARY
#ifndef __FZEFFECT_XRAY_SHADER_H_INCLUDED__
#define __FZEFFECT_XRAY_SHADER_H_INCLUDED__
/*
 * FORZE ENGINE: http://forzefield.com
 *
 * Copyright (c) 2011-2012 FORZEFIELD Studios S.L.
 * Copyright (c) 2012 Manuel Martínez-Almeida
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/**
 @author Manuel Martínez-Almeida
 */

#include "../../FZOSW.h"

#if FZ_GL_SHADERS

const char effect_xray_frag[] =
"#ifdef GL_ES \n"
"precision lowp float; \n"
"varying mediump vec2 v_texCoord; \n"
"uniform lowp vec3 u_intensity; \n"
"uniform lowp sampler2D u_texture; \n"
"#else \n"
"varying vec2 v_texCoord; \n"
"uniform vec3 u_intensity; \n"
"uniform sampler2D u_texture; \n"
"#endif \n"
"void main() { \n"
"    float value = 1.0 - dot(texture2D(u_texture, v_texCoord).rgb, u_intensity); \n"
"    gl_FragColor.rgb = vec3(value * 0.8, value, value * 0.96); \n"
"}";

#endif
#endif
