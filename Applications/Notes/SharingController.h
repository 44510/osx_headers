//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"
#import "NSSharingServiceDelegate.h"
#import "NSSharingServicePickerDelegate.h"

@class NSMenu, NSString;

@interface SharingController : NSObject <NSMenuDelegate, NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    NSMenu *_shareMenu;
}

+ (id)_noteBodyHTMLString:(id)arg1;
+ (id)webArchiveForNote:(id)arg1 atURL:(id)arg2;
@property(retain, nonatomic) NSMenu *shareMenu; // @synthesize shareMenu=_shareMenu;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (void)shareNote:(id)arg1;
- (id)_sharedNote;
- (id)_sharedPlainTextArrayWithAttachments;
- (id)_plainTextRepresentation;
- (id)_sharedWebArchiveArray;
- (void)menuNeedsUpdate:(id)arg1;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (CDUnknownBlockType)handlerForService:(id)arg1;
- (id)createSharingServicePicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
