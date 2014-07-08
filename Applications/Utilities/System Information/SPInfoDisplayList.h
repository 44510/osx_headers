//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSMutableArray, NSMutableDictionary, NSString;

@interface SPInfoDisplayList : NSObject
{
    NSBundle *_bundle;
    NSMutableArray *_displays;
    NSString *_mainGfxDisplayName;
    NSMutableDictionary *_gfxDisplayNames;
}

@property(retain, nonatomic) NSMutableDictionary *gfxDisplayNames; // @synthesize gfxDisplayNames=_gfxDisplayNames;
@property(retain, nonatomic) NSString *mainGfxDisplayName; // @synthesize mainGfxDisplayName=_mainGfxDisplayName;
@property(retain, nonatomic) NSMutableArray *displays; // @synthesize displays=_displays;
- (id)localizedString:(id)arg1;
- (id)gfxDisplayNameForSerial:(unsigned long long)arg1;
- (void)dealloc;
- (void)updateDisplaysList;
- (id)initWithDocument:(id)arg1;

@end

