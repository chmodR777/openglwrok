#ifndef TEXTURETEXT_H
#define TEXTURETEXT_H

#include <windows.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Shader.h"

class TextureTest
{
public:
	TextureTest();
	~TextureTest();
	void draw();

private:
	
	unsigned int m_texture1;
	unsigned int m_texture2;
	Shader m_texturShader;
	unsigned int m_VAO;


};

#endif
