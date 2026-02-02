
//#define D3D_DISABLE_9EX

#include <d3d9.h>
#include <iostream>
#pragma comment(lib, "d3d9.lib")

#define D3DFMT_RAWZ (D3DFORMAT)MAKEFOURCC('R', 'A', 'W', 'Z')
#define D3DFMT_R2VB MAKEFOURCC('R', '2', 'V', 'B')
#define D3DFMT_NVDB MAKEFOURCC('N', 'V', 'D', 'B')
#define D3DFMT_NV_RESZ MAKEFOURCC('R', 'E', 'S', 'Z')

D3DFORMAT formats[] = {
    D3DFMT_R8G8B8,
    D3DFMT_A8R8G8B8,
    D3DFMT_X8R8G8B8,
    D3DFMT_R5G6B5,
    D3DFMT_X1R5G5B5,
    D3DFMT_A1R5G5B5,
    D3DFMT_A4R4G4B4,
    D3DFMT_R3G3B2,
    D3DFMT_A8,
    D3DFMT_A8R3G3B2,
    D3DFMT_X4R4G4B4,
    D3DFMT_A2B10G10R10,
    D3DFMT_A8B8G8R8,
    D3DFMT_X8B8G8R8,
    D3DFMT_G16R16,
    D3DFMT_A2R10G10B10,
    D3DFMT_A16B16G16R16,

    D3DFMT_A8P8,
    D3DFMT_P8,

    D3DFMT_L8,
    D3DFMT_A8L8,
    D3DFMT_A4L4,

    D3DFMT_V8U8,
    D3DFMT_L6V5U5,
    D3DFMT_X8L8V8U8,
    D3DFMT_Q8W8V8U8,
    D3DFMT_V16U16,
    D3DFMT_A2W10V10U10,

    //(D3DFORMAT)MAKEFOURCC('U', 'Y', 'V', 'Y'),
    (D3DFORMAT)MAKEFOURCC('R', 'G', 'B', 'G'),
    //(D3DFORMAT)MAKEFOURCC('Y', 'U', 'Y', '2'),
    (D3DFORMAT)MAKEFOURCC('G', 'R', 'G', 'B'),
    (D3DFORMAT)MAKEFOURCC('D', 'X', 'T', '1'),
    (D3DFORMAT)MAKEFOURCC('D', 'X', 'T', '2'),
    (D3DFORMAT)MAKEFOURCC('D', 'X', 'T', '3'),
    (D3DFORMAT)MAKEFOURCC('D', 'X', 'T', '4'),
    (D3DFORMAT)MAKEFOURCC('D', 'X', 'T', '5'),
    (D3DFORMAT)MAKEFOURCC('M','E','T','1'),

    D3DFMT_D16_LOCKABLE,
    D3DFMT_D32,
    D3DFMT_D15S1,
    D3DFMT_D24S8,
    D3DFMT_D24X8,
    D3DFMT_D24X4S4,
    D3DFMT_D16,
    D3DFMT_D32F_LOCKABLE,
    D3DFMT_D24FS8,

    D3DFMT_L16,

    D3DFMT_VERTEXDATA,
    D3DFMT_INDEX16,
    D3DFMT_INDEX32,

    D3DFMT_Q16W16V16U16,

    D3DFMT_R16F,
    D3DFMT_G16R16F,
    D3DFMT_A16B16G16R16F,
    D3DFMT_R32F,
    D3DFMT_G32R32F,
    D3DFMT_A32B32G32R32F,

    D3DFMT_CxV8U8,
    #if !defined(D3D_DISABLE_9EX)
    D3DFMT_A1,
    D3DFMT_A2B10G10R10_XR_BIAS,
    D3DFMT_BINARYBUFFER,
    D3DFMT_D32_LOCKABLE,
    D3DFMT_S8_LOCKABLE,
    #endif
    D3DFMT_FORCE_DWORD,

    D3DFMT_MULTI2_ARGB8,
    D3DFMT_G8R8_G8B8,
    D3DFMT_R8G8_B8G8,
    D3DFMT_UYVY,
    D3DFMT_YUY2,

    (D3DFORMAT)MAKEFOURCC('A', 'T', 'I', '2'),
    (D3DFORMAT)MAKEFOURCC('A', 'T', 'I', '1'),
    //(D3DFORMAT)MAKEFOURCC('A', 'T', '1', 'N'),
    (D3DFORMAT)MAKEFOURCC('E', 'T', 'C', ' '),
    (D3DFORMAT)MAKEFOURCC('E', 'T', 'C', '1'),
    (D3DFORMAT)MAKEFOURCC('A', 'T', 'C', ' '),
    (D3DFORMAT)MAKEFOURCC('A', 'T', 'C', 'A'),
    (D3DFORMAT)MAKEFOURCC('A', 'T', 'C', 'I'),
    (D3DFORMAT)MAKEFOURCC('P', 'T', 'C', '2'),
    (D3DFORMAT)MAKEFOURCC('P', 'T', 'C', '4'),
    (D3DFORMAT)MAKEFOURCC('D', 'X', '1', '0'),
    (D3DFORMAT)MAKEFOURCC('N', 'U', 'L', 'L'),
    (D3DFORMAT)MAKEFOURCC('N', 'V', 'C', 'S'), // Internal resource created by NVAPI
    (D3DFORMAT)MAKEFOURCC('I', 'N', 'T', 'Z'),
    (D3DFORMAT)D3DFMT_NV_RESZ,
    (D3DFORMAT)MAKEFOURCC('D', 'F', '2', '4'),
    (D3DFORMAT)MAKEFOURCC('D', 'F', '1', '6'),

    (D3DFORMAT)D3DFMT_NVDB,
    (D3DFORMAT)D3DFMT_R2VB,
    (D3DFORMAT)MAKEFOURCC('I', 'N', 'S', 'T'),
    (D3DFORMAT)MAKEFOURCC('A', 'T', 'O', 'C'),
    (D3DFORMAT)MAKEFOURCC('S', 'S', 'A', 'A'),
    D3DFMT_RAWZ,
    (D3DFORMAT)MAKEFOURCC('A', 'Y', 'U', 'V'),
    (D3DFORMAT)MAKEFOURCC('N', 'V', '1', '1'),
    (D3DFORMAT)MAKEFOURCC('N', 'V', '1', '2'),
    (D3DFORMAT)MAKEFOURCC('P', '0', '1', '0'),
    (D3DFORMAT)MAKEFOURCC('P', '0', '1', '6'),


    (D3DFORMAT)MAKEFOURCC('G', 'E', 'T', '4'),
    (D3DFORMAT)MAKEFOURCC('G', 'E', 'T', '1'),
    (D3DFORMAT)MAKEFOURCC('A', '2', 'M', '1'),
    (D3DFORMAT)MAKEFOURCC('A', '2', 'M', '0'),
    (D3DFORMAT)MAKEFOURCC('Y', '2', '1', '0'),
    (D3DFORMAT)MAKEFOURCC('Y', '2', '1', '6'),
    (D3DFORMAT)MAKEFOURCC('Y', '4', '1', '0'),
    (D3DFORMAT)MAKEFOURCC('Y', 'V', '1', '2'),
    (D3DFORMAT)MAKEFOURCC('4', '2', '0', 'O'),
    (D3DFORMAT)MAKEFOURCC('A', 'I', '4', '4'),
    (D3DFORMAT)MAKEFOURCC('I', 'A', '4', '4'),
    (D3DFORMAT)MAKEFOURCC('C', 'O', 'P', 'M'),
    (D3DFORMAT)MAKEFOURCC('A', 'L', '1', '6'),
    (D3DFORMAT)MAKEFOURCC(' ', 'R', '1', '6'),
    (D3DFORMAT)MAKEFOURCC('E', 'X', 'T', '1'),
    (D3DFORMAT)MAKEFOURCC('F', 'X', 'T', '1'),
    (D3DFORMAT)MAKEFOURCC('G', 'X', 'T', '1'),
    (D3DFORMAT)MAKEFOURCC('H', 'X', 'T', '1'),
};

