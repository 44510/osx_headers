//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IMActivityController : NSObject
{
    BOOL _managedBook;
    CDUnknownBlockType _completionHandler;
    Class _fallbackViewControllerClass;
    NSArray *_activityItems;
    NSArray *_applicationActivities;
    NSArray *_expandedActivityItems;
    NSArray *_excludedActivityTypes;
}

@property(nonatomic, getter=isManagedBook) BOOL managedBook; // @synthesize managedBook=_managedBook;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(retain, nonatomic) NSArray *expandedActivityItems; // @synthesize expandedActivityItems=_expandedActivityItems;
@property(retain, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(retain, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(retain, nonatomic) Class fallbackViewControllerClass; // @synthesize fallbackViewControllerClass=_fallbackViewControllerClass;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (id)expandedActivityItemsFromActivityItems:(id)arg1 conformingToProtocol:(id)arg2;
- (id)allActivityTypes;
- (void)_sharingService:(id)arg1 didShareItems:(id)arg2 success:(BOOL)arg3;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (void)performShareWithService:(id)arg1;
- (void)performShare:(id)arg1;
- (id)sharingServicesRemovingExcludedServicesFromServices:(id)arg1;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (id)sharingServices;
- (id)sharingServicePicker;
- (id)menuItems;
- (void)updateMenu:(id)arg1;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end

