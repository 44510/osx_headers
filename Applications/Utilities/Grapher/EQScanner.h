//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPScanner.h"

@interface EQScanner : CPScanner
{
    struct _NSRange mOutlineRange;
}

- (BOOL)scanEquation:(id *)arg1;
- (void)setOutlineRange:(struct _NSRange)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)scanZone:(id *)arg1 withClass:(Class)arg2;
- (BOOL)scanZone:(id *)arg1 withClass:(Class)arg2 format:(unsigned long long)arg3;
- (BOOL)scanZone:(id *)arg1;
- (BOOL)scanChar:(id *)arg1;
- (BOOL)scanFactor:(id *)arg1;
- (BOOL)scanLine:(id *)arg1;
- (BOOL)scanLine:(id *)arg1 onlyFactor:(BOOL)arg2;
- (unsigned short)previousCharacter;
- (BOOL)scanShortcut:(id *)arg1;
- (BOOL)scanDot:(id *)arg1;
- (BOOL)scanOrnament:(id *)arg1;

@end

