#include <string.h>
#include <stdlib.h>
#include <SkBitmap.h>
#include <stdint.h>

extern "C"
{
    /* android::SkBitmap::allocPixels */
    int* _ZN8SkBitmap11allocPixelsEPNS_9AllocatorEP12SkColorTable(int a1, int *a2, int a3)
    {
        SkBitmap::HeapAllocator v4;
        if (!a2) {
            a2 = (int *)&v4;
        }
        return a2 + 12;
    }

    /* android::SurfaceControl:setLayer*/
    void _ZN7android14SurfaceControl8setLayerEj(uint32_t) {}
    void _ZN7android14SurfaceControl8setLayerEi(int32_t layer) {
        _ZN7android14SurfaceControl8setLayerEj(static_cast<uint32_t>(layer));
    }
}
