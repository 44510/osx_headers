//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMatrix;

@interface EncodingManager : NSObject
{
    NSMatrix *encodingMatrix;
    NSArray *_topLevelNibObjects;
    NSArray *_encodings;
}

+ (id)allAvailableStringEncodings;
+ (id)sharedInstance;
@property(retain) NSArray *encodings; // @synthesize encodings=_encodings;
@property(retain) NSArray *topLevelNibObjects; // @synthesize topLevelNibObjects=_topLevelNibObjects;
- (void).cxx_destruct;
- (void)revertToDefault:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)clearAll:(id)arg1;
- (void)encodingListChanged:(id)arg1;
- (void)showPanel:(id)arg1;
- (BOOL)worksWhenModal;
- (void)noteEncodingListChange:(BOOL)arg1 updateList:(BOOL)arg2 postNotification:(BOOL)arg3;
- (id)enabledEncodings;
- (void)setupMenu:(id)arg1 selectedEncoding:(unsigned long long)arg2 withDefaultEntry:(BOOL)arg3;
- (void)setupPopUp:(id)arg1 selectedEncoding:(unsigned long long)arg2 withDefaultEntry:(BOOL)arg3;
- (void)setupEncodingsList;
- (id)init;

@end

