//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CannedVideoCapturePrivate {
    struct _opaque_pthread_mutex_t _field1;
    int _field2;
    CDUnknownFunctionPointerType _field3;
    void *_field4;
    unsigned int _field5;
    int _field6;
    struct OpaqueCMClock *_field7;
    char _field8;
    char _field9;
    struct OpaqueFigThread *_field10;
    char _field11;
    struct _opaque_pthread_mutex_t _field12;
    struct _opaque_pthread_cond_t _field13;
    struct OpaqueFigThread *_field14;
    char _field15;
    struct _opaque_pthread_mutex_t _field16;
    struct _opaque_pthread_cond_t _field17;
    struct _opaque_pthread_mutex_t _field18;
    struct Frame *_field19;
    int _field20;
};

struct DSPSplitComplex {
    float *realp;
    float *imagp;
};

struct Frame;

struct OpaqueAudioConverter;

struct OpaqueCMClock;

struct OpaqueFigThread;

struct SoundDec_t {
    struct AudioStreamBasicDescription _field1;
    struct AudioStreamBasicDescription _field2;
    int _field3;
    int _field4;
    struct OpaqueAudioConverter *_field5;
    char *_field6;
    int _field7;
    struct AudioStreamPacketDescription _field8;
    char *_field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    unsigned char _field14;
    int _field15;
    int _field16;
    unsigned int _field17;
    unsigned int _field18;
};

struct VoiceIOFarEndVersionInfo {
    unsigned char _field1[64];
    unsigned char _field2[64];
    unsigned int _field3;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _opaque_pthread_cond_t {
    long long __sig;
    char __opaque[40];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct imageTag {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    float _field8;
    int _field9;
};

struct in_addr {
    unsigned int s_addr;
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

struct tagBufferNode {
    char *_field1;
    int _field2;
    int _field3;
    struct tagBufferNode *_field4;
};

struct tagCANDIDATE {
    int _field1;
    int _field2;
    unsigned int _field3;
    unsigned char _field4[8];
    unsigned short _field5;
    unsigned short _field6;
    struct tagIPPORT _field7;
    struct tagIPPORT _field8;
    struct tagIPPORT _field9;
    unsigned int _field10;
};

struct tagCONNRESULT {
    unsigned int dwCallID;
    int iResultCount;
    int iRole;
    unsigned int dwRemoteCallID;
    int proto;
    int bIfRelay;
    unsigned short wRelayServType;
    unsigned short wChannelNumber;
    struct tagIPPORT mbLocal;
    struct tagIPPORT mbRemote;
    struct tagIPPORT mbSrc;
    struct tagIPPORT mbDst;
    struct tagIPPORT mbRemoteSrc;
    struct tagIPPORT mbRelayExt;
    unsigned int dwRTT;
    int bIfLocalCellularQoS;
    int bIfRemoteCellularQoS;
    int iLocalCellTech;
    int iRemoteCellTech;
    unsigned int dwCellularUniqueTag;
    unsigned short wCellularMTU;
    int bIfUpgrade;
    int bIfPrimary;
    int bIfReplaceOnly;
    struct tagCONNRESULT *next;
};

struct tagCommNATInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3[3];
    unsigned int _field4;
};

struct tagEncodedAudio {
    unsigned int _field1;
    float _field2;
    int _field3;
    unsigned char _field4[16];
    unsigned char _field5;
};

struct tagHANDLE {
    int _field1;
};

struct tagIPPORT {
    int iFlags;
    char szIfName[16];
    union {
        unsigned int dwIPv4;
        unsigned char abIPv6[16];
    } IP;
    unsigned short wPort;
};

struct tagSIPCallbackData {
    void *_field1;
    struct tagCONNRESULT _field2;
    int _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