const char* D3DFormatToString(D3DFORMAT format)
{
    switch (format)
    {
        case D3DFMT_UNKNOWN:              return "D3DFMT_UNKNOWN";
        case D3DFMT_R8G8B8:               return "D3DFMT_R8G8B8";
        case D3DFMT_A8R8G8B8:             return "D3DFMT_A8R8G8B8";
        case D3DFMT_X8R8G8B8:             return "D3DFMT_X8R8G8B8";
        case D3DFMT_R5G6B5:               return "D3DFMT_R5G6B5";
        case D3DFMT_X1R5G5B5:             return "D3DFMT_X1R5G5B5";
        case D3DFMT_A1R5G5B5:             return "D3DFMT_A1R5G5B5";
        case D3DFMT_A4R4G4B4:             return "D3DFMT_A4R4G4B4";
        case D3DFMT_R3G3B2:               return "D3DFMT_R3G3B2";
        case D3DFMT_A8:                   return "D3DFMT_A8";
        case D3DFMT_A8R3G3B2:             return "D3DFMT_A8R3G3B2";
        case D3DFMT_X4R4G4B4:             return "D3DFMT_X4R4G4B4";
        case D3DFMT_A2B10G10R10:          return "D3DFMT_A2B10G10R10";
        case D3DFMT_A8B8G8R8:             return "D3DFMT_A8B8G8R8";
        case D3DFMT_X8B8G8R8:             return "D3DFMT_X8B8G8R8";
        case D3DFMT_G16R16:               return "D3DFMT_G16R16";
        case D3DFMT_A2R10G10B10:          return "D3DFMT_A2R10G10B10";
        case D3DFMT_A16B16G16R16:         return "D3DFMT_A16B16G16R16";
        case D3DFMT_A8P8:                 return "D3DFMT_A8P8";
        case D3DFMT_P8:                   return "D3DFMT_P8";
        case D3DFMT_L8:                   return "D3DFMT_L8";
        case D3DFMT_A8L8:                 return "D3DFMT_A8L8";
        case D3DFMT_A4L4:                 return "D3DFMT_A4L4";
        case D3DFMT_V8U8:                 return "D3DFMT_V8U8";
        case D3DFMT_L6V5U5:               return "D3DFMT_L6V5U5";
        case D3DFMT_X8L8V8U8:             return "D3DFMT_X8L8V8U8";
        case D3DFMT_Q8W8V8U8:             return "D3DFMT_Q8W8V8U8";
        case D3DFMT_V16U16:               return "D3DFMT_V16U16";
        case D3DFMT_A2W10V10U10:          return "D3DFMT_A2W10V10U10";
        //case MAKEFOURCC('U', 'Y', 'V', 'Y'): return "D3DFMT_UYVY";
        case MAKEFOURCC('R', 'G', 'B', 'G'): return "D3DFMT_R8G8_B8G8";
        //case MAKEFOURCC('Y', 'U', 'Y', '2'): return "D3DFMT_YUY2";
        case MAKEFOURCC('G', 'R', 'G', 'B'): return "D3DFMT_G8R8_G8B8";
        case MAKEFOURCC('D', 'X', 'T', '1'): return "D3DFMT_DXT1";
        case MAKEFOURCC('D', 'X', 'T', '2'): return "D3DFMT_DXT2";
        case MAKEFOURCC('D', 'X', 'T', '3'): return "D3DFMT_DXT3";
        case MAKEFOURCC('D', 'X', 'T', '4'): return "D3DFMT_DXT4";
        case MAKEFOURCC('D', 'X', 'T', '5'): return "D3DFMT_DXT5";
        case MAKEFOURCC('M', 'E', 'T', '1'): return "D3DFMT_MULTI2_ARGB8";
        case D3DFMT_D16_LOCKABLE:         return "D3DFMT_D16_LOCKABLE";
        case D3DFMT_D32:                  return "D3DFMT_D32";
        case D3DFMT_D15S1:                return "D3DFMT_D15S1";
        case D3DFMT_D24S8:                return "D3DFMT_D24S8";
        case D3DFMT_D24X8:                return "D3DFMT_D24X8";
        case D3DFMT_D24X4S4:              return "D3DFMT_D24X4S4";
        case D3DFMT_D16:                  return "D3DFMT_D16";
        case D3DFMT_D32F_LOCKABLE:        return "D3DFMT_D32F_LOCKABLE";
        case D3DFMT_D24FS8:               return "D3DFMT_D24FS8";
        case D3DFMT_L16:                  return "D3DFMT_L16";
        #if !defined(D3D_DISABLE_9EX)
        case D3DFMT_D32_LOCKABLE:         return "D3DFMT_D32_LOCKABLE";
        case D3DFMT_S8_LOCKABLE:          return "D3DFMT_S8_LOCKABLE";
        case D3DFMT_A1:                   return "D3DFMT_A1";
        case D3DFMT_A2B10G10R10_XR_BIAS:  return "D3DFMT_A2B10G10R10_XR_BIAS";
        case D3DFMT_BINARYBUFFER:         return "D3DFMT_BINARYBUFFER";
        #endif
        case D3DFMT_UYVY:                 return "D3DFMT_UYVY";
        case D3DFMT_YUY2:                 return "D3DFMT_YUY2";
        case D3DFMT_VERTEXDATA:           return "D3DFMT_VERTEXDATA";
        case D3DFMT_INDEX16:              return "D3DFMT_INDEX16";
        case D3DFMT_INDEX32:              return "D3DFMT_INDEX32";
        case D3DFMT_Q16W16V16U16:         return "D3DFMT_Q16W16V16U16";
        case D3DFMT_R16F:                 return "D3DFMT_R16F";
        case D3DFMT_G16R16F:              return "D3DFMT_G16R16F";
        case D3DFMT_A16B16G16R16F:        return "D3DFMT_A16B16G16R16F";
        case D3DFMT_R32F:                 return "D3DFMT_R32F";
        case D3DFMT_G32R32F:              return "D3DFMT_G32R32F";
        case D3DFMT_A32B32G32R32F:        return "D3DFMT_A32B32G32R32F";
        case D3DFMT_CxV8U8:               return "D3DFMT_CxV8U8";
        case D3DFMT_FORCE_DWORD:          return "D3DFMT_FORCE_DWORD";
        case MAKEFOURCC('A', 'T', 'I', '2'): return "D3DFMT_ATI2N";
        case MAKEFOURCC('A', 'T', 'I', '1'): return "D3DFMT_ATI1N";
        //case MAKEFOURCC('A', 'T', '1', 'N'): return "D3DFMT_AT1N";
        case MAKEFOURCC('E', 'T', 'C', ' '): return "D3DFMT_ETC";
        case MAKEFOURCC('E', 'T', 'C', '1'): return "D3DFMT_ETC1";
        case MAKEFOURCC('A', 'T', 'C', ' '): return "D3DFMT_ATC";
        case MAKEFOURCC('A', 'T', 'C', 'A'): return "D3DFMT_ATCA";
        case MAKEFOURCC('A', 'T', 'C', 'I'): return "D3DFMT_ATCI";
        case MAKEFOURCC('P', 'T', 'C', '2'): return "D3DFMT_POWERVR_2BPP";
        case MAKEFOURCC('P', 'T', 'C', '4'): return "D3DFMT_POWERVR_4BPP";
        case MAKEFOURCC('D', 'X', '1', '0'): return "D3DFMT_DX10";
        case MAKEFOURCC('N', 'U', 'L', 'L'): return "D3DFMT_NULL";
        case MAKEFOURCC('N', 'V', 'C', 'S'): return "D3DFMT_NVCS";
        case MAKEFOURCC('I', 'N', 'T', 'Z'): return "D3DFMT_INTZ";
        case D3DFMT_NV_RESZ: return "D3DFMT_NV_RESZ";
        case MAKEFOURCC('D', 'F', '2', '4'): return "D3DFMT_ATI_DF24";
        case MAKEFOURCC('D', 'F', '1', '6'): return "D3DFMT_ATI_DF16";
        case D3DFMT_NVDB: return "D3DFMT_NVDB";
        case D3DFMT_R2VB: return "D3DFMT_R2VB"; 
        case MAKEFOURCC('I', 'N', 'S', 'T'): return "D3DFMT_INST";
        case MAKEFOURCC('A', 'T', 'O', 'C'): return "D3DFMT_ATOC";
        case MAKEFOURCC('S', 'S', 'A', 'A'): return "D3DFMT_SSAA";
        case MAKEFOURCC('R', 'A', 'W', 'Z'): return "D3DFMT_RAWZ";
        case MAKEFOURCC('A', 'Y', 'U', 'V'): return "D3DFMT_AYUV";
        case MAKEFOURCC('N', 'V', '1', '1'): return "D3DFMT_NV11";
        case MAKEFOURCC('N', 'V', '1', '2'): return "D3DFMT_NV12";
        case MAKEFOURCC('P', '0', '1', '0'): return "D3DFMT_P010";
        case MAKEFOURCC('P', '0', '1', '6'): return "D3DFMT_P016";
        case MAKEFOURCC('G', 'E', 'T', '4'): return "D3DFMT_GET4";
        case MAKEFOURCC('G', 'E', 'T', '1'): return "D3DFMT_GET1";
        case MAKEFOURCC('A', '2', 'M', '1'): return "D3DFMT_A2M1";
        case MAKEFOURCC('A', '2', 'M', '0'): return "D3DFMT_A2M0";
        case MAKEFOURCC('Y', '2', '1', '0'): return "D3DFMT_Y210";
        case MAKEFOURCC('Y', '2', '1', '6'): return "D3DFMT_Y216";
        case MAKEFOURCC('Y', '4', '1', '0'): return "D3DFMT_Y410";
        case MAKEFOURCC('Y', 'V', '1', '2'): return "D3DFMT_YV12";
        case MAKEFOURCC('4', '2', '0', 'O'): return "D3DFMT_420O";
        case MAKEFOURCC('A', 'I', '4', '4'): return "D3DFMT_AI44";
        case MAKEFOURCC('I', 'A', '4', '4'): return "D3DFMT_IA44";
        case MAKEFOURCC('C', 'O', 'P', 'M'): return "D3DFMT_COPM";
        case MAKEFOURCC('A', 'L', '1', '6'): return "D3DFMT_AL16";
        case MAKEFOURCC(' ', 'R', '1', '6'): return "D3DFMT_R16";
        case MAKEFOURCC('E', 'X', 'T', '1'): return "D3DFMT_EXT1";
        case MAKEFOURCC('F', 'X', 'T', '1'): return "D3DFMT_FXT1";
        case MAKEFOURCC('G', 'X', 'T', '1'): return "D3DFMT_GXT1";
        case MAKEFOURCC('H', 'X', 'T', '1'): return "D3DFMT_HXT1";

        default: {
            static char buffer[32];

            if ((format & 0xFF000000) == 0) {
                sprintf_s(buffer, sizeof(buffer), "0x%08X", format);
            }
            else {
                char fourcc[5];
                fourcc[0] = (char)(format & 0xFF);
                fourcc[1] = (char)((format >> 8) & 0xFF);
                fourcc[2] = (char)((format >> 16) & 0xFF);
                fourcc[3] = (char)((format >> 24) & 0xFF);
                fourcc[4] = '\0';

                sprintf_s(buffer, sizeof(buffer), "FOURCC('%c%c%c%c')",
                    fourcc[0], fourcc[1], fourcc[2], fourcc[3]);
            }
            return buffer;
        }
    }
}

