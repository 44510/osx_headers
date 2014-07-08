//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMActivityItemSource.h"
#import "NSPasteboardWriting.h"

@class NSArray, NSString;

@interface IMBlockActivityItemProvider : NSObject <NSPasteboardWriting, IMActivityItemSource>
{
    NSString *_UTI;
    CDUnknownBlockType _resolutionBlock;
    NSArray *_supportedActivityTypes;
    NSString *_activityType;
}

@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSArray *supportedActivityTypes; // @synthesize supportedActivityTypes=_supportedActivityTypes;
@property(copy, nonatomic) CDUnknownBlockType resolutionBlock; // @synthesize resolutionBlock=_resolutionBlock;
@property(retain, nonatomic) NSString *UTI; // @synthesize UTI=_UTI;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithUTI:(id)arg1 resolutionBlock:(CDUnknownBlockType)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

