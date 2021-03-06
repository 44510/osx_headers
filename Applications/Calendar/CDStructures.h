//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned short textureWidth;
    unsigned short textureHeight;
    unsigned short imageWidth;
    unsigned short imageHeight;
    unsigned int textureIndex;
} CDStruct_ff095620;

typedef struct {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
} CDStruct_b2f7276a;

typedef struct {
    char _field1;
    char _field2;
    long long _field3;
} CDStruct_bc94e8e1;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