void SetConsoleColor(WORD color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

enum ConsoleColors {
    RED     = FOREGROUND_RED | FOREGROUND_INTENSITY,
    GREEN   = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    WHITE   = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
};

IDirect3D9* pD3D = NULL;

bool ForceTypeSurface(D3DFORMAT m_ImageFormat)
{
    return (
        //(m_ImageFormat == (D3DFORMAT)MAKEFOURCC('R', 'A', 'W', 'Z')) ||
        //(m_ImageFormat == (D3DFORMAT)MAKEFOURCC('D', 'F', '2', '4')) ||
        //(m_ImageFormat == (D3DFORMAT)MAKEFOURCC('D', 'F', '1', '6')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('N', 'V', 'D', 'B')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('A', 'T', 'O', 'C')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('S', 'S', 'A', 'A')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('A', 'Y', 'U', 'V')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('N', 'V', '1', '2')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('P', '0', '1', '0')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('Y', '2', '1', '0')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('Y', '2', '1', '6')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('Y', '4', '1', '0')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('Y', 'V', '1', '2')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('A', 'I', '4', '4')) ||
        (m_ImageFormat == (D3DFORMAT)D3DFMT_R2VB) || // https://aras-p.info/texts/D3D9GPUHacks.html
        (m_ImageFormat == (D3DFORMAT)D3DFMT_NVDB) ||
        (m_ImageFormat == (D3DFORMAT)D3DFMT_NV_RESZ) ||
        
        (m_ImageFormat == D3DFMT_UYVY) ||
        (m_ImageFormat == D3DFMT_YUY2) ||
        (m_ImageFormat == D3DFMT_BINARYBUFFER)
    );
}

void IsTextureFormatOk(D3DFORMAT TextureFormat, D3DFORMAT g_DeviceFormat, int nUsage)
{
    UINT g_DisplayAdapter = D3DADAPTER_DEFAULT;
    D3DDEVTYPE g_DeviceType = D3DDEVTYPE_HAL;

    if (TextureFormat == (D3DFORMAT)D3DFMT_R2VB)
    {
        nUsage |= D3DUSAGE_DMAP; // https://userpages.cs.umbc.edu/olano/s2006c03/scheuermann.pdf
        //nUsage |= D3DUSAGE_QUERY_VERTEXTEXTURE;
        //nUsage |= D3DUSAGE_RENDERTARGET;
        //nUsage |= D3DUSAGE_DEPTHSTENCIL;
        //g_DeviceFormat = D3DFMT_D24X8;
    }

    if (TextureFormat == (D3DFORMAT)D3DFMT_NV_RESZ)
    {
        nUsage |= D3DUSAGE_RENDERTARGET;
    }

    HRESULT hr = pD3D->CheckDeviceFormat(
        g_DisplayAdapter, g_DeviceType, g_DeviceFormat,
        nUsage, ((nUsage & D3DUSAGE_DEPTHSTENCIL) != 0 || ForceTypeSurface(TextureFormat)) ? D3DRTYPE_SURFACE : D3DRTYPE_TEXTURE, TextureFormat);

    bool state = SUCCEEDED(hr);
    SetConsoleColor(state ? GREEN : RED);
    const char* fmt = D3DFormatToString(TextureFormat);
    std::cout << fmt << (state ? " VALID" : " INVALID") << "\n";
}

bool IsDepthTextureFormat(D3DFORMAT m_ImageFormat)
{
    return (
        (m_ImageFormat == D3DFMT_D16_LOCKABLE) ||
        (m_ImageFormat == D3DFMT_D32) ||
        (m_ImageFormat == D3DFMT_D15S1) ||
        (m_ImageFormat == D3DFMT_D24S8) ||
        (m_ImageFormat == D3DFMT_D24X8) ||
        (m_ImageFormat == D3DFMT_D24X4S4) ||
        (m_ImageFormat == D3DFMT_D16) ||
        (m_ImageFormat == D3DFMT_D32F_LOCKABLE) ||
        (m_ImageFormat == D3DFMT_D24FS8) ||
        //(m_ImageFormat == D3DFMT_RAWZ)

        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('D', 'F', '2', '4')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('D', 'F', '1', '6')) ||
        (m_ImageFormat == (D3DFORMAT)MAKEFOURCC('R', 'A', 'W', 'Z'))
    );
}

