//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSBaseCardSection.h>

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface PRSTrackListCardSection : PRSBaseCardSection <NSCoding, NSSecureCoding>
{
    NSArray *_tracks;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (void).cxx_destruct;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dict:(id)arg2;
- (id)initWithTitle:(id)arg1 tracks:(id)arg2;

@end

