//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct DistXMLJSRuntime {
    id _field1;
    id _field2;
};

struct DistXMLParserData {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
    char _field15;
    id _field16;
    int _field17;
    int _field18;
    int _field19;
    int _field20;
    int _field21;
    id _field22;
    id _field23;
    char _field24;
};

struct DistXMLResources {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
};

struct FSRef {
    unsigned char _field1[80];
};

struct IFCertificateIdentity_Private {
    struct OpaqueSecManifestRef *_field1;
    struct __SecTrust *_field2;
    struct OpaqueSecCertificateRef *_field3;
    id _field4;
    unsigned int _field5;
    id _field6;
    id _field7;
    char _field8;
    int _field9;
    int _field10;
};

struct IFComponent_Private {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
};

struct IFDCustomizationController_Private {
    id _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    char _field6;
    int _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    id _field18;
    id _field19;
    id _field20;
    struct __CFBundle *_field21;
};

struct IFDCustomizationItem_Private {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
};

struct IFDCustomization_Private {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
};

struct IFDInstallController_Private {
    id _field1;
    id _field2;
    id _field3;
    int _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    char _field10;
    id _field11;
    id _field12;
    int _field13;
    int _field14;
    id _field15;
    id _field16;
    id _field17;
    id _field18;
    char _field19;
    id _field20;
    char _field21;
    double _field22;
    id _field23;
    id _field24;
    id _field25;
    id _field26;
};

struct IFDPackageRep_Private {
    id _field1;
    id _field2;
    id _field3;
    int _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    char _field9;
};

struct IFDTargetController_Private {
    id _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    char _field11;
    int _field12;
    char _field13;
    int _field14;
    id _field15;
};

struct IFDTarget_Private {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    int _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
};

struct IFDocument_Private {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
};

struct IFInstallAction_Private {
    id _field1;
    char _field2;
    char _field3;
    char _field4;
    int _field5;
    id _field6;
    id _field7;
    id _field8;
};

struct OpaqueSecCertificateRef;

struct OpaqueSecManifestRef;

struct PathMapping {
    char *_field1;
    char *_field2;
    int _field3;
    struct PathMapping *_field4;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _modDirs_t {
    unsigned int notifyATS:1;
    unsigned int notifyKext:1;
    unsigned int notifyPrefPane:1;
    unsigned int notifyQuickTime:1;
    unsigned int notifyComponents:1;
    unsigned int notifyAudioPlugIns:1;
};

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

