//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TNodeViewSettings;

@interface TViewOptionsSettingsController : NSObject
{
    TNodeViewSettings *_targetedViewOptionsSettings;
    NSString *_viewStyleForViewOptions;
    _Bool _shouldShowLibraryFolderButton;
    _Bool _shouldShowLibraryFolder;
}

+ (void)tearDownSharedController;
+ (id)sharedController;
@property(nonatomic) _Bool shouldShowLibraryFolder; // @synthesize shouldShowLibraryFolder=_shouldShowLibraryFolder;
@property(nonatomic) _Bool shouldShowLibraryFolderButton; // @synthesize shouldShowLibraryFolderButton=_shouldShowLibraryFolderButton;
@property(nonatomic) NSString *viewStyleForViewOptions; // @synthesize viewStyleForViewOptions=_viewStyleForViewOptions;
@property(retain, nonatomic) TNodeViewSettings *targetedViewOptionsSettings; // @synthesize targetedViewOptionsSettings=_targetedViewOptionsSettings;
- (void)dealloc;
- (id)init;

@end

