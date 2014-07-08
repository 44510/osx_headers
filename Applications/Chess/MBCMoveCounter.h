//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MBCMoveBuilder.h"

@interface MBCMoveCounter : NSObject <MBCMoveBuilder>
{
    int fCount;
    _Bool fCounting;
}

- (void)validCastle:(unsigned char)arg1 kingSide:(BOOL)arg2;
- (void)validDrop:(unsigned char)arg1 at:(unsigned char)arg2;
- (void)validMove:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 capturing:(unsigned char)arg4;
- (void)validMove:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
- (void)endMoveList;
- (void)startUnambiguousMoves;
- (void)startMoveList:(BOOL)arg1;
- (int)count;

@end
