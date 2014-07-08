//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AuthorizationCallbacks {
    unsigned int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
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

struct SecKeychainSettings {
    unsigned int version;
    unsigned char lockOnSleep;
    unsigned char useLockInterval;
    unsigned int lockInterval;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct cssm_acl_keychain_prompt_selector {
    unsigned short _field1;
    unsigned short _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    Class _field1;
    id _field2;
} CDStruct_fc55cc78;

typedef struct {
    unsigned int _field1;
    struct *_field2;
} CDStruct_166d2db6;

