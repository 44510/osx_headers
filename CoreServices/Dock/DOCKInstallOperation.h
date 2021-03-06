//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Tile;

@interface DOCKInstallOperation : NSObject
{
    Tile *_tile;
    Tile *_other;
    int _operation;
}

@property(readonly, nonatomic) int operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) Tile *other; // @synthesize other=_other;
@property(readonly, nonatomic) Tile *tile; // @synthesize tile=_tile;
- (void).cxx_destruct;
- (_Bool)perform;
- (id)initWithTile:(id)arg1 otherTile:(id)arg2 operation:(int)arg3;

@end

