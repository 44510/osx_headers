//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct MBCMoveCollection {
    struct MBCPieceMoves fMoves[7];
    struct MBCPieceMoves fUnambiguousMoves[7];
    unsigned long long fPawnDrops;
    unsigned long long fPieceDrops;
    char fDroppablePieces;
    _Bool fCastleKingside;
    _Bool fCastleQueenside;
    _Bool fWhiteMoves;
};

struct MBCMoveGenerator {
    id _field1;
    long long _field2;
    int _field3;
    int _field4;
    unsigned char _field5;
    unsigned char _field6;
    struct MBCPieces *_field7;
    _Bool _field8;
    unsigned char _field9[64];
    unsigned char _field10[64];
};

struct MBCPieceMoves {
    int fNumInstances;
    unsigned char fFrom[16];
    unsigned long long fTo[16];
};

struct MBCPieces {
    unsigned char fBoard[64];
    char fInHand[16];
    unsigned char fEnPassant;
};

struct MBCPosition {
    float pos[3];
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

