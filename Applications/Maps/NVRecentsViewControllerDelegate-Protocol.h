//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NVRecentsViewController, NVSerializableObject;

@protocol NVRecentsViewControllerDelegate <NSObject>
- (void)recentsViewControllerShouldMakeSearchFieldFirstResponder:(NVRecentsViewController *)arg1;
- (void)recentsViewController:(NVRecentsViewController *)arg1 selectedPlaceOrTrip:(NVSerializableObject *)arg2;
- (void)recentsViewControllerSelectedSavedLocations:(NVRecentsViewController *)arg1;
@end
