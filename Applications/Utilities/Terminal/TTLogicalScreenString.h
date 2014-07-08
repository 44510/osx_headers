//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@class TTLogicalScreen;

@interface TTLogicalScreenString : NSString
{
    TTLogicalScreen *_screen;
    CDStruct_bff1fa32 *_UTF8Buffer;
    CDStruct_bff1fa32 *_UTF16Buffer;
    CDStruct_bff1fa32 *_runBuffer;
    struct _NSRange _backingStoreRange;
    unsigned long long _generation;
}

+ (id)stringWithLogicalScreen:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)offsetToActiveArea;
- (unsigned long long)activeLength;
- (unsigned long long)length;
- (id)logicalScreen;
- (void)dealloc;
- (id)initWithLogicalScreen:(id)arg1;

@end