void TestAllTextureFormats(D3DFORMAT AdapterFormat, int nUsage)
{
    int numFormats = sizeof(formats) / sizeof(formats[0]);

    std::cout << "Testing " << numFormats << " texture formats\n\n";

    for (int i = 0; i < numFormats; i++)
    {
        D3DFORMAT fmt = formats[i];
        int flags = nUsage;
        if ( IsDepthTextureFormat(fmt) ) {
            flags |= D3DUSAGE_DEPTHSTENCIL;
        }

        IsTextureFormatOk(fmt, AdapterFormat, flags);
    }
}

#define bIsRenderTarget         0
#define bIsVertexTexture        0
#define bIsFilterableRequired   0

int main()
{   
    pD3D = Direct3DCreate9(D3D_SDK_VERSION);

    D3DFORMAT AdapterFormat = D3DFMT_X8R8G8B8;

    const char* fmt = D3DFormatToString(AdapterFormat);
    std::cout << "Adapter format:" << fmt << "\n";

    int nUsage = bIsRenderTarget ? D3DUSAGE_RENDERTARGET : 0;
    if (bIsVertexTexture)
    {
        // vertex textures never need filtering
        nUsage |= D3DUSAGE_QUERY_VERTEXTEXTURE;
    }
    if (bIsFilterableRequired)
    {
        nUsage |= D3DUSAGE_QUERY_FILTER;
    }

    TestAllTextureFormats(AdapterFormat, nUsage);
    SetConsoleColor(WHITE);
}

/*
Formats:    https://learn.microsoft.com/en-us/windows/win32/direct3d9/d3dformat
            https://gli.g-truc.net/0.6.1/api/a00001.html#ab59bc46a5291ea9734194c4994ee5cd6a2977a0a06ef6837d6e65cce7c03d25fa
Funcs:      https://learn.microsoft.com/ru-ru/windows/win32/api/d3d9helper/nf-d3d9helper-idirect3d9-checkdeviceformat
*/
