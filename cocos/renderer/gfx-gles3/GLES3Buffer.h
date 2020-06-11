#ifndef CC_GFXGLES3_GLES3_BUFFER_H_
#define CC_GFXGLES3_GLES3_BUFFER_H_

NS_CC_BEGIN

class GLES3GPUBuffer;

class CC_GLES3_API GLES3Buffer : public GFXBuffer {
public:
    GLES3Buffer(GFXDevice *device);
    ~GLES3Buffer();

public:
    virtual bool initialize(const GFXBufferInfo &info) override;
    virtual void destroy() override;
    virtual void resize(uint size) override;
    virtual void update(void *buffer, uint offset, uint size) override;

    CC_INLINE GLES3GPUBuffer *gpuBuffer() const { return _gpuBuffer; }

private:
    GLES3GPUBuffer *_gpuBuffer = nullptr;
};

NS_CC_END

#endif