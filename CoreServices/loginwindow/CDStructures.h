//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AEDesc {
    unsigned int _field1;
    struct OpaqueAEDataStorageType **_field2;
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

struct OpaqueAEDataStorageType;

struct ProcessSerialNumber {
    unsigned int highLongOfPSN;
    unsigned int lowLongOfPSN;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct cssm_guid {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
};

struct cssm_subservice_uid {
    struct cssm_guid Guid;
    struct cssm_version Version;
    unsigned int SubserviceId;
    unsigned int SubserviceType;
};

struct cssm_version {
    unsigned int Major;
    unsigned int Minor;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    struct *_field2;
} CDStruct_166d2db6;

