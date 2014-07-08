//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicateEditorRowTemplate.h"

@class NSPopUpButton;

@interface TrackKindsRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_keyPathPopup;
    NSPopUpButton *_operatorPopup;
    NSPopUpButton *_trackKindsPopup;
}

@property(readonly) NSPopUpButton *trackKindsPopup; // @synthesize trackKindsPopup=_trackKindsPopup;
@property(readonly) NSPopUpButton *operatorPopup; // @synthesize operatorPopup=_operatorPopup;
@property(readonly) NSPopUpButton *keyPathPopup; // @synthesize keyPathPopup=_keyPathPopup;
- (void)dealloc;
- (id)predicateWithSubpredicates:(id)arg1;
- (id)displayableSubpredicatesOfPredicate:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (void)loadViewsIfNecessary;
- (id)itemTitles;

@end

