//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBCPlayer.h"

@interface MBCRemotePlayer : MBCPlayer
{
    BOOL fHasObservers;
}

- (void)endOfGame:(id)arg1;
- (void)takeback:(id)arg1;
- (void)opponentMoved:(id)arg1;
- (void)startGame:(int)arg1 playing:(int)arg2;
- (void)dealloc;
- (void)removeChessObservers;

@end
