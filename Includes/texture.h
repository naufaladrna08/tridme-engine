#ifndef _TEXTURE_H_
#define _TEXTURE_H_
#include <renderer.h>
#include <error.h>

class Texture {
  private:
    unsigned int m_renderer_id;
    std::string m_filepath;
    unsigned char* m_local_buffer;
    int m_width, m_height, m_bpp;

  public:
    Texture(const std::string &path);
    ~Texture();

    void Bind(unsigned int slot) const;
    void Unbind() const;

    inline int GetWidth() const { return m_width; }
    inline int GeHeight() const { return m_height; }
};

#endif